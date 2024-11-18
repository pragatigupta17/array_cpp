//WAP to find the min value in 2D array
#include<iostream>
using namespace std;
int main()
{
int arr[2][3]={2,88,34,32,4,15};
int max=INT_MIN;
for(int r=0;r<2;r++){
for(int c=0;c<3;c++)
{
if(max<arr[r][c])
{
max=arr[r][c];
}
}
}
cout<<"max value:"<<max;
}
