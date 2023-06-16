#include <iostream>
using namespace std;
bool search(int arr[], int n)
{
    int a;
    cout << "enter n;umber you want to search";
    cin >> a;
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == a)
        {
            return true;
            break;
        }
        else
        {
            continue;
        };
    }
    return 0;
}
int main()
{
    int array[6] = {3, 45, 6, 7, 89, 7};
    int c = search(array, 6);
    if (c == true)
    {
        cout << "number found";
    }
    else
    {
        cout << "not found";
    }
    return 0;
}