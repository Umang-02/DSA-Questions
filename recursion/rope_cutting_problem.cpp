#include<bits/stdc++.h>
using namespace std;
int maxPieces(int n,int a,int b,int c)
{
    if(n==0)
        return 0;
    if(n<0)
        return -1;
    int result=max(maxPieces(n-a,a,b,c),maxPieces(n-b,a,b,c),maxPieces(n-c,a,b,c));
    if(result==-1)
        return -1;
    return result+1;
}
int main()
{
    int test_case_first=maxPieces(5,2,5,1);
    cout<<test_case_first<<endl;
}