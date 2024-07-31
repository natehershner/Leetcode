class Solution {
public:
    struct graphNode{ 
        pair<int,int> vals;
        int numSteps;
    };
    bool isExit(vector<vector<char>>&maze, int row, int column){
        int numRows = maze.size() - 1;
        int numCols = maze[0].size() - 1;
        if ((row == 0 || row == numRows || column == 0 || column == numCols) && isValid(maze, row, column)) return true;
        return false;
    }
    bool isValid(vector<vector<char>>&maze, int row, int column){
        int numRows = maze.size() - 1;
        int numCols = maze[0].size() - 1;
        if (row >= 0 && row <= numRows && column >= 0 && column <= numCols && maze[row][column] == '.') return true;
        return false;
    }

    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        queue<graphNode> visited;
        int n = maze.size();
        int m = maze[0].size();
        vector<vector<int>> vis(n, vector<int>(m, false));
        pair<int,int> enter;
        vector<pair<int,int>> directions = {
            {1,0},
            {-1,0},
            {0,1},
            {0,-1}
        };
        enter.first = entrance[0];
        enter.second = entrance[1];
        vis[enter.first][enter.second] = 1;
        graphNode node;
        node.vals = enter;
        node.numSteps = 0;
        visited.push(node);
        while (!visited.empty()){
            graphNode curr = visited.front();
            visited.pop();
            pair<int,int> currPair = curr.vals;
            if (isExit(maze, currPair.first, currPair.second) && curr.numSteps != 0){
                return curr.numSteps;
            }
            for (int i = 0; i < 4; i++){
                pair<int,int> dir = directions[i];
                pair<int, int> toEval;
                toEval.first = dir.first + currPair.first;
                toEval.second = dir.second + currPair.second;
                if (isValid(maze, toEval.first, toEval.second) && vis[toEval.first][toEval.second] != 1){
                    graphNode toAdd;
                    toAdd.vals = toEval;
                    toAdd.numSteps = curr.numSteps + 1;
                    visited.push(toAdd);
                    vis[toEval.first][toEval.second] = 1;
                }
            }
            
        }
        return -1;
    }
};