#include<bits/stdc++.h>
using namespace std;
void greatest_num(int arr[],int size)
{
    int index=0;
    int greatest=arr[0];
    for(int i=0;i<size;i++)
    {
        if(arr[i]>arr[index])
        {
            index=i;
        }
    }
    cout<<"Index for the greatest element inside the array:"<<index<<endl;    
}
int main()
{
    int arr[]={1,2,3,40,5,6};
    greatest_num(arr,6);
    return 0;
}