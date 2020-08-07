// Выведите все четные элементы массива.

#include <iostream>
#include <vector>

using namespace std;

int main() {
	int len;
	cin >> len;
	vector <int> list(len);
	for (int i = 0; i < len; i++) {
		cin >> list[i];
	}
	for (int i = 0; i < len; i++) {
		if (list[i] % 2 == 0) {
			cout << list[i] << " ";
		}
	}
	return 0;
}