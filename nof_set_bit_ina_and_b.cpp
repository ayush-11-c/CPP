#include <iostream>
using namespace std;
int main()
{
    int a, b, count, bit;
    cin >> a >> b;
    while (a != 0)
    {
        bit = a & 1;
        if (bit == 1)
        {
            count += 1;
        }
        else
        {
            a = a >> 1;
            continue;
        }

        a = a >> 1;
    }

    while (b != 0)
    {
        bit = b & 1;
        if (bit == 1)
        {
            count += 1;
        }
        else
        {
            b = b >> 1;
            continue;
        }

        b = b >> 1;
    }
    cout << count;
}