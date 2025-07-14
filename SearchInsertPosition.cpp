class Solution {
public:
    int searchInsert(vector<int>& nums, int t) {
        int l =0, r=nums.size()-1;
        while(l<=r){
            int m = l+(r-l)/2;
            if(nums[m] == t){
                return m;
            }
            if(nums[m]>t){
                r =(m-1);
            }
            else{
                l=(m+1);
            }
        }
        return l;
    }
};
