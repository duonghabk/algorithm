#include <iostream>
#include <climits>
#include <queue>
using namespace std;
 
#define MAX 100 + 1
 
int matrix[MAX][MAX], n, m;
int dis[MAX];
bool mark[MAX];
queue<int> myQueue;
 
 
void init(int start) {
    for (int i = 1; i <= n; i ++) {
        mark[i] = false;   
        dis[i] = INT_MAX; //Set distance from start vertex to all vertices is infinity
    }
    dis[start] = 0;
    mark[start] = true;
     
    while (!myQueue.empty()) myQueue.pop(); //make queue is empty
    myQueue.push(start);
}
 
int dijkstra(int start) {
    init(start);
     
    //find distances from start vertex to all vertices
    while (!myQueue.empty()) {
        int u = myQueue.front();
        myQueue.pop();
         
        for (int v = 1; v <= n; v ++) {
            if (!mark[v] && matrix[u][v] != INT_MAX && dis[v] > dis[u] + matrix[u][v]) {
                dis[v] = dis[u] + matrix[u][v];
            }
        }
         
        int minV = INT_MAX;
        int v = -1;
        for (int i = 1; i <= n; i++) {
            if (!mark[i] && minV > dis[i]) {
                minV = dis[i];
                v = i;
            }
        }
        if (v != -1) {
            myQueue.push(v);
            mark[v] = true;
        }
    }
     
    int maxV = dis[1];
    for (int i = 2; i <=n; i ++)
        if (maxV < dis[i])
            maxV = dis[i];
     
    return maxV;
}
 
int main() {
    cin >>n >> m;
     
    for (int i = 1; i <= n; i ++) {
        for (int j = 1; j <=n; j ++) {
            matrix[i][j] = INT_MAX;
        }
    }
     
    for (int i = 0; i < m; i ++) {
        int a,b,d;
        cin>> a >> b >>d;
        matrix[a][b] = d;
        matrix[b][a] = d;
    }
     
    int answer = dijkstra(1);
     
    for (int i = 2; i <= n; i ++) {
        int temp = dijkstra(i);
        if (temp < answer)
            answer = temp;
    }
     
    cout << answer << endl;
    return 0;
}