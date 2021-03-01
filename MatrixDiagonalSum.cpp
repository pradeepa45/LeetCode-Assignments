class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int i,j,sum=0;
        for(i=0;i<mat.size();i++){
            for(j=0;j<mat[i].size();j++){
                if((i==j) || (i+j+1==mat.size())){
                    sum = sum + mat[i][j];
                }
            }
        }
        return sum;
    }
};
