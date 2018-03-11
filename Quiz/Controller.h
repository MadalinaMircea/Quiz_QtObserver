#pragma once
#include "Repository.h"

class Controller
{
public:
	Repository* repo;
	Controller(Repository* r) : repo(r) {}
	~Controller() { delete repo; }

	void add(int id, std::string text, std::string answer, int score);
	int find(int id);
};