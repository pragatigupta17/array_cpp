// wap to find the second highest value
#include<iostream>
using namespace std;
int main()
{
    int arr[]={12,90,67,5,43,3,};
    int len= sizeof(arr)/sizeof(arr[0]);
    int max1,max2;
    max1=max2=INT_MIN;
    for(int i=0;i<5;i++)
    {

        if (arr[i]>max1){
            max2=max1;
            max1=arr[i];
        }
        else:
                if(arr[i]>max2 && arr[i]!=max1)
        {

            max2=arr[i];
        }
    }
cout<<"maxvalue="<<max2<<"\t";

    }
