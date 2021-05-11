#include <bits/stdc++.h>
using namespace std;

bool helper(int a[],int sum, int n)
{
    if(sum==0)
    return true;
    
    if(n==0)
    return false;
    
    if(a[n-1]<=sum)
    return (helper(a,sum-a[n-1],n-1) || helper(a,sum,n-1));
    
    else if(a[n-1]>sum)
    return helper(a,sum,n-1);
}
int main()
{
    static int sum;
    int n;
    cin>>n;
    int a[n];
    
    for(int i=0;i<n;i++)
    cin>>a[i];
    
    cin>>sum;
    
    cout<<helper(a,sum,n);
    return 0;
}
