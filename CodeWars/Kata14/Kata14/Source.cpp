/*There was a test in your classand you passed it.Congratulations!
But you're an ambitious person. You want to know if you're better than the average student in your class.
You receive an array with your peers' test scores. Now calculate the average and compare your score!
Return True if you're better, else False!*/

#include <iostream>
#include <vector>

using namespace std;

bool betterThanAverage(std::vector<int> classPoints, int yourPoints) {
	classPoints.push_back(yourPoints);
	int sum = 0;
	int vectSize = classPoints.size();
	for (auto i : classPoints) {
		sum += i;
	}
	if (sum / vectSize > yourPoints) {
		return false;
	}
	else {
		return true;
	}
}

int main() {
	cout << betterThanAverage({ 2, 3 }, 5);
	return 0;
}