class Solution {
public:
    int countSeniors(vector<string>& details) {
        int res = 0;
        for (auto i: details){
            int count = 0;
            string tmp = "";
            for (auto c: i){
                count++;
                if (count == 12 || count == 13) tmp += c;
            }
            if (stoi(tmp) > 60) res++;
        }
        return res;
    }
};