#include<iostream>
using namespace std;
int main()
{
    int arr[4]={4,6,9,1};
    int s= sizeof(arr)/sizeof(arr[0]);
    for(int i=s-1;i>=0;i--)
    {
        cout<<arr[i]<<"\n";
    }
}