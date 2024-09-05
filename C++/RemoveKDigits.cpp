class Solution {
public:
    string removeKdigits(string num, int k) {
        std::stack<char> st;
        for (char digit : num) {
            while (!st.empty() && st.top() > digit && k > 0) {
                st.pop();
                --k;
            }
            st.push(digit);
        }
        while (k > 0 && !st.empty()) {
            st.pop();
            --k;
        }
        std::string result;
        while (!st.empty()) {
            result.push_back(st.top());
            st.pop();
        }
        std::reverse(result.begin(), result.end());
        size_t start = result.find_first_not_of('0');
        if (start != std::string::npos) {
            result = result.substr(start);
        } else {
            result = "0";
        }
        return result;

    }
};