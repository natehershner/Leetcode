class Solution {
public:
    string losingPlayer(int x, int y) {
        int count = 1;
        bool canPlay = true;
        while(canPlay){
            if (x > 0){
                x--;
                if (y > 3){
                    y -= 4;
                } else canPlay = false;
            }
            else canPlay = false;
            if (canPlay) count++;
        }
        if (count % 2 == 0) return "Alice";
        else return "Bob";
    }
};