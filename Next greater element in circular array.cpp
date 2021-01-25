#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;
int main() {
	int n;
	cin>>n;
	vector<int>v;
	int p;
	for(int i=0;i<n;i++)
	{
		cin>>p;
		v.push_back(p);
	}

	stack <int> s;
	s.push(0);
    vector<int>ans (n,-1);

	for(int i=1;i<n*2;i++)
	{
		if(!s.empty() && v[i%n]<=v[s.top()])
		s.push(i%n);
        else
		{
	    while(!s.empty() && v[s.top()]<v[i%n])
		{
			ans[s.top()]=v[i%n];
			s.pop();
		}
	    s.push(i%n);
	    }
	}
	for(int i=0;i<n;i++)
	cout<<ans[i]<<" ";
}
