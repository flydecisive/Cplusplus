//�������� ��� �������� ������� � ������� ���������\

#include <iostream>
#include <vector>

using namespace std;

int main() {
	int len, num;
	cin >> len; // ����� �������
	vector <int> list(len);
	for (int i = 0; i < len; i++) {
		cin >> list[i];
	}
	for (int i = 0; i < len; i++) {
		if (i % 2 == 0) {
			cout << list[i] << " ";
		}
	}
	return 0;
}
