//You are given the lengthand width of a 4 - sided polygon.The polygon can either be a rectangle or a square.
//If it is a square, return its area.If it is a rectangle, return its perimeter.

#include <iostream>

using namespace std;

int area_or_perimeter(int l, int w) {
	if (l == w) {
		return l * w;
	}
	else {
		return l * 2 + w * 2;
	}
}

int main() {
	cout << area_or_perimeter(6, 10);
	return 0;
}