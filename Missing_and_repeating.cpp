/*Given an unsorted array Arr of size N of positive integers. One number 'A' from set {1, 2, …N} is missing and one number 'B' occurs twice in array. Find these two numbers.*/

class Solution{
public:
    int *findTwoElement(int *arr, int n)
    {
        int i;
        int a[n+1];
       for(i=0;i<=n;i++)
       a[i]=i;
        
        int answ[2]={0};
        for(i=0;i<n;i++)
        {
            if(a[arr[i]]==-1)
            answ[0]=arr[i];
            else
            a[arr[i]]=-1;
        }
        
        for(i=1;i<=n;i++)
        {
        if(a[i]!=-1)
        answ[1]=a[i];
        }
        return (answ);
    }
};
