/*

Psychology experiment

*/
#include <iostream>
using namespace std;

int N;//The number of candidates
int A[100000 + 10];//Temperament value

void InputData(){
    cin >> N;
    for (int i = 0; i < N; i++) cin >> A[i];
}

int main(){
    InputData();//	Input function

    //	Create the code
    int res[2];
    int minsum = 10000;
    for(int i = 0;i<N;i++){
        if(A[i] > 0) break;
        for(int j = N-1;j>=0;j--){
            if(A[j]<0) break;
            if(minsum > abs(A[i]+A[j])){
                minsum = abs(A[i]+A[j]);
                res[0] = i;res[1]= j;
            }
            if(abs(A[i]+A[j])<abs(A[i]+A[j-1])) break;           
        }
    }
    cout<< res[0]<<" "<<res[1];




    return 0;
}
