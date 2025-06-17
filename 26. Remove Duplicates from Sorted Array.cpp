class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        int i =0;
        for(int j=i;j<nums.size();j++){
            if(nums[i]!=nums[j]){
                i++;
                nums[i]= nums[j];
            }
        }
        return i+1;
    }
};
