// WAP to display even values in 2D array
#include<iostream>
using namespace std;
int main()
{
int arr[2][3]={2,78,55,9,3,8};

for(int r=0;r<2;r++)
{
for(int c=0;c<3;c++)
{
if(arr[r][c]%2==0)

{

cout<<arr[r][c]<<"\t";
}
}
}
}
