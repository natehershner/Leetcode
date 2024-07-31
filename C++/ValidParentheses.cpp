class Solution {
public:
    bool isValid(string s) {
        std::deque<char> stack;
        for (char c : s){
            if (c == '(' || c == '{' || c == '[') stack.push_back(c);
            else if (c == ')' || c == '}' || c == ']'){
                if (stack.size() == 0) return false;
                char t = stack.back();
                stack.pop_back();
                switch(c){
                    case ')':
                        if (t != '(') return false;
                        break;
                    case '}':
                        if (t != '{') return false;
                        break;
                    case ']':
                        if (t != '[') return false;
                        break;
                }
            }
            else return false;
        }
        if (stack.size() != 0) return false;
        else return true;
    }
};