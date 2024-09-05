class Solution {

    
public:


    void backtrack(int n, int r, int& count, vector<int>& board){
        if (r == n + 1){
            count++;
            return;
        }
            for (int j = 1; j <= n; j++){
                bool legal = true;
                for (int i = 1; i < r; i++){
                    if (board[i] == j || board[i] == j + r - i || board[i] == j - r + i) legal = false;
                }
                if (legal){
                    board[r] = j;
                    backtrack(n, r + 1, count, board);
                }
            }   
    }

    int totalNQueens(int n) {
        vector<int> board(n + 1, -1);
        int count = 0;
        backtrack(n, 1, count, board);
        return count;

    }
};