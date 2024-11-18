//w.a.p to replace 0 with 1 in a given array
//input :arr[]={2,0,3,0,5,0}
//ouput:arr[]={2,1,3,1,5,1}
#include<iostream>
using namespace std;
int main()
{
    int arr[] ={0,2,3,0,9,76,0,5,};
    int len = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<len;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<"\n output are :\n";
    for(int i=0;i<len;i++)
    {
        if(arr[i]==0)
        {
            arr[i]=1;
        }
    }
    for(int i=0;i<len;i++)
    {
        cout<<arr[i]<<"\t";
    }
}
