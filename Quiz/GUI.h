#pragma once
#include "Controller.h"
#include "ParticipantWidget.h"
#include "PresenterWidget.h"

class GUI
{
	Controller* ctrl;
	PresenterWidget* presenterWidget;
	std::vector<ParticipantWidget*> participantWidgets;
	std::vector<Participant> participants;
public:
	GUI(Controller* c);
	~GUI() { delete ctrl; }

	void init();
	void readParticipants();
	void createParticipants();
};