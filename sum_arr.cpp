#include<iostream>
using namespace std;
int main()
{
    int arr[]={16,7,90,5,34,9,0,2,};
    int s= sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    for(int i=0;i<s;i++);
    {
        sum=sum+arr[i];
    }
    cout<<sum;

}