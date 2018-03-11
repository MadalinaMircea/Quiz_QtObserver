#pragma once
#include "Question.h"
#include <vector>
#include "Observer.h"

class Repository : public Observable
{
	std::vector<Question> questions;

public:
	Repository() { this->loadFromFile(); }
	~Repository() {}

	std::vector<Question> getAll() { return this->questions; }
	int size() { return this->questions.size(); }
	void loadFromFile();
	void writeToFile();
	void add(Question& q) { this->questions.push_back(q); this->writeToFile(); this->notify(); }
};