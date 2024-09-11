class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int numRooms = rooms.size();
        vector<bool> vis(rooms.size(), false);
        queue<int> q;
        int roomsVisited = 0;
        q.push(0);
        while(!q.empty()){
            int curr = q.front();
            q.pop();
            vis[curr] = true;
            roomsVisited++;
            for (int room : rooms[curr]){
                if (vis[room] == false){
                    vis[room] = true;
                    q.push(room);
                } 
            }
        }
        if (roomsVisited == numRooms) return true;
        return false;
    }
};