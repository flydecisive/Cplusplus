//Write a function to convert a name into initials.This kata strictly takes two words with one space in between them.
//The output should be two capital letters with a dot separating them.

#include <iostream>
#include <string>

using namespace std;

std::string abbrevName(std::string name)
{
	char abbrev[3];
	abbrev[0] = toupper(name[0]);
	abbrev[1] = '.';
	for (int i = 0; i < name.size(); i++) {
		if (name[i] == ' ') {
			abbrev[2] = toupper(name[i + 1]);
		}
	}
	string str(abbrev, sizeof(abbrev));
	return str;
}

int main() {
	string fullName;
	getline(cin, fullName);
	cout << fullName << endl;
	cout << abbrevName(fullName);
	return 0;
}