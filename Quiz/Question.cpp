#include "Question.h"
#include "Utile.h"
#include <fstream>
using namespace std;
istream& operator >> (istream& is, Question& q)
{
	string line;
	getline(is, line);
	vector<string> result = tokenize(line, ',');

	if (result.size() != 4)
		return is;

	q.id = stoi(result[0]);
	q.text = result[1];
	q.answer = result[2];
	q.score = stoi(result[3]);

	return is;
}

ostream& operator << (ostream& os, Question& q)
{
	os << q.id << "," << q.text << "," << q.answer << "," << q.score;
	return os;
}

Question::Question(int id, std::string text, std::string answer, int score) : 
id(id), text(text), answer(answer), score(score)
{
}
