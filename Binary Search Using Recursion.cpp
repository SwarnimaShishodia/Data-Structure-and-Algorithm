// Return 1 if element is present else return -1

#include<iostream>
using namespace std;

int binarysearch(int *arr,int s,int e,int m,int target)
{
    
    if(s>e)
    return -1;
    else if(arr[m]==target)
    return 1;
    else if(arr[m]<target)
    return binarysearch(arr,m+1,e,(m+1+e)/2,target);
    else
    return binarysearch(arr,s,m-1,(s+m-1)/2,target);
}
int main()
{
    int n,target;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cin>>target;
    cout<<binarysearch(arr,0,n-1,(n-1)/2,target);
}
