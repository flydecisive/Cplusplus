//The cockroach is one of the fastest insects. Write a function which takes its speed in km per hour and returns it in cm per second, rounded down to the integer (= floored).

#include <iostream>

using namespace std;

int cockroach_speed(double s)
{
    return (int)(s * 10000 / 360);
}

int main() {
    double speedInHours;
    cin >> speedInHours;
    cout << cockroach_speed(speedInHours);
    return 0;
}