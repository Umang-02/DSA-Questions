#include<bits/stdc++.h>
using namespace std;
int sum=0;
void sumofdigits(unsigned int num)
{
    if(num!=0)
    {
        sum+=(num%10);
        num/=10;
        sumofdigits(num);
    }
    else
    {
        cout<<"Sum:"<<sum;
        sum=0;
        cout<<"\n";
        return;
    }
}
int main()
{
    int T;
    cout<<"Enter the number of test cases:";
    cin>>T;
    while(T--)
    {
        unsigned int number;
        cout<<"Enter the number:";
        cin>>number;
        sumofdigits(number);
    }
    return 0;
}