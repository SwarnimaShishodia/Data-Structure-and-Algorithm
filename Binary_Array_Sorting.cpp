/*Given a binary array A[] of size N. The task is to arrange array in increasing order.

Note: The binary array contains only 0  and 1.

Input:
The first line of input contains an integer T, denoting the testcases. Every test case contains two lines, first line is N(size of array) and second line is space separated elements of array.

Output:
Space separated elements of sorted arrays. There should be a new line between output of every test case.*/

#include <iostream>
using namespace std;

int main()
{
    int t,n,i,j,zero=0;
    cin>>t;
    for(i=0;i<t;i++)
    {
        zero=0;
        cin>>n;
        int a[n];
        for(j=0;j<n;j++)
        cin>>a[j];
        for(j=0;j<n;j++)
        {
            if(a[j]==0)
            zero=zero+1;
        }
        for(j=0;j<n;j++)
        {
            if(zero>0)
            {
            a[j]=0;
            zero=zero-1;
            }
            else
            a[j]=1;
        }
        for(j=0;j<n;j++)
        cout<<a[j]<<" ";
        cout<<endl;
    }
	return 0;
}
