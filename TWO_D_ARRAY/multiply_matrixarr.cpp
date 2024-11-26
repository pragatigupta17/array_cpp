#include<iostream>
using namespace std;
int main()
{
int r1,c1,r2,c2;
cout<<"enter size of r1\n";
cin>>r1;
cout<<"enter size of c1\n";
cin>>c1;
cout<<"enter size of r2\n";
cin>>r2;
cout<<"enter size of c2\n";
cin>>c2;
if(c1 ==r1)
{
int A[r1][c1];
int B[r2][c2];
int ans [r1][c2];
int Sum=0;
cout<<"enter values"<<r1*c1<<"of array\n";
for(int i=0;i<r1;i++)
{
for(int j=0;j<r2;j++)
{
cin>>A[i][j];
}
}
cout<<"enter values"<<r2*c2<<"of array2\n";
for(int i=0;i<r2;i++)
{
for(int j=0;j<<c2;j++)
{
cin>>B[i][j];
}
}
cout<<"data of array1\n";
for(int i=0;i<r1;i++)
{
for(int j=0;j<c1;j++)
{
cout<<A[i][j]<<"\t";
}
cout<<"\n";
}

cout<<"data of array2\n";
for(int i=0;i<r2;i++)
{
for(int j=0;j<c2;j++)
{
cout<<B[i][j]<<"\t";
}
cout<<"\n";
}
for(int i=0;i<r1;i++)
{
 Sum=0;
for(int j=0;j<c2;j++)
{
for(int k=0;k<c1;k++)
{
Sum=Sum+A[i][k]*B[k][i];
ans[i][j]=Sum;
}
}
}
cout<<"\nmultiplication of matrix \n";
for(int i=0;i<r1;i++)
{
for(int j=0;j<c2;j++)
{
cout<<ans[i][j]<<"\t";
}
cout<<"\n";
}
}
else
{
cout<<"not allowed";
}
}

