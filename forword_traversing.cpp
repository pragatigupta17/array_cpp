#include<iostream>
using namespace std;
int main()
// array traversing can be two type 1) forword traversing 2) backword traversing
{
    int arr [] = {5,8,9,3};
    int s=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<s;i++)
    {
        cout<<arr[i]<<"\t";
    }
}

