class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int s_idx,e_idx;
        vector<int> ans;
        int ctr=0;
        vector<int>::iterator it;
        it = find(nums.begin(),nums.end(),target);
        if(it!=nums.end()){
            //ctr++;
            s_idx = it-nums.begin();
            //cout << s_idx << endl;
            ans.push_back(s_idx);
            int c = s_idx+1;
            for(;c<nums.size();c++){
                if(nums[c]==target)
                    ctr++;
                //cout << ctr << endl;
            }
            e_idx = s_idx+ctr;
            ans.push_back(e_idx);
        }
        else{
            s_idx=-1;
            e_idx = -1;
            ans.push_back(s_idx);
            ans.push_back(e_idx);
        }
    return ans;
    }
};

