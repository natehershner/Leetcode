class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int altitude = 0;
        int highest = 0;
        for (unsigned int i = 0; i < gain.size(); i++){
            altitude += gain.at(i);
            if (altitude > highest){
                highest = altitude;
            }
        }
        return highest;
    }
};