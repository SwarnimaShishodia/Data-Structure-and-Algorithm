/*Given N students sitting in a circle You have to distribute M candies to these students also , ith student takes i candies. if ith student didn't get required candies then he will not take it. you have to distribute the candies starting from 1st student and moving along the circle of students till you cannot distribute to a student. you need to output the left out candies.


Input
The first line of input contains of an integer 'T' denoting number of test cases. Then T test cases follow . The only line of each test case contains two space separated integers N and M .

Output:
For each case print an integer in a new line corresponding to the answer .*/


#include <iostream>
using namespace std;

int main() {
	int t,n,m,s,left,j;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    cin>>n>>m;
	    s=(n*(n+1))/2;
	    left=m%s;
	    j=1;
	    while(left>=j)
	    {
	        left=left-j;
	        j=j+1;
	    }
	    cout<<left<<endl;
	}
	return 0;
}
