/*Given an array of n elements, where each element is at most k away from its target position. The task is to print array in sorted form.

Input:
First line consists of T test cases. First line of every test case consists of two integers N and K, denoting number of elements in array and at most k positions away from its target position respectively. Second line of every test case consists of elements of array.

Output:
Single line output to print the sorted array.*/

#include <iostream>
using namespace std;

int main()
{
	int t,n,k,i,key,j,kk;
	cin>>t;
	for(i=0;i<t;i++)
	{
	    cin>>n>>kk;
	    int a[n];
	    for(j=0;j<n;j++)
	    cin>>a[j];
	    for(j=1;j<n;j++)
	    {
	       key=a[j];
	       k=j-1;
	       while(k>=0 && a[k]>=key)
	       {
	           a[k+1]=a[k];
	           k=k-1;
	       }
	       a[k+1]=key;
	    }
	    for(j=0;j<n;j++)
	    cout<<a[j]<<" ";
	    cout<<endl;
	}
	return 0;
}
