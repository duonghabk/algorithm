


/*

Anh John nhận một task, nhưng người trước đó đưa cho anh dữ liệu không đúng. Thay vì nhận được dữ liệu gốc (ORG) thì anh John nhận được dữ liệu đã biến đổi (DST).

Nhiệm vụ của bạn trợ giúp a John bằng cách đọc code biển đổi dữ liệu gốc và viết code để chuyển về dữ liệu gốc từ dữ liệu biến đổi.

Code biến đổi như sau:
void Solve(){
    int value, cnt=0, from=0;
    cout << N << endl;
    value = A[from];
    while (cnt < N){
        while (value == 0){
            from = (from + 1) % N;
            value = A[from];
        }
        cout << value << " ";
        cnt++;
        A[from] = 0;
        from = (value + from) % N;
        value = A[from];
    }
}

*/

#include <bits/stdc++.h>

using namespace std;

int t,N,k;
/*
void Solve(int *A){
    int value, cnt=0, from=0;
    cout << N << endl;
    value = A[from];
    while (cnt < N){
        while (value == 0){
            from = (from + 1) % N;
            value = A[from];
            cout << value << " "<<cnt << " "<<from<< " "<<endl;
        }
        cout << value << " "<<cnt << " "<<from<< " "<<endl;
        cnt++;
        A[from] = 0;
        from = (value + from) % N;
        value = A[from];
    }
}
*/
bool IsValid(int nextFrom, int * V)
{
    for(int i = 0;i<N;i++ )
        if(nextFrom == V[i]) return false;
    return true;
}

void Solve(int *A){
    int from[N];
    int res[N];
    from[0] = 0;
    res[0] = A[0];
    for(int cnt = 1;cnt<N;cnt++)
    {
        int nextFrom = (from[cnt-1] + A[cnt - 1])%N;
        while (!IsValid(nextFrom,from)) {

            nextFrom = (nextFrom+1)%N;
        }
        from[cnt] = nextFrom;
        res[nextFrom] = A[cnt];
    }
    for(int i = 0;i<N;i++)
        cout<<res[i]<<" ";

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> t;
    cin >> N;
    int A[N];
    for(int i=0; i<N;i++)
        cin>> A[i];

    for (int i = 0; i < t; ++i)
    {
        Solve(A);
    }

    return 0;
}

