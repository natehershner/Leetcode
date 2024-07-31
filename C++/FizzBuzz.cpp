class Solution {
public:
    vector<string> fizzBuzz(int n) {
        std::vector<string> words(n);
        unsigned int i;
        for (i = 1; i <= n; i++){
            if (i % 3 == 0 && i % 5 == 0) words.at(i - 1) = "FizzBuzz";
            else if (i % 3 == 0) words.at(i - 1) = "Fizz";
            else if (i % 5 == 0) words.at(i - 1) = "Buzz";
            else words.at(i - 1) = std::to_string(i);
        }
        return words;
    }
};