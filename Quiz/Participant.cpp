#include "Participant.h"
#include "Utile.h"
#include <fstream>
using namespace std;

Participant::Participant(std::string name, int score) : name(name), score(score)
{
}

istream& operator >> (istream& is, Participant& p)
{
	string line;
	getline(is, line);
	vector<string> result = tokenize(line, ',');

	if (result.size() != 2)
		return is;

	p.score = stoi(result[1]);
	p.name = result[0];

	return is;
}

ostream& operator << (ostream& os, Participant& q)
{
	os << q.name << "," << q.score;
	return os;
}