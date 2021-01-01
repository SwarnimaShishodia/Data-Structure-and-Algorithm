class Solution {
public:
    void reverse(vector<int> &nums,int s,int e)
    {
        int temp;
        while(s<e)
        {
            temp=nums[s];
            nums[s]=nums[e];
            nums[e]=temp;
            s=s+1;
            e=e-1;
        }
    }
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        reverse(nums,nums.size()-k,nums.size()-1);
        reverse(nums,0,nums.size()-k-1);
        reverse(nums,0,nums.size()-1);
    }
};
