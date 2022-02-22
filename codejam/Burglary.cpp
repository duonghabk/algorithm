/*
Bài 5: BURGLARY - medium level
https://www.spoj.com/problems/BURGLARY/

Tóm tắt đề bài:
Cho 1 mảng N (1<=N<=30) các số tự nhiên (mỗi số nằm trong khoảng từ 0 đến 1e9) và một số D (0<=D<=3*1e10).
Chọn K số bất kì trong mảng N sao cho tổng của các số này bằng D.
- Nếu chỉ có 1 cách chọn duy nhất, in ra số k
- Nếu có nhiều cách chọn khác nhau (nhiều số k khác nhau thỏa mãn đề bài), in "AMBIGIOUS"
- Nếu không có cách chọn nào, in "IMPOSSIBLE"

Input

Tổng số lượng phép thử là T (1 <= T <= 20) được cho trên dòng đầu tiên.
Mỗi phép thử được cho trên 2 dòng, dòng đầu tiên của mỗi phép thử là N và D, cách nhau bởi 1 dấu cách trắng.
Dòng tiếp theo mô tả các giá trị trong mảng, 2 số cạnh nhau được ngăn cách bởi 1 dấu cách trắng.

Output
Hãy in đáp án của mỗi phép thử trên 1 dòng dưới dạng:

Case #i: K
*/

#include <bits/stdc++.h>

using namespace std;

int t, N, k, d;
/*
Nếu ta chia mảng đầu vào thành 2 nửa (nửa A và nửa B) sau đó lưu tổng của mỗi hoán vị của
mảng A và B tương ứng vào bảng S1 và S2. Lúc này, tổng của các số trong mảng ban đầu
bằng D nếu tồn tại một số trong S1 và một số trong S2 sao cho tổng của 2 số này bằng D.
- Không gian tìm kiếm: O(2^15) ~ 32768 ~ 3*1e5
==> Giảm không gian tìm kiếm
*/
map < ul, int > generate(vector < int > v) {
  map < ul, int > m;
  int sz = v.size();
  vector < ul > s(1 << sz, 0 ULL);
  for (int i = 0; i < 1 << sz; i++) {
    for (int j = 0; j < sz; j++) {
      if (i & (1 << j)) {
        s[i] = s[i ^ (1 << j)] + v[j];
        int cnt = __builtin_popcount(i);
        if (m[s[i]] != 0 && m[s[i]] != cnt) {
          m[s[i]] = -2;
        } else {
          m[s[i]] = cnt;
        }
        break;
      }
    }
  }
  if (m.count(0)) {
    m[0] = -2;
  } else {
    m[0] = 0;
  }
  return m;
}
void sovle(int * A) {
  int ans = -1;
  for (auto it: m1) {
    ul n = D - it.first;
    if (m2.find(n) != m2.end()) {
      if (m2[n] != -2 && it.second != -2) {
        if (ans != -1 && ans != it.second + m2[n]) {
          ans = -2; // Chọn được nhiều số K
          break;
        }
        ans = it.second + m2[n];
      } else {
        ans = -2; // Chọn được nhiều số K
        break;
      }
    }
  }

}

/*
void solve(int *A)
{
    ul s[1<<N];
    int ans = -1; //Không chọn được số K
    for (i = 0; i < (1<<N); i++)
    {
        ul sum = 0;
        for(int j = 0; j < N; j++){
            if(i&1<<j)
            { // j được chọn
                sum += v[j]; //số j được chọn}
            }
            if(sum == D)
            {
                int cnt = __builtin_popcount(i); //lấy ra số bit được set của i = số các số cần chọn
                if(ans != -1 && ans != cnt)
                {
                    return -2; //Chọn được nhiều số K
                }
            ans = cnt;
            }
        }
    return ans;
}
*/
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  cin >> t;
  cin >> N;

  int A[N];
  for (int i = 0; i < N; i++)
    cin >> A[i];
  cin >> d;
  cin >> k;

  for (int i = 0; i < t; ++i) {
    solve(A);
  }

  return 0;
}