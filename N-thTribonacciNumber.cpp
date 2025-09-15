class Solution {
public:
    int tribonacci(int n) {
            if (n <= 2) {
              return n == 0 ? 0 : 1;
            }
        return tribonacci(n - 1) + tribonacci(n - 2) + tribonacci(n - 3);
    }
};
