//The purpose of this kata is to work out just how many bottles of duty free whiskey you would have to buy such that the saving over the normal high street 
//price would effectively cover the cost of your holiday.
//You will be given the high street price(normPrice), the duty free discount(discount) and the cost of the holiday.
//For example, if a bottle cost £10 normallyand the discount in duty free was 10 %, you would save £1 per bottle.If your holiday cost £500, the answer you should return would be 500.
//All inputs will be integers.Please return an integer.Round down.

#include <iostream>

using namespace std;

int duty_free(int price, int discount, int holiday_cost) {
	double savePerBottle = (double)price * ((double)discount / 100.0);
	return int((double)holiday_cost / savePerBottle);
}

int main() {
	int price, discount, holiday_cost;
	cin >> price >> discount >> holiday_cost;
	cout << duty_free(price, discount, holiday_cost);
	return 0;
}