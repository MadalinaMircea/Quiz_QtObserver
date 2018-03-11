#include "Controller.h"

void Controller::add(int id, std::string text, std::string answer, int score)
{
	int pos = this->find(id);
	if (pos != -1)
		throw std::exception("ID already in use.");

	if (text == "")
		throw std::exception("Invalid question.");
	
	Question q{ id, text, answer, score };
	this->repo->add(q);
}
int Controller::find(int id)
{
	for (int i = 0; i < this->repo->size(); i++)
		if (this->repo->getAll()[i].getId() == id)
			return i;

	return -1;
}