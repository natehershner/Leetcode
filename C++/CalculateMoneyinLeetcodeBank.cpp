class Solution {
public:
    int totalMoney(int n) {
        int monday = 1;
        int curr = 1;
        int i = 1;
        int money = 0;
        while (i <= n){
            if (i % 7 == 1){
                money += monday++;
                curr = monday;
                i++;
                continue;
            }
            else{
                money += curr;
            }
            curr++;
            i++;
        }
        return money;
    }
};