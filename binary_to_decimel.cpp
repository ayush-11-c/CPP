#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cout << "enter your binary numbaer ";
    cin >> n;
    int decimal = 0;
    int i = 0;
    int digit = 0;
    while (n != 0)
    {

        digit = n % 10;
        decimal = digit * pow(2, i) + decimal;
        n = n / 10;
        i = i + 1;
    }
    cout << decimal;
}