// Calculator version 1.0
// Calculator version 1.1 Пока пользователь хочет пользоваться калькулятором, он будет работать непрерывно
// Calculator version 1.2 Сделать так, чтобы консоль очищалась после запроса пользователю
// Calculator version 1.3 Добавить считывание строк
// Calculator version 1.4 Добавить работу с double
// Calculator version 1.5 Расширить список команд
// Calculator version 1.6 Добавить точность отображения на выбор пользователя
// Calculator version 1.7 Раскрашивать ответы в разные цвета
// Calculator version 1.8 Сделать инженерный режим с тригонометрическими функциями и числом пи (не реализованно)
// Calculator version 1.9 Отрисовать рамку из решоток вокруг приветствия голубым цветом (не реализовано)
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <stdio.h>


using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	cout << "\t\t\t\t\t"<< "\033[33mДобро пожаловать в мой калькулятор!\033[0m" << endl << endl;
	double fNum, sNum, acc, questionMod;
	char operation, question, questionCls, questionSqrt, questionAbs, questionRound, questionRoundNum;
	cout << "\033[33mХотите воспользоваться калькулятором? (y / n): \033[0m";
	cin >> question;
	cout << "\033[32mВыбирите режим: (1 - Обычный | 2 - Инжинерный) \033[0m\t";
	cin >> questionMod;
	if (question == 'y') {
		cout << "Выбирите точность отображения чисел после запятой: ";
		cin >> acc;
		while (question == 'y') {
			cout << "\033[31mХотите очистить экран от предыдущих записей? (y / n):  \033[0m";
			cin >> questionCls;
			if (questionCls == 'y') {
				system("cls");
			}
			cout << endl << "Введите первое число: ";
			cin >> fNum;
			cout << "Введите второе число: ";
			cin >> sNum;
			cout << endl << endl;
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
					<< "\t" << "Число Пи: pi" << "\n" // Реализовать все ф-ции начиная от сюда
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
				if (sNum == 0) {
					cout << "Деление на 0 невозможно! Попробуйте ввести число еще раз." << endl;
					cout << "Введите второе число: ";
					cin >> sNum;
					if (sNum == 0) {
						cout << "Вы не справились, попробуйте сначала" << endl;
						break;
					}
				}
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
			case 'a':
				cout << "Для какого числа будем считать модуль? (1 / 2): ";
				cin >> questionAbs;
				if (questionAbs == '1') {
					cout << "Модуль " << fNum << " = " << abs(fNum);
				}
				else {
					cout << "Модуль " << sNum << " = " << abs(sNum);
				}
				break;
			case 'r':
				cout << endl;
				cout << "\033[34mКоманды для округления:" << "\n"
					<< "Отбросить дробную часть: t" << "\n"
					<< "Округлить в меньшую сторону: f" << "\n"
					<< "Округлить в большую сторону: c" << "\n"
					<< "Округлить по математическим правилам: r\033[0m" << endl << endl;
				cout << endl;
				cout << "Какое число будем округлять? (1 / 2): ";
				cin >> questionRoundNum;
				cout << endl;
				cout << "Выбирите команду для округления: ";
				cin >> questionRound;
				cout << endl;
				if (questionRoundNum == '1') {
					if (questionRound == 't') {
						cout << "Число " << fNum << " без дробной части = " << trunc(fNum);
						break;
					}
					else if (questionRound == 'f') {
						cout << "Число " << fNum << " округленное в меньшую сторону = " << floor(fNum);
						break;
					}
					else if (questionRound == 'c') {
						cout << "Число " << fNum << " округленное в большую сторону = " << ceil(fNum);
						break;
					}
					else if (questionRound == 'r') {
						cout << "Число " << fNum << " округленное по математическим правилам = " << round(fNum);
						break;
					}
				}
				else {
					if (questionRound == 't') {
						cout << "Число " << sNum << " без дробной части = " << trunc(sNum);
						break;
					}
					else if (questionRound == 'f') {
						cout << "Число " << sNum << " округленное в меньшую сторону = " << floor(sNum);
						break;
					}
					else if (questionRound == 'c') {
						cout << "Число " << sNum << " округленное в большую сторону = " << ceil(sNum);
						break;
					}
					else if (questionRound == 'r') {
						cout << "Число " << sNum << " округленное по математическим правилам = " << round(sNum);
						break;
					}
				}

			default:
				cout << endl << "Я еще не научился выполнять такие операции:(";
				break;
			}
			cout << endl << endl << "\033[33mХотите воспользоваться калькулятором? (y / n): \033[0m";
			cin >> question;
		}
		cout << endl << "\033[32mСпасибо за использование калькулятора! Приходите еще!\033[0m" << endl;
	}
	else {
		cout << "\033[32mСпасибо, что зашли!\033[32m";
	}
return 0;
}