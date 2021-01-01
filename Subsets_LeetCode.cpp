//Print all the subsets of the given array

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int i=0,l=nums.size(),temp,j;
        vector<vector<int>>p;
        
        for(i=0;i<pow(2,l);i++)
        {
            vector<int>v;
            vector<int>a;
            temp=i;
            j=0;
            
            while(j<l)
            {
                if(temp%2==1)
                a.push_back(1);
                else
                    a.push_back(0);
                temp=temp/2;
                j=j+1;
            }
            j=0;
            while(j<l)
            {
               if(a[j]&1==1)
               v.push_back(nums[j]);
                j=j+1;
            }
            p.push_back(v); 
        }
        return p;
    }
};
