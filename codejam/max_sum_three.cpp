/*
 * https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1
 Tìm sub array con có tổng lớn nhất
 * */
#include<bits/stdc++.h>

using namespace std;
int n;
int A[100];



void init()
{
    cin>>n;
    for(int i = 0;i<n;i++)
        cin>>A[i];

}
/*
int maxSubarraySum(int arr[],int n)
{
    int maxsum = 0;
    for(int i=0;i<n;i++)
        for(int j=i;j<n;j++)
        {
            int sum = 0;
            for(int k=i;k<=j;k++)
                sum +=arr[k];
            if(maxsum<sum) maxsum = sum;
        }
    return maxsum;
}
*/
int maxCrossingSum(int arr[], int l, int m, int h)
{
    int sum = 0;
    int leftsum = -999;
    for(int i= l; i<m;i++)
        sum +=arr[i];
    if(leftsum<sum) leftsum = sum;
    sum = 0;
    int rightsum = -999;
    for(int i= m; i<h;i++)
        sum +=arr[i];
    if(rightsum<sum) rightsum = sum;
    return(max(rightsum,leftsum,rightsum+leftsum));
}
int maxSubarraySum(int arr[],int l,int h)
{
    if(l==h) return arr[l];
    int m = (l+h)/2;
    return max(maxSubarraySum(arr,l,m),
               maxSubarraySum(arr,m,h),
               maxCrossingSum(arr,l,m,h));
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    init();
    cout<<maxSubarraySum(A,0,n);

}
