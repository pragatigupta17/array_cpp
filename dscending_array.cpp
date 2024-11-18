// wap to display the array in descending order
#include<iostream>
using namespace std;
int main()
{
    int arr[]={-90,0,11,89,-50,67,32,};
    int len = sizeof (arr)/sizeof(arr[0]);
    for(int i=0;i<len;i++){
    cout<<arr[i]<<"\t";
    }
    cout<<"\n After \n";
    for(int i=0;i<len;i++){
        for(int j=0;j<len-1;j++){
            int tmp;
            if(arr[j]>arr[j+1]){
                tmp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=tmp;
            }
        }
    }
for(int i=0;i<len;i++){
    cout<<arr[i]<<"\t";
}

}
