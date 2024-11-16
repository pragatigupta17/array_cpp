#include<iostream>
using namespace std;
int main()
{
    int arr[] ={11,25,89,5,70,2,8};
    int len = sizeof(arr)/sizeof(arr[0]);
    int max = INT_MIN;
    for(int i=0;i<len;i++)
    {
    if(max<arr[i])
    {
      max=arr[i];
    }
}
cout<<"max value="<<max;
}
//w.a.p to find  the prime no. in a given array
//input:arr[]={7,4,6,11,5}
//output:arr:{7,11,5}
//w.a.p to replace 1 with 0 in a given array
//input :arr[]={2,1,3,1,5,1}
//ouput:arr[]={2,0,3,0,5,0}
//w.a.p to shift all zero at last by holding relevent position
//input:{2,0,7,0,3,0,6}
//output:{2,7,3,6,0,0}
