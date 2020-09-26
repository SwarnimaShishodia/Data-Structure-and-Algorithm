/*Given a sorted and rotated array A of N distinct elements which is rotated at some point, and given an element K. The task is to find the index of the given element K in the array A.

Input:
The first line of the input contains an integer T, denoting the total number of test cases. Then T test cases follow. Each test case consists of three lines. First line of each test case contains an integer N denoting the size of the given array. Second line of each test case contains N space separated integers denoting the elements of the array A. Third line of each test case contains an integer K denoting the element to be searched in the array.

Output:
Corresponding to each test case, output the index of the element found in the array.  If element is not present, then output -1.*/

#include <iostream>
using namespace std;

int main()
{
	int t,i,j,n,k,l=0,r=0,mid,f;
	cin>>t;
	for(i=0;i<t;i++)
	{
	    cin>>n;
	    int a[n];
	    for(j=0;j<n;j++)
	        cin>>a[j];
	    cin>>k;
	   l=0;
	   r=n-1;
	   f=-1;
	   while(l<=r)
	   {
	       mid=(l+r)/2;
	       if(a[mid]==k)
	       {
	       f=mid;
	       break;
	       }
	       else if(a[mid]>=a[l])
	       {
	           if(k<=a[mid] && k>=a[l])
	           r=mid-1;
	           else
	           l=mid+1;
	       }
	       else
	       {
	           if(k>=a[mid] && k<=a[r])
	           l=mid+1;
	           else
	           r=mid-1;
	       }
	   }
	   cout<<f<<endl;
	}
	return 0;
}
