#include <bits/stdc++.h>

using namespace std;
vector<string> str =
{
    "QWERTYUIOP",
    "ASDFGHJKL",
    "ZXCVBNM"
};
map<char,pair<int,int>>key_pos;

void solve(int c)
{
    string s;
    cin >> s;

    int result = s.size();

    string key_now = s[0];
    pair<int,int> key_now_p = key_pos[key_now];
    for(int i=1;i<s.size();i++)
    {
        string key_next = s[i];
        pair<int,int> key_next_p = key_pos[key_next];
        int diff_t = key_next_p.first-key_now_p.first;
        int diff_l = key_next_p.second-key_now_p.second;

        result+=max()
    }
    cout<<result<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    for(int i=1; i<=3;i++)
    {
        string line = str[i];
        for(int j=1;j<=line.size();j++)
        {
            string key = line[j];
            key_pos[key] = make_pair(i,j);
        }
    }

    int t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        solve(t);
    }

    return 0;
}
