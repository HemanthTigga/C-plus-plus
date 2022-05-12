#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool check(string a)
{
    int s=0;
    int e=a.length()-1;
    while(s<=e)
    {
        if(a[s]!=a[e])
            return false;
        else
        {
            s++;
            e--;
        }
    }
    return true;
}
bool valid(char ch)
{
    if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')||(ch>='0'&&ch<='9'))
        return true;

    return false;
}
char tolower(char ch)
{
    if((ch>='a'&&ch<='z')||(ch>='0'&&ch<='9'))
        return ch;
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
}

bool checkPalindrome(string a)
{
    int s=0;
    int e=a.length()-1;
    while(s<=e)
    {
        if(a[s]!=a[e])
            return false;
        else
        {
            s++;
            e--;
        }
    }
    return true;
}
bool isPalindrome(string s)
{
    int i=0;
    string temp="";
    for(int j=0;j<s.length();j++)
    {
        //cout<<"s[j]= "<<s[j];
        if(valid(s[j]))
            temp.push_back(s[j]);
    }
    for(int j=0;j<temp.length();j++)
        temp[j]=tolower(temp[j]);

    return checkPalindrome(temp);
}
int main()
{
    string str;
    cin>>str;
    if(isPalindrome(str))
        cout<<"True";
    else
        cout<<"False";
}
