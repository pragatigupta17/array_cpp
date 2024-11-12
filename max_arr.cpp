#include<iostream>
using namespace std;
int main()
{
    int arr[] ={11,25,89,5,70,2,8};
    int len = sizeof(arr)/sizeof(arr[0]);
    int max = INT_MIN;
    for(int i=0;i<len;i++);
    {
    if(max<arr[i])
    {
      max=arr[i];
    }
}
cout<<"max value="<<max;
}