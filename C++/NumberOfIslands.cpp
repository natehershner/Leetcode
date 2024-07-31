class Solution {
public:
    int numIslands(std::vector<std::vector<char>>& grid) {
        if (grid.empty()) return 0; 
        
        int rows = grid.size();
        int cols = grid[0].size();
        int numIslands = 0;
        
        std::stack<std::pair<int, int>> stk;
        
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                if (grid[i][j] == '1') { 
                    ++numIslands;
                    stk.push({i, j});
                    while (!stk.empty()) {
                        auto index = stk.top();
                        stk.pop();
                        int x = index.first;
                        int y = index.second;
                        if (x < 0 || x >= rows || y < 0 || y >= cols || grid[x][y] != '1') continue;
                        grid[x][y] = '0'; 
                        stk.push({x + 1, y}); 
                        stk.push({x - 1, y}); 
                        stk.push({x, y + 1}); 
                        stk.push({x, y - 1}); 
                }
            }
        }
        
        return numIslands;
    }
};