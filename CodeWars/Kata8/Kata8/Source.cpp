//You get an array of numbers, return the sum of all of the positives ones.

#include <iostream>
#include <vector>

using namespace std;

int positive_sum(const std::vector<int> arr) {
	int sum = 0;
	for (auto i : arr) {
		if (i > 0) {
			sum += i;
		}
	}
	return sum;
}

int main() {
	vector <int> arr;
	cout << positive_sum(arr);
	return 0;
}