class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int row=mat.size();
        int column=mat[0].size();
        int s=0;
        
        for(int i=0;i<row;i++)
        s=s+mat[i][i];
        
        if(row%2!=0)
            s=s-mat[row/2][column/2];
        int i=0,j=column-1;
        while(i<row && j>=0)
        {
            s=s+mat[i][j];
            i=i+1;
            j=j-1;
        }
        return s;
    }
};
