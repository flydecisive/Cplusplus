// ����������� ���������, 
// ������� ������� �� ����� ����� �� ��������. ����� ��������, ����� ������������ ������, � ����� ����� ����� - ������������, ��� �������������� - ��������� ������������. 

#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	int len, i = 1;
	char symbol, lineType;
	cout << "������� ������ �����: ";
	cin >> len;
	cout << "�� ������ ������� ����� �������� �����: ";
	cin >> symbol;
	cout << "����� ����� �����? v - vertical, h - horizontal ";
	cin >> lineType;
	cout << "\n";
	do {
		switch (lineType) {
		case 'v':
			cout << symbol << "\n";
			break;
		case 'h':
			cout << symbol;
			break;
		default:
			cout << "�� ��������� �������";
			break;
		}
		i++;
	} while (i <= len);
}