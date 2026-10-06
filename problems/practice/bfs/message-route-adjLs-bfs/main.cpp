#include <iostream>
#include <queue>
#include <vector>
#include <list>
using namespace std;
int compute(int n, int m);
void path_reconstruct(vector<int> path, int n);
int main(){
    int n, m;
    cout << "Enter number of computers: " << endl;
    cin >> n;
    cout << "Enter number of connections: " << endl;
    cin >> m;
    int res = compute(n, m);
}

int compute(int n, int m){
    vector<vector<int>> adjList(n);
    for(int i = 0; i < m; i++){
        int conn1, conn2;
        cout << "Enter start of conn: ";
        cin >> conn1;
        cout << "Enter end of conn: ";
        cin >> conn2;
        adjList[conn1-1].push_back(conn2-1);
        adjList[conn2-1].push_back(conn1-1);

    }

    for(int i = 0; i < n; i++){
        cout << i + 1 << " -> ";
        for(int val : adjList[i]){
            cout << val + 1 << " ";
        }
        cout << endl;
    }
    vector<bool> visited(n, false);
    queue<int> Q;
    int starting = 1;
    visited[starting-1] = true; 
    Q.push(starting-1);
    vector<int> path(n, 0);
    bool found_n = false;
    while(!Q.empty()){
       int front = Q.front();
       Q.pop();
       // get children
       for(int val : adjList[front]){
           if(!visited[val]){
               Q.push(val);
               visited[val] = true;
               path[val] = front;
               if(val == n-1){
                   found_n = true;
                   break;
               }
           }
       }
       if (found_n)
       break;
    }
    path_reconstruct(path, n-1);
    return 0;
    
}

void path_reconstruct(vector<int> path, int n){
    cout << n + 1 << endl;
    if(n == 0){
        return;
    }
    int parent = path[n];
    path_reconstruct(path, parent);
}