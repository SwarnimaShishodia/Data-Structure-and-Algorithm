/*Given an unsorted array A of size N of non-negative integers, find a continuous sub-array which adds to a given number S.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of two lines. The first line of each test case is N and S, where N is the size of array and S is the sum. The second line of each test case contains N space separated integers denoting the array elements.

Output:
For each testcase, in a new line, print the starting and ending positions(1 indexing) of first such occuring subarray from the left if sum equals to subarray, else print -1.*/
#include <iostream>
using namespace std;
int main()
{
	long long int t,i,n,j,s,r,b,d,f=0;
	cin>>t;
	for(i=0;i<t;i++)
	{
	 cin>>n>>s;
	 f=0;
	 long long int arr[n];
	 for(j=0;j<n;j++)
	 cin>>arr[j];
	 long long int curr_sum=arr[0], start = 0;
    for (j=1;j<= n;j++) {
        while (curr_sum > s && start <j- 1) {
            curr_sum = curr_sum - arr[start];
            start++;
        }
        if (curr_sum == s)
        {
         cout<<start+1<<" "<< j <<endl;
         f=1;
         break;
        }

        if (j< n)
            curr_sum = curr_sum + arr[j];
    }
	   if(f!=1)
	   cout<<"-1"<<endl;
	}
	return 0;
}
