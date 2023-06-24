#include<iostream>
using namespace std;
int binarry(int arr[],int n,int k){
    int s=0,e=n-1,m=s+(e-s)/2;
    while(s<=e){
        if(arr[m]==k){
            return m;
        }
        else if(arr[m]>k){
            e=m-1;
        }
        else if(arr[m]<k){
            s=m+1;
        }
        m=s+(e-s)/2;
    }
    return 0;
}
int main(){
    int a[]={1,2,3,4,5,6,7,8,9};
    int d=binarry(a,9,9);
    cout<<d;
}