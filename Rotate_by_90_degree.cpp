/*Given a square matrix mat[][] of size N x N. The task is to rotate it by 90 degrees in anti-clockwise direction without using any extra space.

Input:
The first line of input contains a single integer T denoting the number of test cases. Then T test cases follow. Each test case consist of two lines. The first line of each test case consists of an integer N, where N is the size of the square matrix.The second line of each test case contains N x N space separated values of the matrix mat.

Output:
Corresponding to each test case, in a new line, print the rotated array.*/

#include <iostream>
using namespace std;

int main()
{
	int t,i,j,n,k,temp,m;
	cin>>t;
	for(i=0;i<t;i++)
	{
	    cin>>n;
	    int a[n][n];
	    for(j=0;j<n;j++)
	    {
	        for(k=0;k<n;k++)
	        cin>>a[j][k];
	    }
	    for(j=0;j<n;j++)
	    {
	        for(k=j+1;k<n;k++)
	        {
	            temp=a[j][k];
	            a[j][k]=a[k][j];
	            a[k][j]=temp;
	        }
	    }
	    for(j=0;j<n;j++)
	    {
	        k=0;
	        m=n-1;
	        while(k<=m)
	        {
	           temp=a[k][j];
	           a[k][j]=a[m][j];
	           a[m][j]=temp;
	           k=k+1;
	           m=m-1;
	        }
	    }
	    for(j=0;j<n;j++)
	    {
	        for(k=0;k<n;k++)
	        {
	            cout<<a[j][k]<<" ";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
