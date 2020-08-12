// Given a string of digits, you should replace any digit below 5 with '0' and any digit 5 and above with '1'. Return the resulting string.

#include <iostream>
#include <string>

using namespace std;

std::string fakeBin(std::string str) {
	string newStr = "";
	for (int i = 0; i < str.length(); i++) {
		if (int(str[i]) - 48 >= 5) {
			newStr += '1';
		}
		else {
			newStr += '0';
		}
	}
	return newStr;
}

int main() {
	string numbers;
	cin >> numbers;
	cout << fakeBin(numbers);
	return 0;
}