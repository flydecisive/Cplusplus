// Разработать программу, 
// которая выводит на экран линию из символов. Число символов, какой использовать символ, и какая будет линия - вертикальная, или горизонтальная - указывает пользователь. 

#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	int len, i = 1;
	char symbol, lineType;
	cout << "Укажите длинну линии: ";
	cin >> len;
	cout << "Из какого символа будет состоять линия: ";
	cin >> symbol;
	cout << "Какая будет линия? v - vertical, h - horizontal ";
	cin >> lineType;
	cout << "\n";
	do {
		switch (lineType) {
		case 'v':
			cout << symbol << "\n";
			break;
		case 'h':
			cout << symbol;
			break;
		default:
			cout << "Не известная команда";
			break;
		}
		i++;
	} while (i <= len);
}