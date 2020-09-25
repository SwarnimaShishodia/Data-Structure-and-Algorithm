/*Given an array A of size N containing 0s, 1s, and 2s; you need to sort the array in ascending order.

Input:
The first line contains an integer 'T' denoting the total number of test cases. Then T testcases follow. Each testcases contains two lines of input. The first line denotes the size of the array N. The second lines contains the elements of the array A separated by spaces.

Output: 
For each testcase, print the sorted array.*/

#include<iostream>
using namespace std;
int main() 
{
	int t,n,zero,one,two;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    cin>>n;
	    zero=0;
	    one=0;
	    two=0;
	    int a[n];
	    for(int j=0;j<n;j++)
	    cin>>a[j];
	    for(int j=0;j<n;j++)
	    {
	        if(a[j]==0)
	        zero=zero+1;
	        else if(a[j]==1)
	        one=one+1;
	        else
	        two=two+1;
	    }
	    for(int j=0;j<zero;j++)
	    a[j]=0;
	    for(int j=zero;j<one+zero;j++)
	    a[j]=1;
	    for(int j=zero+one;j<two+one+zero;j++)
	    a[j]=2;
	    
	    for(int j=0;j<n;j++)
	    cout<<a[j]<<" ";
	    cout<<endl;
	}
	return 0;
}
