// Calculator version 1.0
// Calculator version 1.1 ���� ������������ ����� ������������ �������������, �� ����� �������� ����������
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	cout << "����� ���������� � ��� �����������!" << endl;
	cout << "� ������ ������ �������������� ������ ����� �����!" << endl;
	int fNum, sNum, question;
	char operation;
	cout << "������ ��������������� �������������? (1 - �/ 0 - �): ";
	cin >> question;
	if (question == 1) {
		while (question == 1) {
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
				cout << "� ��� �� �������� ��������� ����� ��������:(";
				break;
			}
			cout << endl << "������ ��������������� �������������? (1 - �/ 0 - �): ";
			cin >> question;
		}
		cout << "������� �� ������������� ������������! ��������� ���!";
	}
	else {
		cout << "�������, ��� �����!";
	}
	return 0;
}