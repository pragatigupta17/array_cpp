//w.a.p to replace 1 with 0 in a given array
//input :arr[]={2,1,3,1,5,1}
//ouput:arr[]={2,0,3,0,5,0}
#include<iostream>
using namespace std;
int main()
{
    int arr[] ={11,25,89,5,70,2,8};
    int len = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<len;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<"\noutput are :\n";
    for(int i=0;i<s;i++)
    {
        if(arr[i]==0)
        {
            arr[i]=1;
        }
    }
    for(int i=0;i<s;i++)
    {
        cout<<arr[i]<<"\t";
    }
}
