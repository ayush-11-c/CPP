#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cout << "enter your number" << endl;
    cin >> n;
    int ans = 0, i = 0;
    while (n != 0)
    {
        int bit;
        bit = n & 1;
        ans = bit * pow(10, i) + ans;
        n = n >> 1;
        i = i + 1;
    }
    cout << ans;
}