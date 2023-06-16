#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int m = n;
    int j = 0;
    int i;
    while (m != 0)
    {
        j = (j << 1) | 1;

        m = m >> 1;
    }
    cout << "cmpliment of given integer" << j << endl;
    int ans = (~n) & j;
    cout << ans;
}