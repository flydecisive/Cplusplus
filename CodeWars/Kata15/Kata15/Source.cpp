// https://www.codewars.com/kata/5a71939d373c2e634200008e/train/cpp

#include <iostream>
#include <string>

using namespace std;

std::string solve(string s) {
	string newStr;
	for (int i = s.size() - 1; i >= 0; i--) {
		newStr += s[i];
	}
	return newStr;
}

int main() {
	cout << solve("your code rocks");
	return 0;
}