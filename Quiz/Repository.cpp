#include "Repository.h"
#include <fstream>
using namespace std;

void Repository::loadFromFile()
{
	ifstream fin("questions.txt");
	Question q;
	while (fin >> q)
		this->questions.push_back(q);
	fin.close();
}
void Repository::writeToFile()
{
	ofstream fout("questions.txt");
	for (auto q : this->questions)
		fout << q << '\n';

	fout.close();
}