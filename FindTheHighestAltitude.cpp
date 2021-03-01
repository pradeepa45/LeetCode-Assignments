class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max=0,i,sum=0;
        for(i=0;i<gain.size();i++){
            sum = sum+gain[i];
            if(sum > max) max = sum;
        }
        return max;
    }
};
