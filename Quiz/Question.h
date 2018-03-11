#pragma once
#include <string>
#include <iostream>

class Question
{
	int id, score;
	std::string text, answer;

public:
	Question() : id(0), text(""), answer(""), score(0) {}
	Question(int id, std::string text, std::string answer, int score);
	~Question() {}

	int getId() { return this->id; }
	int getScore() { return this->score; }
	std::string getText() { return this->text; }
	std::string getAnswer() { return this->answer; }

	friend std::istream& operator >> (std::istream& is, Question& q);
	friend std::ostream& operator << (std::ostream& os, Question& q);
};