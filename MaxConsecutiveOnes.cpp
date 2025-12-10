// Easy stuff... Longest repeatable character replacement variant, even easier one than that

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int low = 0, high = 0, maxLen = INT_MIN, zeros = 0;
        for (high = 0; high < nums.size(); high++) {
            if (nums[high] == 0) zeros++;
            while (zeros > k) {
                if (nums[low] == 0) zeros--;
                low++;
            }
            maxLen = max (maxLen, high - low + 1);
        }
        return maxLen;
    }
};