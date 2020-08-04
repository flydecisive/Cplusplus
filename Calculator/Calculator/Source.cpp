// Calculator version 1.0
// Calculator version 1.1 ���� ������������ ����� ������������ �������������, �� ����� �������� ����������
// Calculator version 1.2 ������� ���, ����� ������� ��������� ����� ������� ������������
// Calculator version 1.3 �������� ���������� �����
// Calculator version 1.4 �������� ������ � double
// Calculator version 1.5 ��������� ������ ������
// Calculator version 1.6 �������� �������� ����������� �� ����� ������������
// Calculator version 1.7 ������������ ������ � ������ �����
// Calculator version 1.8 ������� ���������� ����� � ������������������� ��������� � ������ ��
// Calculator version 1.9 ���������� ����� �� ������� ������ ����������� ������� ������ (�� �����������)
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <stdio.h>


using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	cout << "\t\t\t\t\t"<< "\033[33m����� ���������� � ��� �����������!\033[0m" << endl << endl;
	double fNum, sNum, acc, questionMod, piNum = atan(1) * 4;
	char question, questionCls, questionSqrt, questionAbs, questionRound, questionRoundNum, questionCub, questionL, 
		questionLg, questionSin, questionCos, questionTan, questionAsin, questionAcos, questionAtan;
	string operation;
	cout << "\033[33m������ ��������������� �������������? (y / n): \033[0m";
	cin >> question;
	cout << "\033[32m�������� �����: (1 - ������� | 2 - ����������) \033[0m\t";
	cin >> questionMod;
	if (question == 'y') {
		cout << "�������� �������� ����������� ����� ����� �������: ";
		cin >> acc;
		while (question == 'y') {
			cout << "\033[31m������ �������� ����� �� ���������� �������? (y / n):  \033[0m";
			cin >> questionCls;
			if (questionCls == 'y') {
				system("cls");
			}
			cout << endl << "������� ������ �����: ";
			cin >> fNum;
			cout << "������� ������ �����: ";
			cin >> sNum;
			cout << endl << endl;
			if (questionMod == 1) {
				cout << "\033[34m" << "\t\t" << "������ ������:" << "\n"
					<< "\t" << "��������: +" << "\n"
					<< "\t" << "���������: -" << "\n"
					<< "\t" << "���������: *" << "\n"
					<< "\t" << "������������� �������: /" << "\n"
					<< "\t" << "������ �������: % (�������� ������ � ������ �������)" << "\n"
					<< "\t" << "���������� � �������: p" << "\n"
					<< "\t" << "���������� ������: s" << "\n"
					<< "\t" << "������ �����: a" << "\n"
					<< "\t" << "����������: r" << "\033[0m" << endl << endl;
			}
			else if (questionMod == 2) {
				cout << "\033[34m" << "\t\t" << "������ ������:" << "\n"
					<< "\t" << "��������: +" << "\n"
					<< "\t" << "���������: -" << "\n"
					<< "\t" << "���������: *" << "\n"
					<< "\t" << "������������� �������: /" << "\n"
					<< "\t" << "������ �������: % (�������� ������ � ������ �������)" << "\n"
					<< "\t" << "���������� � �������: p" << "\n"
					<< "\t" << "���������� ������: s" << "\n"
					<< "\t" << "������ �����: a" << "\n"
					<< "\t" << "����������: r" << "\n"
					<< "\t" << "����� ��: pi" << "\n" 
					<< "\t" << "���������� ������: c" << "\n" 
					<< "\t" << "����������� ��������: l" << "\n" 
					<< "\t" << "���������� ��������: lg" << "\n"  
					<< "\t" << "����� (���): sin" << "\n"   
					<< "\t" << "������� (���): cos" << "\n"  
					<< "\t" << "������� (���): tan" << "\n"
					<< "\t" << "�������� (���): asin" << "\n" 
					<< "\t" << "���������� (���): acos" << "\n"
					<< "\t" << "���������� (���): atan" << "\n" << "\033[0m" << endl << endl;
			}
				
			cout << "������� �������: ";
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
					cout << "������� �� 0 ����������! ���������� ������ ����� ��� ���." << endl;
					cout << "������� ������ �����: ";
					cin >> sNum;
					if (sNum == 0) {
						cout << "�� �� ����������, ���������� �������" << endl;
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
				cout << "��� ������ ����� ����� ������� ������? (1 / 2): ";
				cin >> questionSqrt;
				if (questionSqrt == '1') {
					cout << "������ �� " << fNum << " = " << sqrt(fNum);
				}
				else {
					cout << "������ �� " << sNum << " = " << sqrt(sNum);;
				}
			}
			else if (operation == "a") {
				cout << "��� ������ ����� ����� ������� ������? (1 / 2): ";
				cin >> questionAbs;
				if (questionAbs == '1') {
					cout << "������ " << fNum << " = " << abs(fNum);
				}
				else {
					cout << "������ " << sNum << " = " << abs(sNum);
				}
			}
			else if (operation == "r") {
				cout << endl;
				cout << "\033[34m������� ��� ����������:" << "\n"
					<< "��������� ������� �����: t" << "\n"
					<< "��������� � ������� �������: f" << "\n"
					<< "��������� � ������� �������: c" << "\n"
					<< "��������� �� �������������� ��������: r\033[0m" << endl << endl;
				cout << endl;
				cout << "����� ����� ����� ���������? (1 / 2): ";
				cin >> questionRoundNum;
				cout << endl;
				cout << "�������� ������� ��� ����������: ";
				cin >> questionRound;
				cout << endl;
				if (questionRoundNum == '1') {
					if (questionRound == 't') {
						cout << "����� " << fNum << " ��� ������� ����� = " << trunc(fNum);
					}
					else if (questionRound == 'f') {
						cout << "����� " << fNum << " ����������� � ������� ������� = " << floor(fNum);
					}
					else if (questionRound == 'c') {
						cout << "����� " << fNum << " ����������� � ������� ������� = " << ceil(fNum);
					}
					else if (questionRound == 'r') {
						cout << "����� " << fNum << " ����������� �� �������������� �������� = " << round(fNum);
					}
				}
				else {
					if (questionRound == 't') {
						cout << "����� " << sNum << " ��� ������� ����� = " << trunc(sNum);
					}
					else if (questionRound == 'f') {
						cout << "����� " << sNum << " ����������� � ������� ������� = " << floor(sNum);
					}
					else if (questionRound == 'c') {
						cout << "����� " << sNum << " ����������� � ������� ������� = " << ceil(sNum);
					}
					else if (questionRound == 'r') {
						cout << "����� " << sNum << " ����������� �� �������������� �������� = " << round(sNum);
					}
				}
			}
			else if (operation == "pi") {
				cout << "����� �� = " << piNum;
			}
			else if (operation == "c") {
				cout << "�� ������ ����� ����� ����� ���������� ������? (1 / 2): ";
				cin >> questionCub;
				if (questionCub == '1') {
					cout << "���������� ������ �� ����� " << fNum << " = " << cbrt(fNum);
				}
				else if (questionCub == '2') {
					cout << "���������� ������ �� ����� " << sNum << " = " << cbrt(sNum);
				}
			}
			else if (operation == "l") {
				cout << "�� ������ ����� ����� ����� ����������� ��������? (1 / 2): ";
				cin >> questionL;
				if (questionL == '1') {
					cout << "����������� ������� " << fNum << " = " << log(fNum); 
				}
				else if (questionL == '2') {
					cout << "����������� ������� " << sNum << " = " << log(sNum);
				}
			}
			else if (operation == "lg") {
				cout << "�� ������ ����� ����� ����� ���������� ��������? (1 / 2): ";
				cin >> questionLg;
				if (questionLg == '1') {
					cout << "���������� �������� �� ����� " << fNum << " = " << log10(fNum);
				}
				else if (questionLg == '2') {
					cout << "���������� �������� �� ����� " << sNum << " = " << log10(sNum);
				}
			}
			else if (operation == "sin") {
				cout << "��� ������ ����� ����� ������� �����? (1 / 2): ";
				cin >> questionSin;
				if (questionSin == '1') {
					cout << "����� ����� " << fNum << " = " << sin(fNum);
				}
				else if (questionSin == '2') {
					cout << "����� ����� " << sNum << " = " << sin(sNum);
				}
			}
			else if (operation == "cos") {
				cout << "��� ������ ����� ����� ������� �������? (1 / 2): ";
				cin >> questionCos;
				if (questionCos == '1') {
					cout << "������� ����� " << fNum << " = " << cos(fNum);
				}
				else if (questionCos == '2') {
					cout << "������� ����� " << sNum << " = " << cos(sNum);
				}
			}
			else if (operation == "tan") {
				cout << "��� ������ ����� ����� ������� �������? (1 / 2): ";
				cin >> questionTan;
				if (questionTan == '1') {
					cout << "������� ����� " << fNum << " = " << tan(fNum);
				}
				else if (questionTan == '2') {
					cout << "������� ����� " << sNum << " = " << tan(sNum);
				}
			}
			else if (operation == "asin") {
				cout << "��� ������ ����� ����� ������� �����? (1 / 2): ";
				cin >> questionAsin;
				if (questionAsin == '1') {
					cout << "�������� ����� " << fNum << " = " << asin(fNum);
				}
				else if (questionAsin == '2') {
					cout << "�������� ����� " << sNum << " = " << asin(sNum);
				}
			}
			else if (operation == "acos") {
				cout << "��� ������ ����� ����� ������� ����������? (1 / 2): ";
				cin >> questionAcos;
				if (questionAcos == '1') {
					cout << "���������� ����� " << fNum << " = " << acos(fNum);
				}
				else if (questionAcos == '2') {
					cout << "���������� ����� " << sNum << " = " << acos(sNum);
				}
			}
			else if (operation == "atan") {
				cout << "��� ������ ����� ����� ������� ����������? (1 / 2): ";
				cin >> questionAtan;
				if (questionAtan == '1') {
					cout << "���������� ����� " << fNum << " = " << atan(fNum);
				}
				else if (questionAtan == '2') {
					cout << "���������� ����� " << sNum << " = " << atan(sNum);
				}
			}
			else {
				cout << endl << "� ��� �� �������� ��������� ����� ��������:(";
			}
			cout << endl << endl << "\033[33m������ ��������������� �������������? (y / n): \033[0m";
			cin >> question;
		}
		cout << endl << "\033[32m������� �� ������������� ������������! ��������� ���!\033[0m" << endl;
	}
	else {
		cout << "\033[32m�������, ��� �����!\033[32m";
	}
return 0;
}