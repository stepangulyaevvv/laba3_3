#include <iostream>
#include <cmath>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    float y;
    float x;
    float b = 2;
    float a = 2;
    cout << "Введите значение x: ";
    cin >> x;
    if (x < 2) {
        y = 1 + sqrt(a + abs(x));
    }
    else if (2<=x and x<12) {
        y = 2 + (a * x)*(a*x) + exp(x);
    }
    else if (x >= 12) {
        y = x * sqrt(1 + b * log(a*a * x));
    }
    cout << y;
}
