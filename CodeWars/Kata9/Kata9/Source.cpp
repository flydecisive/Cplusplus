//Given an integral number of watermelons w(1 ≤ w ≤ 100; 1 ≤ w in Haskell), check whether Peteand Billy can divide the melons so that each of them gets an even amount.

#include <iostream>

using namespace std;

bool divide(unsigned weight)
{
	bool answer = false;
	if (weight <= 2) {
		answer = false;
	}
	else if ((weight - 2) % 2 == 0) {
		answer = true;
	}
	return answer;
}

int main() {
	cout << divide(8);
	return 0;
}