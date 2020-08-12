//Given three integers a ,b ,c, return the largest number obtained after inserting the following operators and brackets: +, *, ()
//In other words, try every combination of a, b, c with[*+()], and return the Maximum Obtained

#include <iostream>

using namespace std;

unsigned short int expressionsMatter(unsigned short int a, unsigned short int b, unsigned short int c)
{
    int one = a + b + c;
    int two = a * b + c;
    int three = a + b * c;
    int four = a * (b + c);
    int five = (a + b) * c;
    int six = a + c * b;
    int seven = a * c * b;
    //int seven = (a + c) * b;
    int arr[7]{ one , two, three, four, five, six, seven };
    int max = arr[0];
    for (int i = 1; i < 7; i++) {
        if (max <= arr[i]) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << expressionsMatter(a, b, c);
	return 0;
}
