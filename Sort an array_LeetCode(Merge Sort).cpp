class Solution {
    
public:
    void merge(vector<int>&nums,int s,int e)
    {
       int m=(s+e)/2;
       int s1=s,s2=m+1;
       vector<int>temp;
       while(s1<=m && s2<=e)
       {
           if(nums[s1]<nums[s2])
              temp.push_back(nums[s1++]);    
           else
              temp.push_back(nums[s2++]);    
       }
       
        while(s1<=m)
        temp.push_back(nums[s1++]);
        
         while(s2<=e)
         temp.push_back(nums[s2++]);
        
         s2=0;
        for(s1=s;s1<=e;s1++)
            nums[s1]=temp[s2++];
        
    }
    
    void mergesort(vector<int> &nums,int s,int e)
    {
        if(s>=e)
            return;
        int m=(s+e)/2;
        mergesort(nums,s,m);
        mergesort(nums,m+1,e);
        merge(nums,s,e);
    }
    vector<int> sortArray(vector<int>& nums) {
        mergesort(nums,0,nums.size()-1);
        return nums;
    }
};
