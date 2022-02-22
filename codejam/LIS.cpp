/*
Dãy con đơn điệu tăng dài nhất
https://www.spoj.com/problems/LIS/

Cho dãy số nguyên A = a1, a2,... ,an ( n ≤ 50000, -100000 ≤ ai ≤ 100000). Một dãy con của A là một cách chọn trong A một số phần tử giữ nguyên thứ tự.

Yêu cầu: hãy tìm dãy con đơn điệu tăng của A có độ dài lớn nhất.

Ví dụ: A = (1, -2, 2, 3, 4, 9, 10, 5, 6 ,7) thì dãy con đơn điệu tăng dài nhất là (1, 2, 3, 4, 5, 6 ,7).
*/

#include <bits/stdc++.h>

using namespace std;

int t,n,k;

void solve(int *A)
{
    
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
