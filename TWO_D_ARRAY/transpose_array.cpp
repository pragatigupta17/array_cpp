//  1) Transpose matrix --> it convert row into column , column into rows vice versa.
// rows and columns size should be equal also called square matrix
#include<iostream>
using namespace std;
int main()
{
    int arr[2][3];
    cout<<"enter 6 values\n";
    for(int r=0;r<2;r++){
        for(int c=0;c<3;c++){
            cin>>arr[r][c];
        }
        cout<<"\n";
    }
    cout<<"\nAfter applying transpose concept\n";
    for(int c=0;c<3;c++)
    {
        for(int r=0;r<2;r++)
            {
            cout<<arr[r][c]<<"\t";
            }

    cout<<"\n";
    }

}


