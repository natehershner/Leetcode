class Solution {
public:
    bool isAVowel(char c){
        c = tolower(c);
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    }
    int maxVowels(string s, int k) {
        int j = 0;
        int maxVowels = 0;
        int currVowels = 0;
        for (int i = 0; i < k; i++){
            if (isAVowel(s[i])) currVowels++;
        }
        maxVowels = currVowels;
        for (int i = k; i < s.size(); i++){
            if (isAVowel(s[j])) currVowels--;
            if (isAVowel(s[i])) currVowels++;
            j++;
            if (currVowels > maxVowels) maxVowels = currVowels;
        }
        return maxVowels;
    }
};