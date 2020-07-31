// Calculator version 1.0
// Calculator version 1.1 Пока пользователь хочет пользоваться калькулятором, он будет работать непрерывно
// Calculator version 1.2 Сделать так, чтобы консоль очищалась после запроса пользователю
// Calculator version 1.3 Добавить считывание строк
// Calculator version 1.4 Добавить работу с double
// Calculator version 1.5 Расширить список команд (частично реализованно)
// Calculator version 1.6 Добавить точность отображения на выбор пользователя (не реализованно)
// Calculator version 1.7 Раскрашивать ответы в разные цвета (не реализовано)
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	cout << "Добро пожаловать в мой калькулятор!" << endl;
	double fNum, sNum;
	char operation, question, questionCls, questionSqrt;
	cout << "Хотите воспользоваться калькулятором? (y / n): ";
	cin >> question;
	if (question == 'y') {
		while (question == 'y') {
			cout << "Хотите очистить экран от предыдущих записей? (y / n):  ";
			cin >> questionCls;
			if (questionCls == 'y') {
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
				<< "\t" << "Взятие остатка: % (работает только с целыми числами)" << "\n" 
				<< "\t" << "Возведение в степень: p" << "\n"
				<< "\t" << "Квадратный корень: s" << endl << endl;
			cout << "Введите команду: ";
			cin >> operation;
			cout << setprecision(3) << fixed;
			switch (operation) {
			case '+':
				cout << fNum << " " << operation << " " << sNum << " = " << fNum + sNum;
				break;
			case '-':
				cout << fNum << " " << operation << " " << sNum << " = " << fNum - sNum;
				break;
			case '*':
				cout << fNum << " " << operation << " " << sNum << " = " << fNum * sNum;
				break;
			case '/':
				cout << fNum << " " << operation << " " << sNum << " = " << fNum / sNum;
				break;
			case '%':
				cout << fNum << " " << operation << " " << sNum << " = " << (int)fNum % (int)sNum;
				break;
			case 'p':
				cout << fNum << " " << " ** " << " " << sNum << " = " << pow(fNum, sNum);
				break;
			case 's':
				cout << "Для какого числа будем считать корень? (1 / 2): ";
				cin >> questionSqrt;
				if (questionSqrt == '1') {
					cout << "Корень из " << fNum << " = " << sqrt(fNum);
				}
				else {
					cout << "Корень из " << sNum << " = " << sqrt(sNum);;
				}
				break;
			default:
				cout << endl << "Я еще не научился выполнять такие операции:(";
				break;
			}
			cout << endl << "Хотите воспользоваться калькулятором? (y / n): ";
			cin >> question;
		}
		cout << "Спасмбо за использование калькулятора! Приходите еще!";
	}
	else {
		cout << "Спасибо, что зашли!";
	}
	return 0;
}