vector<int> twoSum(vector<int>& nums, int target) {
        int i,j;
        vector<int> ans;
        int n = nums.size();
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(i!=j){
                    if((nums[i]+nums[j])==target && ans.size()<2){
                        ans.push_back(i);
                        ans.push_back(j);
                    }
                }
            }
        }
        return ans;
    }
