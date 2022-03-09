/*
CALCULATOR
Input : Cho B là cơ số
2 số đầu vào là S và D.
tính S*D nếu âm thì có dấu "-";
*/
#include<bits/stdc++.h>
using namespace std;

int N;//the number of test cases
int B;//number system
char S[110];//first integer
char D[110];//second integer
int ns = strlen(S);
int nd = strlen(D);
void InputData(){
    cin >> B >> S >> D;
}
int  c2d( char ch)
{
    if((ch>='0')&&(ch<='9')) return (ch - '0');
    if(ch>='A') return (ch - 'A'+10);
}
int conv( char *src, int *des){
    int i;
    for ( i = 0;src[i];i++){
        des[i] = c2d(src[i]);
    }
    return i;
}
char d2c[]="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

void multi(char *S, char *D){
    int s[110], d[110];
    int slen = conv(S,s);
    int dlen = conv (D,d);
    int temp[220] ={0};
    for(int i= 0;i<dlen;i++)
    for(int j = 0;j<slen;j++){
        temp[i+j] += d[i]*s[j];
    }
    for(int i = slen + dlen -2;i>0;i--)
    {
        if(temp[i]>=B)
        {
            temp[i-1]+=temp[i]/B;
            temp[i]%=B;
        }

    }
    if(temp[0] >= B){
            cout << d2c[temp[0] / B];
            temp[0] %= B;
        }
    for(int i = 0;i< slen +dlen -1;i++)
        cout<<d2c[temp[i]];



}
void Solve()
{
    if((S[0] == '0') || (D[0] == '0')) {
            cout<<"0"; return;
        }
    int sign = 1;
    char *s = S, *d = D;
    if(S[0] == '-') {
        sign *=-1;
        s++;
    }
    if(D[0]== '-'){
        sign *= -1;
        d++;
    }
    if(sign < 0) cout << "-";
    multi(s,d);

}
int main(){
    int i;
    scanf("%d", &N);
    for(i = 0; i < N; i++){
        InputData();//input function
        //	write the code
        Solve();

    }
    return 0;
}
