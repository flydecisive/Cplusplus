// Make a function that will return a greeting statement that uses an input; your program should return, "Hello, <name> how are you doing today?".
//[Make sure you type the exact thing I wrote or the program may not execute properly]

#include <iostream>
#include <string>

using namespace std;

std::string greet(const std::string& n) {
	return "Hello, " + n + " how are you doing today?";
}

int main() {
	string name;
	cin >> name;
	cout << greet(name);
	return 0;
}