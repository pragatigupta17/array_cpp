#include<iostream>
using namespace std;
int main()
{
    int arr [4] = {1,2,3,4};
    int s=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<s;i++)
    {
        cout<<arr[i]<<"\n";
    }
}

