// Calculator version 1.0
// Calculator version 1.1 Пока пользователь хочет пользоваться калькулятором, он будет работать непрерывно
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	cout << "Добро пожаловать в мой калькулятор!" << endl;
	cout << "В первой версии поддерживаются только целые числа!" << endl;
	int fNum, sNum, question;
	char operation;
	cout << "Хотите воспользоваться калькулятором? (1 - Д/ 0 - Н): ";
	cin >> question;
	if (question == 1) {
		while (question == 1) {
			cout << "Введите первое число: ";
			cin >> fNum;
			cout << "Введите второе число: ";
			cin >> sNum;
			cout << endl << endl;
			cout << "\t" << "###Список команд:###" << "\n"
				<< "\t" << "Сложение: +" << "\n"
				<< "\t" << "Вычитание: -" << "\n"
				<< "\t" << "Умножение: *" << "\n"
				<< "\t" << "Целочисленное деление: /" << "\n"
				<< "\t" << "Взятие остатка: %" << "\n" << endl;
			cout << "Введите команду: ";
			cin >> operation;
			cout << fNum << " " << operation << " " << sNum << " = ";
			switch (operation) {
			case '+':
				cout << fNum + sNum;
				break;
			case '-':
				cout << fNum - sNum;
				break;
			case '*':
				cout << fNum * sNum;
				break;
			case '/':
				cout << fNum / sNum;
				break;
			case '%':
				cout << fNum % sNum;
				break;
			default:
				cout << "Я еще не научился выполнять такие операции:(";
				break;
			}
			cout << endl << "Хотите воспользоваться калькулятором? (1 - Д/ 0 - Н): ";
			cin >> question;
		}
		cout << "Спасмбо за использование калькулятора! Приходите еще!";
	}
	else {
		cout << "Спасибо, что зашли!";
	}
	return 0;
}