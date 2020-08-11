// ������� ���������, ������� ���������� ��������� ����� � ��������� ���������� ������� ������
// ������ �� 10 ���������, �������� �������� �� 0 �� 20 � �� ������ ���� ���������� ��������

#include <iostream>
#include <ctime>

using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	const int SIZE = 10;
	int arr[SIZE];
	bool already;
	srand(time(NULL));
	for (int i = 0; i < SIZE; ) {
		already = false;
		int rnd = rand() % 20;
		for (int j = 0; j < i; j++) {
			if (arr[j] == rnd) {
				already = true;
			}
		}
		if (!already) {
			arr[i] = rnd;
			i++;
		}
	}
	for (int i = 0; i < SIZE; i++) {
		cout << arr[i] << endl;
	}
	
	return 0;
}