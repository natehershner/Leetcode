class Solution {
    public:
        vector<int> dailyTemperatures(vector<int>& temperatures) {
            vector<int> res(temperatures.size(), 0);
            stack<pair<int,int>> stk;
            for (int i = 0; i < temperatures.size(); i++){
                while (stk.size() && stk.top().second < temperatures[i]){
                    res[stk.top().first] = i - stk.top().first;
                    stk.pop();
                }
                stk.push({i, temperatures[i]});
            }
            return res; 
        }
    };
    