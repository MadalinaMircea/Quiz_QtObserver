#ifndef PARTICIPANTWIDGET_H
#define PARTICIPANTWIDGET_H

#include <QWidget>
#include "ui_ParticipantWidget.h"
#include "Participant.h"
#include "Controller.h"
#include "Observer.h"

class ParticipantWidget : public QWidget, public Observer
{
	Q_OBJECT

public:
	Participant participant;
	Controller* ctrl;
	std::vector<std::string> answers;
	ParticipantWidget(Controller* r, Participant& p, QWidget *parent = 0);
	~ParticipantWidget();

	void init();
	void connectAll();
	void update() override { this->init(); }

private slots:
	void answerButtonHandler();
	void enableButton();
private:
	Ui::ParticipantWidget ui;
};

#endif // PARTICIPANTWIDGET_H
