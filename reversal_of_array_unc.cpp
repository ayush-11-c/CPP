#include <iostream>
using namespace std;
void back(int arr[], int size)
{
    int start = 0, end = size - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void printing(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        cout << arr[i];
    }
}
int main(){
    int array1[8]={1,2,3,4,5,6,7,8};
    back(array1,8);
    printing(array1,8);
    cout<<endl;
    int array2[7]={1,2,3,4,5,6,7};
    back(array2,7);
    printing(array2,7);
    return 0;


}