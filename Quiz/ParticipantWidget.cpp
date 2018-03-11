#include "ParticipantWidget.h"

ParticipantWidget::ParticipantWidget(Controller* c, Participant& p, QWidget *parent)
	: QWidget(parent), participant(p), ctrl(c)
{
	ui.setupUi(this);
	this->init();
	this->connectAll();
}

void ParticipantWidget::init()
{
	this->ui.score->setText(QString::number(this->participant.getScore()));
	if (this->ui.questions->count() > 0)
		this->ui.questions->clear();

	std::vector<Question> questions = this->ctrl->repo->getAll();
	Question aux;
	for(int i = 0; i < questions.size() - 1; i++)
		for(int j = i + 1; j < questions.size(); j++)
			if (questions[i].getScore() < questions[j].getScore())
			{
				aux = questions[i];
				questions[i] = questions[j];
				questions[j] = aux;
			}

	for (int i = 0; i < questions.size(); i++)
	{
		QString itemString = QString{ QString::number(questions[i].getId()) + " - " + \
			QString::fromStdString(questions[i].getText()) + " - "\
			+ QString::number(questions[i].getScore()) };
		QListWidgetItem* item = new QListWidgetItem(itemString);
		if (this->answers.size() > i && this->answers[i] != "")
		{
			this->ui.answerButton->setDisabled(true);
			item->setBackground(QColor{ 0,255,0 });
		}
		this->ui.questions->addItem(item);
	}
}

ParticipantWidget::~ParticipantWidget()
{

}

void ParticipantWidget::connectAll()
{
	QObject::connect(this->ui.answerButton, SIGNAL(clicked()), SLOT(answerButtonHandler()));
	QObject::connect(this->ui.questions, SIGNAL(itemSelectionChanged()), this, SLOT(enableButton()));
}

void ParticipantWidget::answerButtonHandler()
{
	std::string answer = this->ui.answerTextBox->toPlainText().toStdString();

	QModelIndexList index = this->ui.questions->selectionModel()->selectedIndexes();

	int i = index.at(0).row();

	if (this->ctrl->repo->getAll()[i].getAnswer() == answer)
		this->participant.addScore(this->ctrl->repo->getAll()[i].getScore());

	if (this->answers.size() <= i)
	{
		for (int j = this->answers.size(); j <= i; j++)
			this->answers.push_back("");
	}

	this->answers[i] = answer;
	this->init();
}

void ParticipantWidget::enableButton()
{
	if (this->ui.questions->currentItem()->isSelected())
	{
		QModelIndexList index = this->ui.questions->selectionModel()->selectedIndexes();
		int i = index.at(0).row();

		if (this->answers.size() > i && this->answers[i] != "")
			this->ui.answerButton->setEnabled(false);
		else
			this->ui.answerButton->setEnabled(true);
	}

}