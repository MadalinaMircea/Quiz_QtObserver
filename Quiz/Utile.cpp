#include "Utile.h"
#include <sstream>
using namespace std;

std::vector<std::string> tokenize(std::string line, char delim)
{
	stringstream ss(line);
	string token;
	vector<string> result;

	while (getline(ss, token, delim))
		result.push_back(token);

	return result;
}