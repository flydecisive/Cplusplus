// Calculator version 1.0
// Calculator version 1.1 ���� ������������ ����� ������������ �������������, �� ����� �������� ����������
// Calculator version 1.2 ������� ���, ����� ������� ��������� ����� ������� ������������
// Calculator version 1.3 �������� ���������� �����
// Calculator version 1.4 �������� ������ � double
// Calculator version 1.5 ��������� ������ ������ (�������� ������������)
// Calculator version 1.6 �������� �������� ����������� �� ����� ������������ (�� ������������)
// Calculator version 1.7 ������������ ������ � ������ ����� (�� �����������)
// Calculator version 1.8 ������� ���������� ����� � ������������������� ��������� � ������ �� (�� ������������)
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	cout << "����� ���������� � ��� �����������!" << endl;
	double fNum, sNum;
	char operation, question, questionCls, questionSqrt, questionAbs, questionRound, questionRoundNum;
	cout << "������ ��������������� �������������? (y / n): ";
	cin >> question;
	if (question == 'y') {
		while (question == 'y') {
			cout << "������ �������� ����� �� ���������� �������? (y / n):  ";
			cin >> questionCls;
			if (questionCls == 'y') {
				system("cls");
			}
			cout << "������� ������ �����: ";
			cin >> fNum;
			cout << "������� ������ �����: ";
			cin >> sNum;
			cout << endl << endl;
			cout << "\t" << "###������ ������:###" << "\n"
				<< "\t" << "��������: +" << "\n"
				<< "\t" << "���������: -" << "\n"
				<< "\t" << "���������: *" << "\n"
				<< "\t" << "������������� �������: /" << "\n"
				<< "\t" << "������ �������: % (�������� ������ � ������ �������)" << "\n" 
				<< "\t" << "���������� � �������: p" << "\n"
				<< "\t" << "���������� ������: s" << "\n"
				<< "\t" << "������ �����: a" << "\n"
				<< "\t" << "����������: r" << endl << endl;
			cout << "������� �������: ";
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
				cout << "������� ��� ����������:" << "\n"
					<< "��������� ������� �����: t" << "\n"
					<< "��������� � ������� �������: f" << "\n"
					<< "��������� � ������� �������: c" << "\n"
					<< "��������� �� �������������� ��������: r" << endl << endl;
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
			cout << endl << "������ ��������������� �������������? (y / n): ";
			cin >> question;
		}
		cout << "������� �� ������������� ������������! ��������� ���!";
	}
	else {
		cout << "�������, ��� �����!";
	}
	return 0;
}