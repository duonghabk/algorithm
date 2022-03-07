/*
The company instructed Mr.Na to report Lee Sa-rang's maximum preferences in relation to the sponsored goods selected using each of the two methods. 
The first method is to find the maximum preferences when only 3 goods are selected in a row arbitrarily from the range of sponsored goods, as Mr.Na did, 
and the second method is to find the maximum preferences when goods are selected in a row without limiting the number of goods which may be arbitrarily selected.

For example, "3, 1, -2, 5, -3" is given as the preferences for 5 sponsored goods, 
For the first method, 3 goods, including "1, -2, 5", are selected and the maximum preferences become 4. 
For the second method, 4 goods, including "3, 1, -2, 5", are selected in a row and the maximum preferences become 7. 
The preference is shown as an integer (-104 ≤integer≤ 104) and since at least one sponsored good should be used, 
even if there are only sponsored goods with negative preferences, at least one sponsored good should be selected.

For example, if "-1, -1, -1" is given as the preferences for 3 sponsored goods, 
the maximum preferences obtained using the first and the second methods should be -3 and -1 respectively. 
Given the preference of N sponsored goods and the code of the first method, write a code that finds and outputs maximum preferences 
obtained using the second method. 
[Input format] In the first line, the number of sponsored goods (N) is inputted (N is an integer, 3 ≤ N ≤ 105) 
In the second line, N preferences Di are inputted separately by a blank (The reference is an integer, -104 ≤ Di ≤ 104) 
[Output format] The maximum preferences obtained using the second method are outputted.


Tim chuooi con co tong lon nhat

*/
#include <iostream>
using namespace std;

int N;//Number of sponsored goods
int D[100000 + 10];//Preference
int sol = -30001;//Maximum preference of the first method

void InputData(){
	cin >> N;
	for(int i=0;i<N;i++){
		cin >> D[i];
	}
}

void Solve()
{
	int maxHere = 0;
	for(int i = 0;i<N;i++)
	{
		maxHere+=D[i];
		if(sol <= maxHere) sol = maxHere;
		if(maxHere< 0) maxHere = 0;
	}
}


int main(){
	InputData();//Input function
	Solve();
	cout << sol << endl;//Output
	return 0;
}