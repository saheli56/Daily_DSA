class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int digit = 0, count =0;
        for(int num : nums){
            if(count ==0){
                digit = num;
                count++;
            }
            else if(digit == num){
                count++;
            }
            else{
                count--;
            }
        }
        return digit;
    }
};
