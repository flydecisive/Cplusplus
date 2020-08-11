// Заполнить двумерный массив случайными числами
// UPD заполнить уникальными числами в строке

#include <iostream>
#include <ctime>

using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	bool already;
	int rnd;
	const int ROWS = 5;
	const int COLS = 8;
	int arr[ROWS][COLS];
	srand(time(NULL));
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; ) {
			already = false;
			//srand(time(NULL));
			rnd = rand() % 100;
			for (int k = 0; k < j; k++) {
				if (arr[i][k] == rnd) {
					already = true;
					break;
				}
			}
			if (!already) {
				arr[i][j] = rnd;
				j++;
			}
		}
	}
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}

	return 0;
}