#include <iostream>
#include <vector>
using namespace std;

vector<int> graph[6];
bool visited[6];

void dfs(int node){
    visited[node] = true;
    cout << node << " ";

    for(int i = 0; i < graph[node].size(); i++){
        int next = graph[node][i];

        if(!visited[next]){
            dfs(next);
        }
    }
}

int main(){

    graph[1] = {2,3};
    graph[2] = {4,5};

    cout << "Hasil DFS: ";
    dfs(1);

    return 0;
}