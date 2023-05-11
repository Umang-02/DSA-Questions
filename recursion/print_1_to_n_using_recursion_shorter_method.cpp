#include<bits/stdc++.h>
using namespace std;
void print1toN(unsigned int N)
{
    if(N>0)
    {
       print1toN(N-1);
       cout<<N<<" ";
    }
    return;
}
int main()
{
    int T;
    unsigned int num;
    cout<<"No of test cases:";
    cin>>T;
    while(T--)
    {
        cout<<"Enter the number:";
        cin>>num;
        print1toN(num);
        cout<<"\n";
    }
    return 0;
}