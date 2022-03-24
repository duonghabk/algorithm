/*Service Center Task Simulation*/


#include <iostream>
using namespace std;

int N,Q;
int T[101];
int engineer[6];


void Input_Data(void){
    cin >> N >> Q;              // Number of engineers, number of customers
    for(int i=0;i<Q;i++){
        cin >> T[i];              // Customer’s work processing time
    }
}
int findMinEngineer(){
    int res;
    int minTime = 999;
    for(int i = 0;i<N;i++){
        if(engineer[i]< minTime){
            minTime = engineer[i];
            res = i;
        }
    }
    return res;
}
int main(){
    int maxTime = 0;
    Input_Data();
    int minEngineer = 0;
    for(int i = 0;i< Q;i++){
       minEngineer = findMinEngineer();
       engineer[minEngineer] += T[i];
        }
    for(int i= 0;i<N;i++)
        if(maxTime<engineer[i]) maxTime = engineer[i];
    cout<< maxTime;
    return 0;
    }
