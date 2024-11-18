//WAP to find the min vlaue of array
#include<iostream>
using namespace std;
int main()
{
int arr[2][3]={2,45,8,9,48,1};
int min=INT_MAX;
for(int r=0;r<2;r++)
{
for(int c=0;c<3;c++)
{
if(min>arr[r][c])
{
min=arr[r][c];
}
}
}
cout<<"min value:"<<min;
}
