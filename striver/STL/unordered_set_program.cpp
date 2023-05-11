#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<int> s;
    //Inserting elements in the unordered set.
    for(int i=1;i<=10;i++)
        s.insert(i);
    //Printing all the elements present inside the unordered set.
    for(auto it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    int n=2;
    if(s.find(2)!=s.end())
    cout<<n<<"is present inside the unordered set"<<endl;
    s.erase(s.begin());
    cout<<"Elements inside the unordered set after clearing the first element:";
    for(auto it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<"The size of the unordered set is"<<s.size()<<endl;
    return 0;
}