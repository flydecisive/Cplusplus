// Create a function called that accepts 2 string arguments and returns an integer of the count of occurrences the 2nd argument is found in the first one.

#include <iostream>
#include <string>

using namespace std;

unsigned int strCount(std::string word, char letter) {
	int count = 0;
	for (int i = 0; i < word.size(); i++) {
		if (word[i] == letter) {
			count++;
		}
	}
	return count;
}

int main() {
	cout << strCount("dsafasdf", 'f');
	return 0;
}