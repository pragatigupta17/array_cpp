#include<iostream>
using namespace std;
 int main()
 {
 int arr[2][3]={2,1,6,4,3};
 int sum=0;
 for(int r=0;r<2;r++)
 {
 for(int c=0;c<3;c++)
 {
 sum=sum+arr[r][c];
 }
 cout<<sum;
 }

 }
