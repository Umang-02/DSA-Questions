#include<bits/stdc++.h>
using namespace std;
void Print1toN(int n,int start)
{
    if(start>n)
    {
        return ;
    }
    cout<<start<<" ";
    start++;
    Print1toN(n,start);
}
int main()
{
    int n;
    cout<<"Please enter the value of n:";
    cin>>n;
    Print1toN(n,1);
    return 0;
}