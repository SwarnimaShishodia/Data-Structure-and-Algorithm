/*Given an array arr[] of N positive integers. Push all the zero’s of the given array to the right end of the array while maitaining the order of non-zero elements.*/
class Solution{
public:
	void pushZerosToEnd(int arr[], int n)
	{
	int count = 0;
    for (int i = 0; i < n; i++) 
        if (arr[i] != 0) 
            arr[count++] = arr[i];  
                                   
    while (count < n) 
        arr[count++] = 0; 
	}
};
