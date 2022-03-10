#include <iostream>
using namespace std;
const int MAX = 10;
int N, cnt;
int arr[MAX][MAX];
char input[100];
bool valid[MAX];

int main() {
    cin>>N;
    for (int i = 0; i < N; ++i) {
        cin >> input;
        for (int j = 0; j < N; ++j)
            arr[i][j] = int(input[j] - '0');
    }
    for (int color = 1; color <= 9; ++color) {
        valid[color] = true;
    }

    for (int color = 1; color <= 9; ++color) {
        int minX = N, minY = N, maxX = -1, maxY = -1;
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                if (arr[i][j] == color) { // Ghi nhận tọa đô của 4 góc chữ nhật
                    if (i > maxX) maxX = i;
                    if (i < minX) minX = i;
                    if (j > maxY) maxY = j;
                    if (j < minY) minY = j;
                }
            }
        }

        if (maxX == -1) { // Nếu không tìm thấy màu color thì không tính màu này
            valid[color] = false;
            continue;
        }

        for (int i = minX; i <= maxX; ++i) {  // Kiểm tra trong vùng tô của màu
            for (int j = minY; j <= maxY; ++j) {
                if (arr[i][j] != color) {               // Màu color đã bị màu khác tô đè lên
                    valid[arr[i][j]] = false;   // Đánh dấu màu ghi đè không được ghi nhận
                }
            }
        }
    }

    cnt = 0;
    for (int color = 1; color <= 9; ++color) // Đếm số màu được ghi nhận
        if (valid[color]) cnt++;

    cout <<cnt<<endl;
    return 0;
}
