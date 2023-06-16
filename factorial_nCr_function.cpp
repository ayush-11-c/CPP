#include <iostream>
using namespace std;
int fact(int num)
{
    int i = 1, p = 1;
    for (i; i <= num; i++)
    {
        p = p * i;
    }
    return p;
}
/*int main(){
    int n;
    cin>> n;
    int d=fact(n);
    cout<< d;

}*/
int NcR(int n, int r)
{
    int u, d, x;
    u = fact(n);
    d = fact(n - r) * fact(r);
    x = u / d;
    return x;
}
int main(){
    int n,r;
    cout<<"enter n";
    cin>> n;
    cout<<"enter r";
    cin>> r;
    int combination=NcR(n,r);
    cout<<"the combination of n,r is"<<combination;
    
}