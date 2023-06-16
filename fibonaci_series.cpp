#include <iostream>
using namespace std;
int main()
{
    int a = 0, b = 1, n;
    cout << "enter the term  you want of fibnacho series";
    cin >> n;
    int i = 1, sum = 0;
    for (i; i <= n; i++)
    {
        sum = a + b;
        a = b;
        b = sum;
        cout << a, b;
    }
    cout << "the  reuired term is " << sum;
}