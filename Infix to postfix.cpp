#include <bits/stdc++.h>
using namespace std;

int ranks(char c)
{
    if(c=='^')
    return 3;
    else if(c=='*' || c=='/')
    return 2;
    else if(c=='+' || c=='-')
    return 1;
    else
    return -1;
}

int main()
{
    string s;
    cin>>s;
    
    stack<char>temp;
    string ans="";
    for(int i=0;i<s.size();i++)
    {
        
        if((s[i]>='a' and s[i]<='z') or (s[i]>='A' and s[i]<='Z'))
        ans=ans+s[i];
        
        else if(s[i]=='(')
            temp.push(s[i]);
        
        else if(s[i]==')')
        {
            while(temp.empty()==false and temp.top()!='(')
            {
            ans=ans+temp.top();
            temp.pop();
            }
            if(temp.top()=='(')
            temp.pop();
        }
        else
        {
            while(temp.empty()==false and ranks(temp.top())>=ranks(s[i]))
            {
                char p=temp.top();
                ans=ans+p;
                temp.pop();
            }
            temp.push(s[i]);
        }
    }
    
    while(temp.empty()==false)
    {
        char p=temp.top();
        ans=ans+p;
        temp.pop();
    }
    
    cout<<ans<<endl;
    return 0;
}
