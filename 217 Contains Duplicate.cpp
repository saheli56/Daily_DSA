class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> intset;
        for(int num : nums){
            if(intset.count(num)){
                return true;
            }
            intset.insert(num);
        }
        return false;
    }
};
