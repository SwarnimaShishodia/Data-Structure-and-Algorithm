class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        int r=A.size();
        int c=A[0].size();
        vector<vector<int>> B;
        for(int i=0;i<c;i++)
        {
            vector<int>p;
            for(int j=0;j<r;j++)
                p.push_back(A[j][i]);
            B.push_back(p);
        }
        
        return B;
    }
};
