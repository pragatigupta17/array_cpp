//wap to print valid square root of number in a given array{64,24,81,312,25,121,76}
#include <iostream>
using namespace std;
int main() {
    int arr[] = {64, 24, 81, 312, 25, 121, 76};
    int n = sizeof(arr) / sizeof(arr[0]);
      for (int i=0;i<n;i++)
      {
        int sq =arr[i];
        for(int x=1;x<=sq;x++)
        {
    if(x*x==sq)
    {
        cout<<sq<<"\t";
        break;
    }
        }
        }
}
// wap to display the array in disecnding order
