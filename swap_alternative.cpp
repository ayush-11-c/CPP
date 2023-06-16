#include <iostream>
using namespace std;
void alternative_swap(int arr[], int n)
{
    int i=0;
    while( i < n)
    {
        swap(arr[i], arr[i + 1]);
        i = i+2;
    }
}
int main()
{
    int array[6] = {1, 2, 3, 4, 5,6};
    alternative_swap(array, 6);
    int i;
    for (i=0; i < 6; i++)
    {
        cout << array[i];
    }
    return 0;
}