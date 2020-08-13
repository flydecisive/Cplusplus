// Define String.prototype.toAlternatingCase (or a similar function/method such as to_alternating_case/toAlternatingCase/ToAlternatingCase in your selected language; 
// see the initial solution for details) such that each lowercase letter becomes uppercase and each uppercase letter becomes lowercase. 

#include <iostream>
#include <string>

using namespace std;

string to_alternating_case(const string& str)
{
	string newStr;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == ' ') {
			newStr += str[i];
		}
		else if (isalpha(str[i])) {
			if (islower(str[i])) {
				newStr += toupper(str[i]);
			}
			else if (isupper(str[i])) {
				newStr += tolower(str[i]);
			}
		}
		else {
			newStr += str[i];
		}
	}
	return newStr;
}

int main() {
	cout << to_alternating_case("hello world 123123");
	return 0;
}