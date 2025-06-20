class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum = nums[0];
        int cur_max = nums[0];
        for(int i=1; i< nums.size(); i++){
            cur_max = max(nums[i], cur_max+nums[i]);
            max_sum = max(cur_max, max_sum);
        }
        return max_sum;
    }
};
