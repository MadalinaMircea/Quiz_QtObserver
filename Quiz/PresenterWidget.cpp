#include "PresenterWidget.h"
#include "qmessagebox.h"

PresenterWidget::PresenterWidget(Controller* c, QWidget *parent)
	: QWidget(parent), ctrl(c)
{
	ui.setupUi(this);
	this->init();
	this->connectAll();
}

PresenterWidget::~PresenterWidget()
{

}

void PresenterWidget::init()
{
	if (this->ui.questionList->count() > 0)
		this->ui.questionList->clear();

	std::vector<Question> questions = this->ctrl->repo->getAll();
	Question aux;

	for(int i = 0; i < questions.size() - 1; i++)
		for(int j = i + 1; j < questions.size(); j++)
			if (questions[i].getId() > questions[j].getId())
			{
				aux = questions[i];
				questions[i] = questions[j];
				questions[j] = aux;
			}

	for (auto q : questions)
	{
		QString itemString = QString{ QString::number(q.getId()) + " - " + \
			QString::fromStdString(q.getText()) + " - " + \
			QString::fromStdString(q.getAnswer()) + " - " + QString::number(q.getScore()) };
		QListWidgetItem* item = new QListWidgetItem(itemString);
		this->ui.questionList->addItem(item);
	}
}

void PresenterWidget::connectAll()
{
	QObject::connect(this->ui.pushButton, SIGNAL(clicked()), SLOT(addButtonHandler()));
}

void PresenterWidget::addButtonHandler()
{
	int id = this->ui.idTextBox->text().toInt();
	std::string text = this->ui.questionTextBox->text().toStdString();
	int score = this->ui.scoreTextBox->text().toInt();
	std::string answer = this->ui.answerTextBox->toPlainText().toStdString();

	try
	{
		this->ctrl->add(id, text, answer, score);
		this->init();
	}
	catch (std::exception& e)
	{
		QMessageBox error;
		error.critical(0, "Error", e.what());
		error.show();
	}
}