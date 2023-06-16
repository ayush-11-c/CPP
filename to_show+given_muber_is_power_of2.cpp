#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter your number";
    cin >> n;
    int a = 1;
    int i;
    for (i = 1; i < 30; i ++)
    {
        a = a * 2;
        if (a == n)
        {
            cout<<"yes";
            break;
        }
        else{
            cout<<"no";
            continue;
        }

        
    }
}
