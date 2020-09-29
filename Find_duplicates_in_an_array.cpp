/*Given an array a[] of size N which contains elements from 0 to N-1, you need to find all the elements occurring more than once in the given array.

Example 1:

Input:
N = 4
a[] = {0,3,1,2}
Output: -1
Explanation: N=4 and all elements from 0
to (N-1 = 3) are present in the given
array. Therefore output is -1.*/

vector<int> duplicates(int a[], int n)
{
    int arr[n],i;
    vector<int>v;
    for(i=0;i<n;i++)
    arr[i]=0;
    for(i=0;i<n;i++)
    {
        arr[a[i]]++;
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>=2)
        {
        v.push_back(i);
        arr[i]=0;
        }
    }
    if(v.size()==0)
    v.push_back(-1);
    return v;
}
