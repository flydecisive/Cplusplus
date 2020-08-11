// «аполнить двумерный массив случайными числами

#include <iostream>
#include <ctime>

using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	const int ROWS = 5;
	const int COLS = 8;
	int arr[ROWS][COLS];
	srand(time(NULL));
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			arr[i][j] = rand() % 100;
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