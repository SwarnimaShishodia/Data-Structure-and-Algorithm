#include<iostream>
 #define ll long long int
 using namespace std;
 
 long long int product(ll a,ll b)
 {
     if(b==0)
     return 0;
     return a+product(a,b-1);
 }
 int main()
 {
     ll a,b;
     cin>>a>>b;
     cout<<product(a,b)<<endl;
     return 0;
 }
