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
	return 0;
}