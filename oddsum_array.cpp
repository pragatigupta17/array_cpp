//wap to find out the sum of all the odd number
#include<iostream>
using namespace std;
int main()
{
int arr[]={2,9,7,4,6,3};
int sum=0;
int len = sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<len;i++)
    {
        if(arr[i]%2!=0)
           // sum=sum+ arr[i];

        sum=sum+ arr[i];
    }
 cout<<sum<<"\t";
}
