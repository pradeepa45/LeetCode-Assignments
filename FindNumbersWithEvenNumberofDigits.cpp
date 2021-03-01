class Solution {
public:
    int check(int num){
        int count=0;
        while(num!=0){
            num=num/10;
            count++;
        }
        return count;
    }
    int findNumbers(vector<int>& nums) {
        int i,count,ans=0;
        for(i=0;i<nums.size();i++){
            count = check(nums[i]);
            if(count%2==0){
                ans++;
            }
        }
        return ans;
    }
};
