class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> ans;
        for(int i=0; i < nums.size(); i++){
            ans[nums[i]] = i;
        }
         for(int i=0; i < nums.size(); i++){
            int diff = target - nums[i];
            if(ans.count(diff) && ans[diff]!= i){
            return {i, ans[diff]};
         }
       } 
         return {};
    }
};
