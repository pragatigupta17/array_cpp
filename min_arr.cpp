#include<iostream>
using namespace std;
int main()
{
    int arr[]={11,89,7,2,67,3};
    int s= sizeof(arr)/sizeof(arr[0]);
    int min=INT_MAX;
    for(int i=0; i<s;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
        cout<<"min value:"<<"\n";
    }
}
