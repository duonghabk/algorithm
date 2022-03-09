/*
 * https://www.spoj.com/problems/ABCDEF/
 Bài 2: ABCDEF (medium)
https://www.spoj.com/problems/ABCDEF/
1. Tóm tắt đề bài
Cho 1 mảng gồm N (1<=N<=100) các số nguyên, mỗi số nằm trong khoảng từ -30000 đến 30000.
In ra màn hình số cách chọn bộ 6 số a,b,c,d,e,f từ mảng trên thỏa mãn d!= 0 và:
                             (a*b+c)/d-e =f
 * */

/*
Solution:

đẳng thức tương đương với 
                     a*b+c = (e+f)*d
*/

#include <bits/stdc++.h>

using namespace std;

int t,n,k;

void solve(int *A)
{
    vector<int > v1,v2;
    for(int i=0; i<n;i++){
        for(int j= 0;j<n;j++){
            for(int k = 0;k<n;k++){
                if(A[k]!=0) v2.push_back((A[i]+A[j])*A[k]);
                v1.push_back((A[i]*A[j])+A[k]);
            }
        }
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    int ans = 0;
    for(i=0;i<v1.size();i++)
    {
        auto lo = lower_bound(v2.begin(),v2.end(),v1[i]); //Vị trí xuất hiện đầu tiên
        auto hi = upper_bound(v2.begin(),v2.end(),v1[i]); //Vị trí xuất hiện cuối cùng
        ans+=hi-lo;
    }
    cout<<ans;
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
        solve(A);
    }

    return 0;
}

