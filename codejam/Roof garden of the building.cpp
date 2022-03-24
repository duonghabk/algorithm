#include <iostream>
using namespace std;

int N;//Number of buildings
int H[80010];//Height of buildings

void Input_Data(void){
	cin >> N;
	for (int i = 0; i < N; i++){
		cin >> H[i];
	}
}

int main(){
	long long ans = -1;
	Input_Data();		//	Input function

	//	Write the code
	for(int i = 0;i<N;i++){
        for(int j= i;j<N;j--){
            if(H[i]<H[j]) break;
            else ans++;
        }
    }
	
	cout << ans << endl;	//	Output right answer
	return 0;
}
