class Solution {
public:
    int climbStairs(int n) {
        double sqrt5 = sqrt(5);
        double phi = (1 + sqrt5) / 2;
        double psi = (1 - sqrt5) / 2;
        n++;
        return round((pow(phi, n) - pow(psi, n)) / sqrt5);
    }
};
