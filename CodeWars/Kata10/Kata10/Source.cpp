// Create a function is_uppercase() to see whether the string is ALL CAPS

#include <iostream>
#include <string>

using namespace std;

bool is_uppercase(const std::string& s) {
	int count = 0;
	int spaceCount = 0;
	if (s.size() == 0) {
		return true;
	}
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == ' ') {
			count++;
			spaceCount++;
		}
		else if (isupper(s[i])) {
			count++;
		}
	}
	if (spaceCount > 0 && count == 0) {
		return true;
	}
	if (count == s.size()) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	cout << is_uppercase("AAAAAAAAAAA");

	return 0;
}