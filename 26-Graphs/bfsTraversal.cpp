#include<iostream>
#include<vector>
#include<queue>

using namespace std;

vector<int> bfsOfGraph(int v, vector<int> adj[]) {
    int vis[v] = {0};
    vis[0] = 1;
    queue<int> q;
    q.push(0);
    vector<int> bfs;
    while (!q.empty()) 
    {
        int node = q.front();
        q.pop();
        bfs.push_back(node);
        for(auto it : adj[node]) {
            if(!vis[it]) {
                vis[it] = 1;
                q.push(it);
            }
        }
    }
    return bfs;
}

int main() {
    int v = 5;
    vector<int> adj[5] = {  
        {1, 2},  // vertex 0 has neighbors 1 and 2  
        {0, 3, 4},  // vertex 1 has neighbors 0, 3, and 4  
        {0, 4},  // vertex 2 has neighbors 0 and 4  
        {1, 4},  // vertex 3 has neighbors 1 and 4  
        {1, 2, 3}  // vertex 4 has neighbors 1, 2, and 3  
    };

    vector<int> bfsOrder = bfsOfGraph(5, adj);

    for(auto it : bfsOrder) {
        cout << it << " ";
    }

    return 0;
}