class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero=0,one=0,two=0,i;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
                zero+=1;
            else if(nums[i]==1)
                one+=1;
            else
                two+=1;
        }
        i=0;
        while(zero--)
        {
            nums[i]=0;
            i+=1;
        }
        while(one--)
        {
            nums[i]=1;
            i+=1;
        }
        while(two--)
        {
            nums[i]=2;
            i+=1;
        }
    }
};
