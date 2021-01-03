class Solution {
public:
    int last_position(vector<int>&nums, int target)
    {
        int e=nums.size()-1;
        int s=0;
        int m,ans=-1;
        while(s<=e)
        {
            m=(s+e)/2;
            if(nums[m]==target)
            {
                ans=m;
                s=m+1;
            }
            else if(nums[m]<target)
                s=m+1;
            else
                e=m-1;
        }
        return ans;
    }
    
    int first_position(vector<int>&nums, int target)
    {
        int e=nums.size()-1;
        int s=0;
        int m,ans=-1;
        while(s<=e)
        {
            m=(s+e)/2;
            if(nums[m]==target)
            {
                ans=m;
                e=m-1;
            }
            else if(nums[m]<target)
                s=m+1;
            else
                e=m-1;
        }
        return ans;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        ans.push_back(first_position(nums,target));
        ans.push_back(last_position(nums,target));
        return ans;
    }
};
