#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v1;
    //Inserting elements inside the vector.
    for(int i=0;i<=10;i++)
    {
        v1.push_back(i);
    }
    
    //Printing elements inside the vector.
    cout<<"Elements inside the vector are:";
    for(auto it=v1.begin();it!=v1.end();it++)
    {
        cout<<*it<<" ";
    }
    
    //Using some attributes of vectors
    cout<<"\n";
    cout<<"First element inside the vector is:"<<v1.front()<<endl;
    cout<<"Last element inside the vector is:"<<v1.back()<<endl;
    cout<<"The size of the vector:"<<v1.size()<<endl;

    //Deleting the last element inside the vector
    v1.pop_back();

    //Printing the remaining elements inside the vector after removing the last element from the vector
    cout<<"Elements inside the vector are:";
    for(auto it=v1.begin();it!=v1.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<v1[0]<<endl;
    
    //Inserting new elements in between the vector
    auto it=v1.begin();
    it++;
    v1.insert(it,5);
    
    //Printing the elements inside the vector after inserting new elements.
    cout<<"Elements inside the vector are:";
    for(auto it=v1.begin();it!=v1.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<"The current capacity of the vector v1 is:"<<v1.capacity()<<endl;
    v1.insert(it--,10);
    cout<<"Elements inside the vector are:";
    for(auto it=v1.begin();it!=v1.end();it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}