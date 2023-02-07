#include<iostream>
#include<queue>

using namespace std;

int n, k;
void walk();
queue<pair<int,int>> q; //bfs탐색용
bool visited[200001];
int main(){
    cin >> n >> k;
    walk();

}
void walk(){
    q.push({n,0}); // 최초 탐색 시작점, time = 0
    visited[n] = 0;

    while(!q.empty()){
        int pos = q.front().first;
        int time = q.front().second;
        // cout <<pos<<" "<<time<<endl;
        q.pop();
        if(pos <0 || pos > 100000) continue; // 범위를 벗어나면 스킵
        if( pos == k){
            cout << time; // 동생을 찾았으면 time 출력
            break;
        }
        if(visited[pos*2] ==false) {
            visited[pos*2] = true;
            q.push({pos*2, time+1}); // dfs처럼 시간을 1씩 늘리면서 탐색.
        }
        if(visited[pos+1] ==false) {
            visited[pos+1] = true;
            q.push({pos+1, time+1});
        }
        if(visited[pos-1] ==false) {
            visited[pos-1] = true;
            q.push({pos-1, time+1});  
        } 

    }

}