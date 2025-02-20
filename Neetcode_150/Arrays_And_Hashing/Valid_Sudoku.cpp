class Solution {
    public:
        bool isValidSudoku(vector<vector<char>>& board) {
            unordered_map<int, unordered_set<char>> rows;
            unordered_map<int, unordered_set<char>> cols;
            map<pair<int, int>, unordered_set<char>> squares;
            for (int i = 0; i < 9; ++i){
                for (int j = 0; j < 9; ++j){
                    char let = board[i][j];
                    if (let == '.') continue;
                    pair<int,int> key = {i / 3, j / 3};
                    if (rows[i].find(let) != rows[i].end()) return false;
                    if (cols[j].find(let) != cols[j].end()) return false;
                    if (squares[key].find(let) != squares[key].end()) return false;
                    rows[i].insert(let);
                    cols[j].insert(let);
                    squares[key].insert(let);
                }
            }
            return true;
        }
    };
    