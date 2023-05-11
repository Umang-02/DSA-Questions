#include<bits/stdc++.h>
using namespace std;
struct pair
{
    int max;
    int min;
};
struct pair getMaxMin(int arr[],int low, int high)
{
    struct pair minmax,first,second;
    int mid;

    //If only a single element is present inside the array
    if(low==high)
    {
        minmax.min=arr[low];
        minmax.max=arr[low];
    }
}