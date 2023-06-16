#include <iostream>
using namespace std;
bool iseven(int a)
{
    int b;
    if (b % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int n;
    cout << "enter the number";
    cin >> n;
    int c = iseven(n);
    if (c == 1)
    {
        cout << "numer is even";
    }
    else
    {

        cout << "the numer is odd";
    }

    cout << c;
}