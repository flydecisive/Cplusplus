// Calculator version 1.0
// Calculator version 1.1 Пока пользователь хочет пользоваться калькулятором, он будет работать непрерывно
// Calculator version 1.2 Сделать так, чтобы консоль очищалась после запроса пользователю
// Calculator version 1.3 Добавить считывание строк
// Calculator version 1.4 Добавить работу с double
// Calculator version 1.5 Расширить список команд
// Calculator version 1.6 Добавить точность отображения на выбор пользователя
// Calculator version 1.7 Раскрашивать ответы в разные цвета
// Calculator version 1.8 Сделать инженерный режим с тригонометрическими функциями и числом пи
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
	double fNum, sNum, acc, questionMod, piNum = atan(1) * 4;
	char question, questionCls, questionSqrt, questionAbs, questionRound, questionRoundNum, questionCub, questionL, 
		questionLg, questionSin, questionCos, questionTan, questionAsin, questionAcos, questionAtan;
	string operation;
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
			else if (operation == "s") {
				cout << "Для какого числа будем считать корень? (1 / 2): ";
				cin >> questionSqrt;
				if (questionSqrt == '1') {
					cout << "Корень из " << fNum << " = " << sqrt(fNum);
				}
				else {
					cout << "Корень из " << sNum << " = " << sqrt(sNum);;
				}
			}
			else if (operation == "a") {
				cout << "Для какого числа будем считать модуль? (1 / 2): ";
				cin >> questionAbs;
				if (questionAbs == '1') {
					cout << "Модуль " << fNum << " = " << abs(fNum);
				}
				else {
					cout << "Модуль " << sNum << " = " << abs(sNum);
				}
			}
			else if (operation == "r") {
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
					}
					else if (questionRound == 'f') {
						cout << "Число " << fNum << " округленное в меньшую сторону = " << floor(fNum);
					}
					else if (questionRound == 'c') {
						cout << "Число " << fNum << " округленное в большую сторону = " << ceil(fNum);
					}
					else if (questionRound == 'r') {
						cout << "Число " << fNum << " округленное по математическим правилам = " << round(fNum);
					}
				}
				else {
					if (questionRound == 't') {
						cout << "Число " << sNum << " без дробной части = " << trunc(sNum);
					}
					else if (questionRound == 'f') {
						cout << "Число " << sNum << " округленное в меньшую сторону = " << floor(sNum);
					}
					else if (questionRound == 'c') {
						cout << "Число " << sNum << " округленное в большую сторону = " << ceil(sNum);
					}
					else if (questionRound == 'r') {
						cout << "Число " << sNum << " округленное по математическим правилам = " << round(sNum);
					}
				}
			}
			else if (operation == "pi") {
				cout << "Число Пи = " << piNum;
			}
			else if (operation == "c") {
				cout << "Из какого числа будем брать квадратный корень? (1 / 2): ";
				cin >> questionCub;
				if (questionCub == '1') {
					cout << "Кубический корень из числа " << fNum << " = " << cbrt(fNum);
				}
				else if (questionCub == '2') {
					cout << "Кубический корень из числа " << sNum << " = " << cbrt(sNum);
				}
			}
			else if (operation == "l") {
				cout << "Из какого числа будем брать натуральный логарифм? (1 / 2): ";
				cin >> questionL;
				if (questionL == '1') {
					cout << "Натуральный логрифм " << fNum << " = " << log(fNum); 
				}
				else if (questionL == '2') {
					cout << "Натуральный логрифм " << sNum << " = " << log(sNum);
				}
			}
			else if (operation == "lg") {
				cout << "Из какого числа будем брать десятичный логарифм? (1 / 2): ";
				cin >> questionLg;
				if (questionLg == '1') {
					cout << "Десятичный логарифм из числа " << fNum << " = " << log10(fNum);
				}
				else if (questionLg == '2') {
					cout << "Десятичный логарифм из числа " << sNum << " = " << log10(sNum);
				}
			}
			else if (operation == "sin") {
				cout << "Для какого числа будем считать синус? (1 / 2): ";
				cin >> questionSin;
				if (questionSin == '1') {
					cout << "Синус числа " << fNum << " = " << sin(fNum);
				}
				else if (questionSin == '2') {
					cout << "Синус числа " << sNum << " = " << sin(sNum);
				}
			}
			else if (operation == "cos") {
				cout << "Для какого числа будем считать косинус? (1 / 2): ";
				cin >> questionCos;
				if (questionCos == '1') {
					cout << "Косинус числа " << fNum << " = " << cos(fNum);
				}
				else if (questionCos == '2') {
					cout << "Косинус числа " << sNum << " = " << cos(sNum);
				}
			}
			else if (operation == "tan") {
				cout << "Для какого числа будем считать тангенс? (1 / 2): ";
				cin >> questionTan;
				if (questionTan == '1') {
					cout << "Тангенс числа " << fNum << " = " << tan(fNum);
				}
				else if (questionTan == '2') {
					cout << "Тангенс числа " << sNum << " = " << tan(sNum);
				}
			}
			else if (operation == "asin") {
				cout << "Для какого числа будем считать синус? (1 / 2): ";
				cin >> questionAsin;
				if (questionAsin == '1') {
					cout << "Арксинус числа " << fNum << " = " << asin(fNum);
				}
				else if (questionAsin == '2') {
					cout << "Арксинус числа " << sNum << " = " << asin(sNum);
				}
			}
			else if (operation == "acos") {
				cout << "Для какого числа будем считать арккосинус? (1 / 2): ";
				cin >> questionAcos;
				if (questionAcos == '1') {
					cout << "Арккосинус числа " << fNum << " = " << acos(fNum);
				}
				else if (questionAcos == '2') {
					cout << "Арккосинус числа " << sNum << " = " << acos(sNum);
				}
			}
			else if (operation == "atan") {
				cout << "Для какого числа будем считать арктангенс? (1 / 2): ";
				cin >> questionAtan;
				if (questionAtan == '1') {
					cout << "Арктангенс числа " << fNum << " = " << atan(fNum);
				}
				else if (questionAtan == '2') {
					cout << "Арктангенс числа " << sNum << " = " << atan(sNum);
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
		cout << "\033[32mСпасибо, что зашли!\033[32m";
	}
return 0;
}