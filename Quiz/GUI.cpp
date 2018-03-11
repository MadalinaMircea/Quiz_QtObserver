#include "GUI.h"
#include <fstream>
#include "Participant.h"
using namespace std;

void GUI::readParticipants()
{
	ifstream fin("participants.txt");

	Participant p;
	while (fin >> p)
		this->participants.push_back(p);
}

void GUI::createParticipants()
{
	for (int i = 0; i < this->participants.size(); i++)
	{
		ParticipantWidget* participant = new ParticipantWidget{ this->ctrl, this->participants[i] };
		this->participantWidgets.push_back(participant);
		this->participantWidgets[i]->setWindowTitle(QString::fromStdString(this->participants[i].getName()));
		this->ctrl->repo->addObserver(this->participantWidgets[i]);
		this->participantWidgets[i]->show();
	}
}

GUI::GUI(Controller* c) : ctrl(c)
{
	this->presenterWidget = new PresenterWidget{ this->ctrl };
	this->presenterWidget->setWindowTitle("Presenter");
	this->ctrl->repo->addObserver(this->presenterWidget);
	this->presenterWidget->show();
	this->readParticipants();
	this->createParticipants();
}