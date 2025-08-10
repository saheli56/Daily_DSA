class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int n = nums.size(), res = nums[0];
       for (int i = 0; i < n; i++){
        int cur = 0;
        for (int j =i; j< n; j++){
            cur += nums[j];
            res = max(res,cur);
        }
       }
       return res;
    }
};
