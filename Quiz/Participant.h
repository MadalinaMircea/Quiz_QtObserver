#pragma once
#include <string>
#include <iostream>

class Participant
{
	int score;
	std::string name;

public:
	Participant() : name(""), score(0) {}
	Participant(std::string name, int score);
	~Participant() {}

	int getScore() { return this->score; }
	std::string getName() { return this->name; }
	void addScore(int s) { this->score = this->score + s; }

	friend std::istream& operator >> (std::istream& is, Participant& p);
	friend std::ostream& operator << (std::ostream& os, Participant& p);
};