/*
 * https://www.spoj.com/problems/KNAPSACK/
 * */


#include<bits/stdc++.h>

using namespace std;
int n;
int W;
int* Wt;
int* Val;



void init()
{
    cin>>W;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin>>Wt[i];
        cin>>Val[i];
    }
}
int knapsack(int W,int *Wt,int* Val, int n )
{
    if(n==0||W == 0)
        return 0;
    if(Wt[n-1]>W)
    {
        return knapsack(W,Wt,Val,n-1);
    }
    else
    {
        return max(knapsack(W,Wt,Val,n-1),Val[n-1] + knapsack(W - Wt[n-1],Wt,Val,n-1));
    }
}

int main()
{
    ios_base::sync_with_stdio(0);

    cin.tie(NULL);cout.tie(NULL);
    W = 4;
    n = 5;
    int Wt[n]={1,2,3,2,2};
    int Val[n] = {8,4,0,5,3};

    //init();
   cout<<knapsack(W,Wt,Val,n)<<endl;

    //cout<<res<<endl;

}
