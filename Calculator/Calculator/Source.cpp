// Calculator version 1.0
// Calculator version 1.1 Пока пользователь хочет пользоваться калькулятором, он будет работать непрерывно
// Calculator version 1.2 Сделать так, чтобы консоль очищалась после запроса пользователю
// Calculator version 1.3 Добавить считывание строк
// Calculator version 1.4 Добавить работу с double
// Calculator version 1.5 Расширить список команд
// Calculator version 1.6 Добавить точность отображения на выбор пользователя
// Calculator version 1.7 Раскрашивать ответы в разные цвета
// Calculator version 1.8 Сделать инженерный режим с тригонометрическими функциями и числом пи
// Calculator version 1.9 Отрисовать рамку из решоток вокруг приветствия голубым цветом
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <stdio.h>


using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	cout << "\t\t\t\t\x1b[36m  ###############################################\x1b[0m\n";
	cout << "\t\t\t\t\x1b[36m  #                                             #\x1b[0m\n";
	cout << "\t\t\t\t  \x1b[36m#\x1b[0m\t"<< "\033[33mДобро пожаловать в мой калькулятор!\033[0m" << "\t\x1b[36m#\x1b[0m" << endl;
	cout << "\t\t\t\t\x1b[36m  #                                             #\x1b[0m\n";
	cout << "\t\t\t\t\x1b[36m  ###############################################\x1b[0m\n\n";
	double fNum, sNum, acc, questionMod, piNum = atan(1) * 4, num;
	char question, questionCls, questionRound;
	string operation;
	cout << "\033[33mХотите воспользоваться калькулятором? (y / n): \033[0m";
	cin >> question;
	if (question == 'y') {
		cout << "\033[32mВыбирите режим: (1 - Обычный | 2 - Инженерный) \033[0m\t";
		cin >> questionMod;
		cout << "Выбирите точность отображения чисел после запятой: ";
		cin >> acc;
		while (question == 'y') {
			cout << "\033[31mХотите очистить экран от предыдущих записей? (y / n):  \033[0m";
			cin >> questionCls;
			if (questionCls == 'y') {
				system("cls");
			}
			if (questionMod == 1) {
				cout << "\033[34m" << "\t\t" << "Список команд:" << "\n"
					<< "\t" << "Сложение: +" << "\n"
					<< "\t" << "Вычитание: -" << "\n"
					<< "\t" << "Умножение: *" << "\n"
					<< "\t" << "Целочисленное деление: /" << "\n"
					<< "\t" << "Взятие остатка: % (работает только с целыми числами)" << "\n"
					<< "\t" << "Возведение в степень: p" << "\n"
					<< "\t" << "Квадратный корень: s" << "\n"
					<< "\t" << "Модуль числа: a" << "\n"
					<< "\t" << "Округление: r" << "\033[0m" << endl << endl;
			}
			else if (questionMod == 2) {
				cout << "\033[34m" << "\t\t" << "Список команд:" << "\n"
					<< "\t" << "Сложение: +" << "\n"
					<< "\t" << "Вычитание: -" << "\n"
					<< "\t" << "Умножение: *" << "\n"
					<< "\t" << "Целочисленное деление: /" << "\n"
					<< "\t" << "Взятие остатка: % (работает только с целыми числами)" << "\n"
					<< "\t" << "Возведение в степень: p" << "\n"
					<< "\t" << "Квадратный корень: s" << "\n"
					<< "\t" << "Модуль числа: a" << "\n"
					<< "\t" << "Округление: r" << "\n"
					<< "\t" << "Число Пи: pi" << "\n"
					<< "\t" << "Кубический корень: c" << "\n"
					<< "\t" << "Натуральный логарифм: l" << "\n"
					<< "\t" << "Десятичный логарифм: lg" << "\n"
					<< "\t" << "Синус (рад): sin" << "\n"
					<< "\t" << "Косинус (рад): cos" << "\n"
					<< "\t" << "Тангенс (рад): tan" << "\n"
					<< "\t" << "Арксинус (рад): asin" << "\n"
					<< "\t" << "Арккосинус (рад): acos" << "\n"
					<< "\t" << "Арктангенс (рад): atan" << "\n" << "\033[0m" << endl << endl;
			}
			cout << "Введите команду: ";
			cin >> operation;
			cout << setprecision(acc) << fixed;
			if (operation == "+" || operation == "-" || operation == "/" || operation == "*" || operation == "%" || operation == "p") {
				cout << endl << "Введите первое число: ";
				cin >> fNum;
				cout << "Введите второе число: ";
				cin >> sNum;
				cout << endl << endl;
				if (operation == "+") {
					cout << fNum << " " << operation << " " << sNum << " = " << fNum + sNum;
				}
				else if (operation == "-") {
					cout << fNum << " " << operation << " " << sNum << " = " << fNum - sNum;
				}
				else if (operation == "*") {
					cout << fNum << " " << operation << " " << sNum << " = " << fNum * sNum;
				}
				else if (operation == "/") {
					if (sNum == 0) {
						cout << "Деление на 0 невозможно! Попробуйте ввести число еще раз." << endl;
						cout << "Введите второе число: ";
						cin >> sNum;
						if (sNum == 0) {
							cout << "Вы не справились, попробуйте сначала" << endl;
							continue;
						}
					}
					cout << fNum << " " << operation << " " << sNum << " = " << fNum / sNum;
				}
				else if (operation == "%") {
					cout << fNum << " " << operation << " " << sNum << " = " << (int)fNum % (int)sNum;
				}
				else if (operation == "p") {
					cout << fNum << " " << " ** " << " " << sNum << " = " << pow(fNum, sNum);
				}
			}
			else if (operation == "s" || operation == "a" || operation == "r" || operation == "pi" || operation == "c" || operation == "l"
				|| operation == "lg" || operation == "sin" || operation == "cos" || operation == "tan" || operation == "acos" || operation == "asin"
				|| operation == "atan") { //Другой тип операций
				if (operation == "pi") {
					cout << "Число Пи = " << piNum;
				}
				else {
					cout << "Введите число: ";
					cin >> num;
				}
				if (operation == "s") {
					cout << "Корень из " << num << " = " << sqrt(num);
				}
				else if (operation == "a") {
					cout << "Модуль " << num << " = " << abs(num);
				}
				else if (operation == "r") {
					cin >> num;
					cout << "\033[34mКоманды для округления:" << "\n"
						<< "Отбросить дробную часть: t" << "\n"
						<< "Округлить в меньшую сторону: f" << "\n"
						<< "Округлить в большую сторону: c" << "\n"
						<< "Округлить по математическим правилам: r\033[0m" << endl << endl;
					cout << endl;
					cout << "Выбирите команду для округления: ";
					cin >> questionRound;
					cout << endl;
					if (questionRound == 't') {
						cout << "Число " << num << " без дробной части = " << trunc(num);
					}
					else if (questionRound == 'f') {
						cout << "Число " << num << " округленное в меньшую сторону = " << floor(num);
					}
					else if (questionRound == 'c') {
						cout << "Число " << num << " округленное в большую сторону = " << ceil(num);
					}
					else if (questionRound == 'r') {
						cout << "Число " << num << " округленное по математическим правилам = " << round(num);
					}
				}
				else if (operation == "c") {
					cout << "Кубический корень из числа " << num << " = " << cbrt(num);
				}
				else if (operation == "l") {
					cout << "Натуральный логрифм " << num << " = " << log(num);
				}
				else if (operation == "lg") {
					cout << "Десятичный логарифм из числа " << num << " = " << log10(num);
				}
				else if (operation == "sin") {
					cout << "Синус числа " << num << " = " << sin(num);
				}
				else if (operation == "cos") {
					cout << "Косинус числа " << num << " = " << cos(num);
				}
				else if (operation == "tan") {
					cout << "Тангенс числа " << num << " = " << tan(num);
				}
				else if (operation == "asin") {
					cout << "Арксинус числа " << fNum << " = " << asin(fNum);
				}
				else if (operation == "acos") {
					cout << "Арккосинус числа " << fNum << " = " << acos(fNum);
				}
				else if (operation == "atan") {
					cout << "Арктангенс числа " << fNum << " = " << atan(fNum);
				}
			}
			else {
				cout << endl << "Я еще не научился выполнять такие операции:(";
			}
			cout << endl << endl << "\033[33mХотите воспользоваться калькулятором? (y / n): \033[0m";
			cin >> question;
		}
		cout << endl << "\033[32mСпасибо за использование калькулятора! Приходите еще!\033[0m" << endl;
	}
	else {
		cout << "\n\033[32mСпасибо, что зашли!\033[32m";
	}
return 0;
}