#include<iostream>
using namespace std;

int linear_search(int *a,int n,int x)
{
   for(int i=0;i<n;i++)
   {
      if(a[i]==x)
      return 1;
   }
   return -1;
}

int main() {
    
	int n,i;
	cin>>n;
	
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	
	int x;
	cin>>x;
	
	cout<<linear_search(a,n,x);
	return 0;
}
