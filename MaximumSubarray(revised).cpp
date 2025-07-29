class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr = 0, maximum = INT_MIN;
        for(int i=0; i<nums.size(); i++){
            curr += nums[i];
            maximum = max(curr, maximum);
            if(curr<0){
                curr =0;
            }
        }
        return maximum;
    }
};
