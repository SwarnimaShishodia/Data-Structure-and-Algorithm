/*The cost of stock on each day is given in an array A[] of size N. Find all the days on which you buy and sell the stock so that in between those days your profit is maximum.

Input: 
First line contains number of test cases T. First line of each test case contains an integer value N denoting the number of days, followed by an array of stock prices of N days. 

Output:
For each testcase, output all the days with profit in a single line. And if there is no profit then print "No Profit".*/

#include <iostream>
using namespace std;

int main()
{
	int t,n,i,j,left,right,rj,lj,f;
	cin>>t;
	for(i=0;i<t;i++)
	{
	   cin>>n;
	   int a[n];
	   for(j=0;j<n;j++)
	   cin>>a[j];
	   j=0;
	   left=a[0];
	   right=a[0];
	   rj=0;
	   lj=0;
	   f=0;
	   while(j<n)
	   {
	       while(j+1<n && a[j+1]<=a[j])
	       {
	           left=a[j+1];
	           j=j+1;
	           lj=j;
	       }
	       while(j+1<n && a[j+1]>=a[j])
	       {
	           right=a[j+1];
	           j=j+1;
	           rj=j;
	       }
	       
	       if(lj<rj)
	       {
	       cout<<"("<<lj<<" "<<rj<<")"<<" ";
	       f=1;
	       if(j+1<n)
	       {
	       left=a[j+1];
	       right=a[j+1];
	       }
	       }
	       if(right==a[n-1] || left==a[n-1])
	       break;
	   }
	   if(f==0)
	   cout<<"No Profit";
	   cout<<endl;
	}
	return 0;
}
