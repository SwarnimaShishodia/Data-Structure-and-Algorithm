/*Given an array A[] and a range [a, b]. The task is to partition the array around the range such that array is divided into three parts.
1) All elements smaller than a come first.
2) All elements in range a to b come next.
3) All elements greater than b appear in the end.
The individual elements of three sets can appear in any order. You are required to return the modified arranged array.*/

vector<int> threeWayPartition(vector<int> A, int a, int b)
{
    int i=0,j=0,temp,n=A.size();
    for(i=0;i<n;i++)
    {
        if(A[i]<a)
        {
            temp=A[i];
            A[i]=A[j];
            A[j]=temp;
            j=j+1;
        }
    }
    for(i=j;i<n;i++)
    {
        if(A[i]>=a && A[i]<=b)
        {
            temp=A[i];
            A[i]=A[j];
            A[j]=temp;
            j=j+1;
        }
    }
    for(i=j;i<n;i++)
    {
        if(A[i]>b)
        {
            temp=A[i];
            A[i]=A[j];
            A[j]=temp;
            j=j+1;
        }
    }
    return A;
}
