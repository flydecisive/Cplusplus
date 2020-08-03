// Calculator version 1.0
// Calculator version 1.1 ���� ������������ ����� ������������ �������������, �� ����� �������� ����������
// Calculator version 1.2 ������� ���, ����� ������� ��������� ����� ������� ������������
// Calculator version 1.3 �������� ���������� �����
// Calculator version 1.4 �������� ������ � double
// Calculator version 1.5 ��������� ������ ������
// Calculator version 1.6 �������� �������� ����������� �� ����� ������������
// Calculator version 1.7 ������������ ������ � ������ �����
// Calculator version 1.8 ������� ���������� ����� � ������������������� ��������� � ������ �� (�� ������������)
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
	double fNum, sNum, acc, questionMod;
	char operation, question, questionCls, questionSqrt, questionAbs, questionRound, questionRoundNum;
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
					<< "\t" << "����� ��: pi" << "\n" // ����������� ��� �-��� ������� �� ����
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
					cout << "������� �� 0 ����������! ���������� ������ ����� ��� ���." << endl;
					cout << "������� ������ �����: ";
					cin >> sNum;
					if (sNum == 0) {
						cout << "�� �� ����������, ���������� �������" << endl;
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
				cout << "��� ������ ����� ����� ������� ������? (1 / 2): ";
				cin >> questionSqrt;
				if (questionSqrt == '1') {
					cout << "������ �� " << fNum << " = " << sqrt(fNum);
				}
				else {
					cout << "������ �� " << sNum << " = " << sqrt(sNum);;
				}
				break;
			case 'a':
				cout << "��� ������ ����� ����� ������� ������? (1 / 2): ";
				cin >> questionAbs;
				if (questionAbs == '1') {
					cout << "������ " << fNum << " = " << abs(fNum);
				}
				else {
					cout << "������ " << sNum << " = " << abs(sNum);
				}
				break;
			case 'r':
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
						break;
					}
					else if (questionRound == 'f') {
						cout << "����� " << fNum << " ����������� � ������� ������� = " << floor(fNum);
						break;
					}
					else if (questionRound == 'c') {
						cout << "����� " << fNum << " ����������� � ������� ������� = " << ceil(fNum);
						break;
					}
					else if (questionRound == 'r') {
						cout << "����� " << fNum << " ����������� �� �������������� �������� = " << round(fNum);
						break;
					}
				}
				else {
					if (questionRound == 't') {
						cout << "����� " << sNum << " ��� ������� ����� = " << trunc(sNum);
						break;
					}
					else if (questionRound == 'f') {
						cout << "����� " << sNum << " ����������� � ������� ������� = " << floor(sNum);
						break;
					}
					else if (questionRound == 'c') {
						cout << "����� " << sNum << " ����������� � ������� ������� = " << ceil(sNum);
						break;
					}
					else if (questionRound == 'r') {
						cout << "����� " << sNum << " ����������� �� �������������� �������� = " << round(sNum);
						break;
					}
				}

			default:
				cout << endl << "� ��� �� �������� ��������� ����� ��������:(";
				break;
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