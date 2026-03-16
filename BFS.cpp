#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> graph[6];
bool visited[6];

void bfs(int start){
    queue<int> q;

    visited[start] = true;
    q.push(start);

    while(!q.empty()){
        int node = q.front();
        q.pop();

        cout << node << " ";

        for(int i = 0; i < graph[node].size(); i++){
            int next = graph[node][i];

            if(!visited[next]){
                visited[next] = true;
                q.push(next);
            }
        }
    }
}

int main(){

    graph[1] = {2,3};
    graph[2] = {4,5};

    cout << "Hasil BFS: ";
    bfs(1);

    return 0;
}