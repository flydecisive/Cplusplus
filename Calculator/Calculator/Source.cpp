// Calculator version 1.0
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	cout << "����� ���������� � ��� �����������!" << endl;
	cout << "� ������ ������ �������������� ������ ����� �����!" << endl;
	int fNum, sNum;
	char operation;
	cout << "������� ������ �����: ";
	cin >> fNum;
	cout << "������� ������ �����: ";
	cin >> sNum;
	cout << endl;
	cout << "������ ������: " << "\n"
		<< "��������: +" << "\n"
		<< "���������: -" << "\n"
		<< "���������: *" << "\n"
		<< "������������� �������: /" << "\n"
		<< "������ �������: %" << "\n";
	cin >> operation;
	switch (operation) {
	case '+':
		cout << fNum << " + " << sNum << " = " << fNum + sNum;
		break;
	case '-':
		cout << fNum << " - " << sNum << " = " << fNum - sNum;
		break;
	case '*':
		cout << fNum << " * " << sNum << " = " << fNum * sNum;
		break;
	case '/':
		cout << fNum << " / " << sNum << " = " << fNum / sNum;
		break;
	case '%':
		cout << fNum << " % " << sNum << " = " << fNum % sNum;
		break;
	default:
		cout << "� ��� �� �������� ��������� ����� ��������:(";
		break;
	}
	return 0;
}