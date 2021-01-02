#include <bits/stdc++.h>
using namespace std;
long long int merge(long long int *a,long long int s,long long int e)
{
    long long int m=(s+e)/2;
    long long int i=s;
    long long int j=m+1;
    long long int k=s;
    long long int temp[100000];
    long int count=0;
    
    while(i<=m && j<=e)
    {
        if(a[i]<=a[j])
        temp[k++]=a[i++];
        else
        { 
            count+=m-i+1;
        temp[k++]=a[j++];
        }
    }
    
    while(i<=m)
    temp[k++]=a[i++];
    
    while(j<=e)
    temp[k++]=a[j++];
    
    for(i=s;i<=e;i++)
    a[i]=temp[i];
    
    return count;
}
long long int countInversion(long long int *a,long long int s,long long int e)
{
    if(s>=e)
    return 0;
    long long int m=(s+e)/2;
    long long int x=countInversion(a,s,m);
    long long int y=countInversion(a,m+1,e);
    long long int z=merge(a,s,e);
    return x+y+z;
}
int main()
{
    long long int d,i,j;
    cin>>d;
    for(i=0;i<d;i++)
    {
        long long int n;
        cin>>n;
        long long int a[n];
        for(j=0;j<n;j++)
        cin>>a[j];
        
        cout<<countInversion(a,0,n-1)<<endl;
    }
    return 0;
}
