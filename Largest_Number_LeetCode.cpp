class Solution {
public:
   static bool compare(int X,int Y)
    {
        string XX=to_string(X);
        string YY=to_string(Y);
        string XY=XX+YY;
        string YX=YY+XX;
        return XY>YX;
    }
    string largestNumber(vector<int>& nums) {
        int l=nums.size();
        sort(nums.begin(),nums.end(),compare);
        string s;
        int z=0;
        for(int i=0;i<l;i++)
        {
            if(nums[i]==0)
                z+=1;
            s=s+to_string(nums[i]);
        }
        if(z==l)
            s="0";
        return s;
    }
};
