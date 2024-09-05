class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        vector<int> res;
        int knownTotal = 0;
        for (int roll : rolls){
            knownTotal += roll;
        }
        int difference = mean * (n + rolls.size()) - knownTotal;
        if (difference / n > 6 || difference / n < 1 || (difference / n == 6 && difference % n != 0) || difference < 1) return res;
        int highsNeeded = difference % n;
        int lowsNeeded = (n - highsNeeded);
        for (int i = 0; i < lowsNeeded; i++){
            res.push_back(difference / n);
        }
        for (int i = 0; i < highsNeeded; i++){
            res.push_back(difference / n + 1);
        }
        return res;
    }
};