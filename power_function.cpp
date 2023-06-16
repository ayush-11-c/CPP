#include <iostream>
using namespace std;
int ppowers(int a, int b)
{
    int i;
    int ans = 1;
    for (i = 0; i < b; i++)
    {
        ans = ans * a;
    }
    return ans;
}
int main()
{
    int x, y, c;
    cin >> x ;
    cin >> y ;
    c = ppowers(x, y);
    cout<<"the req;uired ans is"<< c;
}