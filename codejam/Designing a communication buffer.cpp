/*
Bộ phận ID đang thiết kế một phương thức truyền thông sử dụng giữa các thiết bị IOT.
Phương thức truyền thông đầu tiên đã được thiết kế với phương thức xử lý tuần tự các gói tín hiệu.
Phương thức thứ hai cần bạn thực hiện đó là xử lý các gói tín hiệu theo thứ tự ưu tiên. 
Nếu hai gói tín hiệu có thứ tự ưu tiên giống nhau thì gói tín hiệu nào đến trước thì xử lý trước.


Input:

Dòng đầu tiên là số tín hiệu N (1 ≤ N ≤ 1000)

N dòng tiếp theo, mỗi dòng gồm hai số. Số đầu tiên là thứ tự gửi tín hiệu packet_no (0 ≤ N ≤ 1000 và không có hai số thứ tự nào giống hệt nhau). 
Số thứ hai là thứ tự ưu tiên của gói tín hiệu đó prior_level (0 ≤ N ≤ 10,000,000).

Output:

Thứ tự xử lý các gói tín hiệu sau khi tất cả tín hiệu được nhận.
*/


#include <bits/stdc++.h>

using namespace std;

int t,n,k;
struct Buffer
{
    int no;
    int priority ;
};

bool compareInterval_1(Buffer i1, Buffer i2)
{
    return (i1.no < i2.no);
}
bool compareInterval_2(Buffer i1, Buffer i2)
{
    if(i1.priority == i2.priority) 
        return (i1.no <i2.no);
    else 
        return (i1.priority < i2.priority);

}
void solve(Buffer *A)
{
    cout<< "Sort by step 1:"<<endl;
    sort(A,A+n,compareInterval_1);
    for(int i=0; i<n;i++)
       cout<<A[i].no<<" ";

    cout<< "\nSort by step 2:"<<endl;
    sort(A,A+n,compareInterval_2);
    for(int i=0; i<n;i++)
       cout<<A[i].no<<" ";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    
    cin >> n;
    Buffer A[n];
    for(int i=0; i<n;i++)
        cin>> A[i].no>>A[i].priority; 
    
    solve(A);
   

    return 0;
}
