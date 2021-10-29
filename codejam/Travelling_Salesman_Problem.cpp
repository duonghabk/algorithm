/*
 https://www.spoj.com/PTIT/problems/BCTSP/
 solution: backtracking.
 */

#include<bits/stdc++.h>

using namespace std;
int n = 4;
int res = 99999;
int x[20][20] = {{0,20,35,10},{20,0,90,50},{35,90,0,12},{10,50,12,0}};
bool visited[20] = {false};

void init()
{
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> x[i][j];
        }
    }

}

bool CheckVisited()
{
    for(int i = 0;i<n;i++)
        if(visited[i] == false)
            return false;
    return true;
}


void Try(int i, int sum)
{
    if(CheckVisited())
    {
        cout<<(sum + x[0][i])<<endl;
        res = min(res, sum + x[0][i]);
    }
    else
    {
        for(int j = 0;j<n;j++)
            if(visited[j]==false && i!=j)
            {
                visited[j] = true;
                Try(j,sum + x[i][j]);
                visited[j] = false;
                cout<<i<<"-->"<<j<< ":"<<x[i][j]<<endl;
            }
    }

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);    
    visited[0]=true;
    Try(0,0);
    cout<<res<<endl;

}
