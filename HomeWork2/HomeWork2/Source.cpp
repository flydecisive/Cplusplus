// �������� ���������, ������� ������� ����� ���� ����� �������� ����� � ���������, ��������� ������������.

#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	int sum = 0, floor, top, floor2;
	cout << "������� ������ �������:  ";
	cin >> floor;
	floor2 = floor;
	cout << "������� ������� �������: ";
	cin >> top;
	do {
		if (floor % 2 == 1) {
			sum += floor;
		}
		floor++;
	} while (floor <= top);
	cout << "����� �������� ����� � ��������� �� " << floor2 << " �� " << top << " = " << sum;
}