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
    int left = 0, right = N-1;
    while(left <right){
        if(minsum > abs(A[left] + A[right])){
            minsum = abs(A[left] + A[right]);
            res[0]= left;
            res[1] = right;
        }
        if((A[left] + A[right])< 0 ) left++;
			else if((A[left] + A[right])> 0) right--;
			else break;
    }
    cout<< res[0]<<" "<<res[1];




    return 0;
}
