/*
    REPROAD - easy level https://www.spoj.com/problems/REPROAD/
*/
#include <bits/stdc++.h>

using namespace std;


int t,n,k;
void solve(int c, int *A)
{
    int ans = -1;
    int len =0;
    int count = 0;
    for(int i=0;i<n;i++)
    {
        if(A[i]==1)
        {
            len++;
        }
        else
        {
            if(count<=k) 
            {
                len++;
                count++;
            }
            else{
                len = i
            }
            
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);   
    cin >> t;
    cin >> n;
    int A[n];
    for(int i=0; i<n;i++)
        cin>> A[i];
    cin >>k;
    
    for (int i = 0; i < t; ++i)
    {
        solve(t,A);
    }

    return 0;
}
