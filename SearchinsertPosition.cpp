class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int idx;
        int i=0;
        vector<int>::iterator it;
        it = find(nums.begin(),nums.end(),target);
        if(it!=nums.end()){
            idx = it-nums.begin();
        }
        else{
            if(target>nums[nums.size()-1]){
                idx = nums.size();
            }
            else {
                while(nums[i]<target && i<nums.size()){
                i++;
            }
            if(i<nums.size())
                idx = i;
           // else idx =i+1;
            }
        }
        return idx;
    }
};

