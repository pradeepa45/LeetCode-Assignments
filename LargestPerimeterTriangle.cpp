class Solution {
public:
    int largestPerimeter(vector<int>& A) {
       sort(A.begin(),A.end());
        int n = A.size();
        int i,sum;
        for(i=n-3;i>=0;--i){
            if(A[i]+A[i+1]>A[i+2]){
                sum = A[i]+A[i+1]+A[i+2];
                break;
            }
            else sum=0;
        }
        return sum;
        }
};
