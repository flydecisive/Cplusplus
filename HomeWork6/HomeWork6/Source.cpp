// ��������� ������ ������� �������������, ��������� �� ���������, ������ � ������ ������ ������������

#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	int width, height;
	char symbol = '*';
	cout << "������� ������ ��������������: ";
	cin >> width;
	cout << "������� ������ ��������������: ";
	cin >> height;
	for (int i = 1; i <= height; i++) {
		for (int j = 1; j <= width; j++) {
			cout << symbol;
		}
		cout << "\n";
	}
	return 0;
}