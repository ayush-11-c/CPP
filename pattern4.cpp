#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number of rows you want" << endl;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        int a = i;
        while (j <= i)
        {
            cout << a + j - 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}