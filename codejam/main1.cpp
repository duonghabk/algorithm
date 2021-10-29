#include <bits/stdc++.h>

using namespace std;

vector<string> keys = {
    "QWERTYUIOP",
    "ASDFGHJKL",
    "ZXCVBNM"};

map<char, pair<int, int>> key_pos;

void solve(int c)
{
    string s;
    cin >> s;

    int result = s.size();

    char cur = s[0];
    pair<int, int> cur_p = key_pos[cur];

    for (int i = 1; i < s.size(); ++i)
    {
        char next = s[i];
        pair<int, int> next_p = key_pos[next];

        int diff_r = next_p.first - cur_p.first;
        int diff_c = next_p.second - cur_p.second;

        result += max(abs(diff_r + diff_c), max(abs(diff_r), abs(diff_c))) * 2;

        cur_p = next_p;
    }

    cout << result << endl;
}

int main2()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    for (int i = 0; i < keys.size(); ++i)
    {
        string line = keys[i];
        for (int j = 0; j < line.size(); ++j)
        {
            char key = line[j];
            key_pos[key] = make_pair(i, j);
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
