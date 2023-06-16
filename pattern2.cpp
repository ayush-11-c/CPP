#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << " enter the nomber of rows you want" << endl;
    cin >> n;
    int i = 0;
    while (i < n)
    {
        int j = 0;
        while (j < i)
        {
            cout << i;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}