// Calculator version 1.0
// Calculator version 1.1 ���� ������������ ����� ������������ �������������, �� ����� �������� ����������
// Calculator version 1.2 ������� ���, ����� ������� ��������� ����� ������� ������������
// Calculator version 1.3 �������� ���������� �����
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	cout << "����� ���������� � ��� �����������!" << endl;
	cout << "� ������ ������ �������������� ������ ����� �����!" << endl;
	int fNum, sNum;
	char operation, question, questionCls;
	cout << "������ ��������������� �������������? (Y / N): ";
	cin >> question;
	cout << question << endl;
	if (question == 'Y') {
		while (question == 'Y') {
			cout << "������ �������� ����� �� ���������� �������? (Y / N):  ";
			cin >> questionCls;
			if (questionCls == 'Y') {
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
				<< "\t" << "������ �������: %" << "\n" << endl;
			cout << "������� �������: ";
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
				cout << endl << "� ��� �� �������� ��������� ����� ��������:(";
				break;
			}
			cout << endl << "������ ��������������� �������������? (Y / N): ";
			cin >> question;
		}
		cout << "������� �� ������������� ������������! ��������� ���!";
	}
	else {
		cout << "�������, ��� �����!";
	}
	return 0;
}