class Solution {
public:
    int kthFactor(int n, int k) {
        int numFactors = 0;
        for (int i = 1; i <= n; i++){
            if (n % i == 0) numFactors++;
            if (numFactors == k) return i;
        }
        return -1;
    }
};