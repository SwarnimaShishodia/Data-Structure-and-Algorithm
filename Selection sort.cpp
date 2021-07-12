#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int arr[5]={9,2,7,0,1};
    
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[min]>arr[j])
            min=j;
        }
        swap(arr[min],arr[i]);
    }
    
    for(int i=0;i<n;i++)
    cout<<arr[i];
    
    return 0;
}
