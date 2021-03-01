class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int> wealth;
        int i,max=0,sum;
        for(i=0;i<accounts.size();i++){
            sum = accumulate(accounts[i].begin(),accounts[i].end(),0);
            wealth.push_back(sum);
        }
        for(i=0;i<wealth.size();i++){
            if(wealth[i] > max)
                max = wealth[i];
        }
        return max;
    }
};
