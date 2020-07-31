// Calculator version 1.0
// Calculator version 1.1 Пока пользователь хочет пользоваться калькулятором, он будет работать непрерывно
// Calculator version 1.2 Сделать так, чтобы консоль очищалась после запроса пользователю
// Calculator version 1.3 Добавить считывание строк
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	cout << "Добро пожаловать в мой калькулятор!" << endl;
	cout << "В первой версии поддерживаются только целые числа!" << endl;
	int fNum, sNum;
	char operation, question, questionCls;
	cout << "Хотите воспользоваться калькулятором? (Y / N): ";
	cin >> question;
	cout << question << endl;
	if (question == 'Y') {
		while (question == 'Y') {
			cout << "Хотите очистить экран от предыдущих записей? (Y / N):  ";
			cin >> questionCls;
			if (questionCls == 'Y') {
				system("cls");
			}
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
				cout << endl << "Я еще не научился выполнять такие операции:(";
				break;
			}
			cout << endl << "Хотите воспользоваться калькулятором? (Y / N): ";
			cin >> question;
		}
		cout << "Спасмбо за использование калькулятора! Приходите еще!";
	}
	else {
		cout << "Спасибо, что зашли!";
	}
	return 0;
}