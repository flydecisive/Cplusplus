// Написать программу, которая находит сумму всех целых нечетных чисел в диапазоне, указанном пользователе.

#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	int sum = 0, floor, top, floor2;
	cout << "Введите нижнюю границу:  ";
	cin >> floor;
	floor2 = floor;
	cout << "Введите верхнюю границу: ";
	cin >> top;
	do {
		if (floor % 2 == 1) {
			sum += floor;
		}
		floor++;
	} while (floor <= top);
	cout << "Сумма нечетных чисел в диапазоне от " << floor2 << " до " << top << " = " << sum;
}