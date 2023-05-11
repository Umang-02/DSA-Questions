#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(char str_arr[],int start,int end)
{
    if(start==end)
        return true;
    if(str_arr[start]!=str_arr[end])
        return false;
    if(start<end)
        return isPalindrome(str_arr,start+1,end-1);
    return true;
}
int main()
{
    char name[]="Umang";
    int size=sizeof(name)/sizeof(name[0]);
    bool answer=isPalindrome(name,0,size-1);
    cout<<answer<<endl;
}