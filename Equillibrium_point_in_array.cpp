/*Given an array A of N positive numbers. The task is to find the position where equilibrium first occurs in the array. Equilibrium position in an array is a position such that the sum of elements before it is equal to the sum of elements after it.

Input:
The first line of input contains an integer T, denoting the number of test cases. Then T test cases follow. First line of each test case contains an integer N denoting the size of the array. Then in the next line are N space separated values of the array A.

Output:
For each test case in a new  line print the position at which the elements are at equilibrium if no equilibrium point exists print -1.*/
#include<iostream>
using namespace std;
int main()
{
    int t,i,j,n,s;
    cin>>t;
    for(i=0;i<t;i++)
    {
        s=0;
        cin>>n;
        int a[n];
        for(j=0;j<n;j++)
        cin>>a[j];
        for(j=0;j<n;j++)
            s=s+a[j];
        int q=0,f=0;

        for(j=0;j<n;j++)
        {
            s=s-a[j];
            if(s==q)
            {
                f=1;
                break;
            }
            else
            {
                q=q+a[j];
            }
        }
        if(f==1)
        cout<<j+1<<endl;
        else
        cout<<"-1"<<endl;
    }
	return 0;
}
