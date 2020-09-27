/*Given an array A of N elements. Find the majority element in the array. A majority element in an array A of size N is an element that appears more than N/2 times in the array.

Input:  
The first line of the input contains T denoting the number of testcases. The first line of the test case will be the size of array and second line will be the elements of the array.

Output: 
For each test case the output will be the majority element of the array. Output "-1" if no majority element is there in the array.*/

#include <iostream>
using namespace std;

int main()
{
	int t,n,i,j,maj,count;
	cin>>t;
	for(i=0;i<t;i++)
	{
	    cin>>n;
	    int a[n];
	    for(j=0;j<n;j++)
	    cin>>a[j];
	    maj=a[0];
	    count=1;
	    for(j=1;j<n;j++)
	    {
	        if(a[j]==maj)
	        count++;
	        else
	        count--;
	        if(count==0)
	        {
	            maj=a[j];
	            count=1;
	        }
	    }
	    count=0;
	    for(j=0;j<n;j++)
	    if(a[j]==maj)
	    count++;
	    if(count>(n/2))
	    cout<<maj<<endl;
	    else
	    cout<<"-1"<<endl;
	}
	return 0;
}
