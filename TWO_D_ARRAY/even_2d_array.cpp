// WAP to display even values in 2D array
#include<iostream>
using namespace std;
int main()
{
int arr[2][3];
cout<<"enter 6 values:\n";

for(int r=0;r<2;r++)
{
for(int c=0;c<3;c++)
{
    cin>>arr[r][c];
}
}
cout<<"\n output \n";
for(int r=0;r<2;r++)
    {
    for(int c=0;c<3;c++)
    {
        if(arr[r][c]%2==0)
        {
           cout<<arr[r][c]<<"\t";

        }
cout<<"\n";
}
}
}


