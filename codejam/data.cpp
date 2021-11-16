/*
 * https://codepro.lge.com/exam/19/overseas-questions-for-previous-test/quiz/1
 * */
//INPUT ORG-->DST
#include<bits/stdc++.h>
using namespace std;
int N;
int A[30 + 10];

void InputData(){
    cin >> N;
        for(int i=0;i<N;i++){
            cin >> A[i];
        }
    }


void Solve(){
    int value, cnt=0, from=0;
    cout << N << endl;
    value = A[from];
    while (cnt < N){
        while (value == 0){
            cout<<"\n_________1: "<<"Val:"<<value<<",from :"<<from<<endl;
            from = (from + 1) % N;
            value = A[from];
            cout<<"\n_________2: "<<"Val:"<<value<<",from :"<<from<<endl;
        }
        cout << "print:"<<value << " ";
        cout<<"\n_________3: "<<"Val:"<<value<<",from :"<<from<<endl;
        cnt++;
        A[from] = 0;
        from = (value + from) % N;
        value = A[from];
       cout<<"\n_________4: "<<"Val:"<<value<<",from :"<<from<<endl;
    }
}

int main(){
    InputData();
    Solve();
    return 0;
}
/*
//DST-->ORG
#include <iostream>
using namespace std;

int N;
int A[30 + 10];
int sol[30 + 10];

void InputData(){
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> A[i];
    }
}

void OutputData(){
    cout << N << endl;
    for(int i=0;i<N;i++){
        cout << sol[i] << " ";
    }
    cout << endl;
}
void Solve()
{
    int val,cnt = 0,from = 0;
    while(cnt<N)
}
int main(){
    InputData();//	입력 함수

    //	코드를 작성하세요
    Solve();
    OutputData();//출력
    return 0;
}
 */
