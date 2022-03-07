/*
Cho chuoi N input: "2 4 8 5 8 4 8 5 9 6 3 2" and virus B is "4 8 5"
Nhieu dang virus moi dc tao ra tu chuoi B theo cach:
C1: thay doi thu tu: 4 8 5, 8 4 5 , 8 5 4,...
C2: tang hoac giam cung 1 value: 5 9 6, 2 6 3,..
C3: tang hoac giam cung 1 value va cac hoan vi

*/

#include <bits/stdc++.h>
using namespace std;

int N; // Number of executable code data
int M; // Number of virus data
int A[20000 + 10]; // Executable code data
int B[10 + 10]; // Virus data

int sol; // Correct answer

void InputData(void)
{
	int i;

	cin >> N >> M;

	for (i = 0; i < N; i++) {
		cin >> A[i];
	}

	for (i = 0; i < M; i++) {
		cin >> B[i];
	}
}

void OutputData(void)
{
	cout << sol;
}

int Find(int start)
{
	
    int temp[M];
	for (int i = 0; i < M; i++) {
		temp[i] = A[start + i];
	}
    sort(temp,temp + M);
    for (int i = 0; i < M; i++){
        if((temp[i]-B[i])!=(temp[0]-B[0])) return 0;
    }
	return 1;
}

void Solve(void)
{
	
    sort(B,B+M);
	for (int i = 0; i <= N - M; i++) {
		sol += Find(i);
	}
}

int main(void)
{
	InputData(); // Input

	Solve(); // Problem solving

	OutputData(); // Output

	return 0;
}
