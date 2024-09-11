class Solution {
public:

    bool isValid(const vector<vector<int>>& grid, int row, int column){
        if (row >= 0 && row < grid.size() && column >= 0 && column < grid[0].size() && grid[row][column] == 1) return true;
        return false;
    }

    int orangesRotting(vector<vector<int>>& grid) {
        int numMinutes = 0;
        int numFresh = 0;
        int directions[4][4] = {{0, 1},
                                {0, -1},
                                {1 ,0},
                                {-1, 0}};
                                
        queue<pair<int,int>> q;
        for (int i = 0; i < grid.size(); i++){
            for (int j = 0; j < grid[0].size(); j++){
                if (grid[i][j] == 1) numFresh++;
                else if (grid[i][j] == 2) q.push({i, j});
            }
        }
        if (numFresh == 0) return 0;
        while (!q.empty()){
            numMinutes++;
            int qSize = q.size();
            while (qSize){
                pair<int,int> curr = q.front();
                q.pop();
                for (int i = 0; i < 4; i++){
                    int dx = directions[i][0] + curr.first;
                    int dy = directions[i][1] + curr.second;
                    if (isValid(grid, dx, dy)){
                        numFresh--;
                        if (numFresh == 0) return numMinutes;
                        grid[dx][dy] = 2;
                        q.push({dx, dy});
                    }
                }
                qSize--;
            }
            if (numFresh == 0) return numMinutes;
        }
        return -1;
        
    }
};