#include<bits/stdc++.h>
using namespace std;
void subsets(string s,string curr="",int i=0)
{
    if(i==s.length())
    {
        cout<<curr<<endl;
        return ;
    }
    subsets(s,curr,i+1);
    subsets(s,curr+s[i],i+1);
}
int main()
{
    string name="abc";
    string curr="";
    int i=0;
    subsets(name,curr,i);
    return 0;
}