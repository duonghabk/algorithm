/*
Road construction
LG muốn làm một con đường từ trụ sở chính đến nhà máy. Để làm con đường này thì phải mua đất dọc theo con đường này.

Hãy tìm chi phí mua đất nhỏ nhất. 

Bản đồ được là một ma trận N*N ( 2 ≤ N ≤ 100) trong đó giá đất được mô tả với giá trị tương ứng của từng ô Cost[i][j] (0 ≤ Cost[i][j] ≤ 9).

Con đường chỉ đi được theo bốn hướng: trái, phải, trên, dưới.

Tọa độ trụ sở chính tại (0,0) và tọa độ nhà máy tại (N-1,N-1).

Ví dụ:

Cho bản đồ 3x3, trụ sở chính có tọa độ (0,0), nhà máy có tọa độ (2,2)
*/

#include <iostream>
using namespace std;

int N;//Map Size
char map[110][110];//Map information
int minCost = 9999;
int r[] = {0,1,0,-1};
int y[] = {};
void Input_Data(){
	cin >> N;
	for (int i = 0; i < N; i++){
		cin >> map[i];
	}
}

void backtrack(int x, int y, int cost ){
    if(x == N-1 & y == N-1){
        minCost = cost;
        return;
    }
    for(int )
}


int main(){
	int ans = -1;
	Input_Data();		//	Input function


	//	Write the code



	
	
	cout << ans << endl;	//	Output answer

	return 0;
}
