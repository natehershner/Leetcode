int getMax(vector<int>& a){
    int max = a[0];
    for (unsigned int i = 1; i < a.size(); i++){
        if (a[i] > max) max = a[i];
    }
    return max;
}
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> toReturn(candies.size(), false);
        int max = getMax(candies);
        for (unsigned int i = 0; i < candies.size(); i++){
            toReturn[i] = ((candies[i] + extraCandies) >= max);
        }
        return toReturn;
    }
};