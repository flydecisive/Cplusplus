// Calculator version 1.0
// Calculator version 1.1 ���� ������������ ����� ������������ �������������, �� ����� �������� ����������
// Calculator version 1.2 ������� ���, ����� ������� ��������� ����� ������� ������������
// Calculator version 1.3 �������� ���������� �����
// Calculator version 1.4 �������� ������ � double
// Calculator version 1.5 ��������� ������ ������ (�������� ������������)
// Calculator version 1.6 �������� �������� ����������� �� ����� ������������ (�� ������������)
// Calculator version 1.7 ������������ ������ � ������ ����� (�� �����������)
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	cout << "����� ���������� � ��� �����������!" << endl;
	double fNum, sNum;
	char operation, question, questionCls, questionSqrt;
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
				<< "\t" << "���������� ������: s" << endl << endl;
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