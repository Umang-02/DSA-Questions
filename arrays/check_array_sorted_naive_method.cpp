#include<bits/stdc++.h>
using namespace std;
bool isSorted(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[j]<arr[i])
                return false;
        }
    }
    return true;
}
int main()
{
    int newar[]={1,60,20,40};
    bool result=isSorted(newar,4);
    cout<<"The array is "<<result<<endl;
    return 0;
}