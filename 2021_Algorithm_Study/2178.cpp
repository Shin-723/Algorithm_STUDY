#include <bits/stdc++.h>
using namespace std;

int n, m;
int graph[100][100];

// 이동할 네가지 방향 (상, 하, 좌, 우)
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

int bfs(int x, int y)
{
    queue<pair<int, int>> q;
    q.push({x, y});
    // 큐가 빌 때까지 반목
    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        // 현재 위치에서 4가지 방향으로 확인
        for (int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            // 미로 공간을 벗어난 경우 무시
            if (nx < 0 || nx >= n || ny < 0 || ny >= m)
            {
                continue;
            }
            // 이동할 수 없는 칸인 경우 무시
            if (graph[nx][ny] == 0)
            {
                continue;
            }
            // 처음 방문 & 이동 가능
            if (graph[nx][ny] == 1)
            {
                graph[nx][ny] = graph[x][y] + 1;
                q.push({nx, ny});
            }
        }
    }
    // 가장 오른쪽 아래까지의 최단 거리 반환
    return graph[n - 1][m - 1];
}

int main()
{
    // 입력 받기
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%1d", &graph[i][j]);
        }
    }

    // 출력
    cout << bfs(0, 0) << endl;

    return 0;
}