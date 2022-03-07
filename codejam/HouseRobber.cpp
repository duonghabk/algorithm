/*
https://leetcode.com/problems/house-robber/

Cho 1 mảng các số nguyên, yêu cầu lấy ra các số trong mảng đấy sao cho tổng là lớn nhất, với điều kiện không được lấy 2 phần tử cạnh nhau trong mảng.

            Ví dụ: A = [1, 2, 3, 1]

Output: 4. Lấy phần tử đầu tiên và thứ 3 của mảng sẽ cho tổng lớn nhất.
*/


#include <bits/stdc++.h>

using namespace std;

int t,n,k;

int solve(int *A)
{
    if(n ==1) return A[0];
    int res[n];
    res[0] = A[0];
    res[1] = max(A[0],A[1]);
    for(int i = 2;i<n;i++)
    {
        res[i] = max(res[i-2] + A[i],res[i-1]);
    }
    return res[n-1];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    int A[n];
    for(int i=0; i<n;i++)
        cin>> A[i];
    cout<<solve(A)<<endl;

    return 0;
}
