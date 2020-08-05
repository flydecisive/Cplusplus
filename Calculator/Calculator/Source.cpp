// Calculator version 1.0
// Calculator version 1.1 ���� ������������ ����� ������������ �������������, �� ����� �������� ����������
// Calculator version 1.2 ������� ���, ����� ������� ��������� ����� ������� ������������
// Calculator version 1.3 �������� ���������� �����
// Calculator version 1.4 �������� ������ � double
// Calculator version 1.5 ��������� ������ ������
// Calculator version 1.6 �������� �������� ����������� �� ����� ������������
// Calculator version 1.7 ������������ ������ � ������ �����
// Calculator version 1.8 ������� ���������� ����� � ������������������� ��������� � ������ ��
// Calculator version 1.9 ���������� ����� �� ������� ������ ����������� ������� ������
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
	cout << "\t\t\t\t  \x1b[36m#\x1b[0m\t"<< "\033[33m����� ���������� � ��� �����������!\033[0m" << "\t\x1b[36m#\x1b[0m" << endl;
	cout << "\t\t\t\t\x1b[36m  #                                             #\x1b[0m\n";
	cout << "\t\t\t\t\x1b[36m  ###############################################\x1b[0m\n\n";
	double fNum, sNum, acc, questionMod, piNum = atan(1) * 4, num;
	char question, questionCls, questionRound;
	string operation;
	cout << "\033[33m������ ��������������� �������������? (y / n): \033[0m";
	cin >> question;
	if (question == 'y') {
		cout << "\033[32m�������� �����: (1 - ������� | 2 - ����������) \033[0m\t";
		cin >> questionMod;
		cout << "�������� �������� ����������� ����� ����� �������: ";
		cin >> acc;
		while (question == 'y') {
			cout << "\033[31m������ �������� ����� �� ���������� �������? (y / n):  \033[0m";
			cin >> questionCls;
			if (questionCls == 'y') {
				system("cls");
			}
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
			if (operation == "+" || operation == "-" || operation == "/" || operation == "*" || operation == "%" || operation == "p") {
				cout << endl << "������� ������ �����: ";
				cin >> fNum;
				cout << "������� ������ �����: ";
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
			}
			else if (operation == "s" || operation == "a" || operation == "r" || operation == "pi" || operation == "c" || operation == "l"
				|| operation == "lg" || operation == "sin" || operation == "cos" || operation == "tan" || operation == "acos" || operation == "asin"
				|| operation == "atan") { //������ ��� ��������
				if (operation == "pi") {
					cout << "����� �� = " << piNum;
				}
				else {
					cout << "������� �����: ";
					cin >> num;
				}
				if (operation == "s") {
					cout << "������ �� " << num << " = " << sqrt(num);
				}
				else if (operation == "a") {
					cout << "������ " << num << " = " << abs(num);
				}
				else if (operation == "r") {
					cin >> num;
					cout << "\033[34m������� ��� ����������:" << "\n"
						<< "��������� ������� �����: t" << "\n"
						<< "��������� � ������� �������: f" << "\n"
						<< "��������� � ������� �������: c" << "\n"
						<< "��������� �� �������������� ��������: r\033[0m" << endl << endl;
					cout << endl;
					cout << "�������� ������� ��� ����������: ";
					cin >> questionRound;
					cout << endl;
					if (questionRound == 't') {
						cout << "����� " << num << " ��� ������� ����� = " << trunc(num);
					}
					else if (questionRound == 'f') {
						cout << "����� " << num << " ����������� � ������� ������� = " << floor(num);
					}
					else if (questionRound == 'c') {
						cout << "����� " << num << " ����������� � ������� ������� = " << ceil(num);
					}
					else if (questionRound == 'r') {
						cout << "����� " << num << " ����������� �� �������������� �������� = " << round(num);
					}
				}
				else if (operation == "c") {
					cout << "���������� ������ �� ����� " << num << " = " << cbrt(num);
				}
				else if (operation == "l") {
					cout << "����������� ������� " << num << " = " << log(num);
				}
				else if (operation == "lg") {
					cout << "���������� �������� �� ����� " << num << " = " << log10(num);
				}
				else if (operation == "sin") {
					cout << "����� ����� " << num << " = " << sin(num);
				}
				else if (operation == "cos") {
					cout << "������� ����� " << num << " = " << cos(num);
				}
				else if (operation == "tan") {
					cout << "������� ����� " << num << " = " << tan(num);
				}
				else if (operation == "asin") {
					cout << "�������� ����� " << fNum << " = " << asin(fNum);
				}
				else if (operation == "acos") {
					cout << "���������� ����� " << fNum << " = " << acos(fNum);
				}
				else if (operation == "atan") {
					cout << "���������� ����� " << fNum << " = " << atan(fNum);
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
		cout << "\n\033[32m�������, ��� �����!\033[32m";
	}
return 0;
}