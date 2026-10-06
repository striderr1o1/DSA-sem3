#include <iostream>
#include <queue>
#include <vector>
#include <utility>
using namespace std;
int solve_bfs(int, int, int, int);
int LIMIT = 100000;
int main(){
    int time;
    cin >> time;
    int N;
    int M;
    cin >> N; cin >> M;
    solve_bfs(N, M, 2, 2);
}

int solve_bfs(int N, int M, int Start_x, int Start_y){
    int grid[N][M];
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
           cin >> grid[i][j]; 
        }
        cout << endl;
    }

    for(int x = 0; x < N; x++){
        for(int y = 0; y < M; y++){
           cout << grid[x][y]; 
        }
        cout << endl;
    }

    queue<int> Q_x;
    queue<int> Q_y;
    int exit_x = 0; int exit_y = 0;
    bool visited[N][M];
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            visited[i][j] = false;
        }
    }
    Q_x.push(Start_x); Q_y.push(Start_y);
    cout << "Pushing: [" << Start_x << ", " << Start_y << "]" << endl;
    
    visited[Start_x][Start_y] = true;
    // each child will store it's parent's co-ordinates
    //int previous[100][100];
    pair<int, int> prev[N][M];

    while(!Q_x.empty()){
        int front_x = Q_x.front();
        int front_y = Q_y.front();
        cout << "popping front: [" << front_x<< ", " << front_y<< "]" << endl;

        if(grid[front_x][front_y] == 0){ // 3 ors to check if we are at the border
            if(front_y >= M || front_y < 0){
                exit_x = front_x;
                exit_y = front_y;
            }
            if(front_x >= N || front_x < 0){
                exit_x = front_x;
                exit_y = front_y;
            }
            cout << "exit_x: " << exit_x << ", exit_y: " << exit_y << endl;
        }
        visited[front_x][front_y] = true;
        //check right
        //if ((front_x < N && front_x > -1) && (front_y < M && front_y > -1)){

            int right = grid[front_x][front_y+1];
            bool r_visited = visited[front_x][front_y+1];
            //check left
            int left = grid[front_x][front_y-1];
            bool l_visited = visited[front_x][front_y-1];
            //check bottom
            int bottom = grid[front_x+1][front_y];
            bool b_visited = visited[front_x+1][front_y];
            int top = grid[front_x-1][front_y];
            bool t_visited = visited[front_x-1][front_y];
        //}



        std::pair<int, int> p1 = {front_x, front_y};
        if ((front_x < N && front_x > -1) && (front_y < M && front_y > -1)){
        if((right == 0) && (!r_visited)){
            cout << "push child: [" << front_x<< ", " << front_y+1<< "]" << endl;
            Q_x.push(front_x);
            if (front_y+1 < M)
            Q_y.push(front_y+1);
//            previous[front_x][front_y+1] = {front_x, front_y};
            prev[front_x][front_y+1] = p1;
        }
        if((left == 0) && (!l_visited)){
            cout << "push child: [" << front_x<< ", " << front_y-1<< "]" << endl;
            Q_x.push(front_x);
            if (front_y-1 > -1)
            Q_y.push(front_y-1);
//            previous[front_x][front_y-1] = {front_x, front_y};

            prev[front_x][front_y-1] = p1;
        }
        if((bottom == 0) && (!b_visited)){
            cout << "push child: [" << front_x+1<< ", " << front_y<< "]" << endl;
            if (front_x+1 < N)
            Q_x.push(front_x+1);
            Q_y.push(front_y);
 //           previous[front_x+1][front_y] = {front_x, front_y};
            prev[front_x+1][ front_y] = p1;
        }
        if((top == 0) && (!t_visited)){
            cout << "push child: [" << front_x-1<< ", " << front_y<< "]" << endl;
            if (front_x-1 > -1)
            Q_x.push(front_x-1);
            Q_y.push(front_y);
//            previous[front_x-1][front_y] = {front_x, front_y};
            prev[front_x-1][front_y] = p1;
        }
        }


        Q_x.pop();
        Q_y.pop();
        
    }
    return 0;
    
}


