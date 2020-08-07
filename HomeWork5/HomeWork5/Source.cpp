// Найдите количество положительных элементов в данном массиве.

#include <iostream>
#include <vector>

using namespace std;

int main() {
	int len, count = 0;
	cin >> len;
	vector <int> list(len);
	for (int i = 0; i < len; i++) {
		cin >> list[i];
	}
	for (int i = 0; i < len; i++) {
		if (list[i] > 0) {
			count++;
		}
	}
	cout << count;
	return 0;
}