#include<bits/stdc++.h>
bool recursiveFunc(int arr[],int size,int x)
{
    size--;
    if(size<1)
        return false;
    if(arr[size]==x)
        return true;
    return recursiveFunc(arr,size,x);
}
int main()
{
    int arr[]={1,2,3,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    recursiveFunc(arr,size,3);
}