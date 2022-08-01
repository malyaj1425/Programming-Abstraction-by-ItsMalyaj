#include<iostream>
#include<stdlib.h>
using namespace std;
#define M 3
#define N 4
void transpose(int A[][N], int B[][M])
{
    int i, j;
    for(i = 0; i < N; i++)
        for(j = 0; j < M; j++)
            B[i][j] = A[j][i];
}
int main(){
    
    int arr[M][N];
    int arr2[N][M];
    for(int i=0;i<N;i++)
    {
        cout<<"for row: "<<i<<endl;
        for(int j=0;j<M;j++)
        {
            cin>>arr[i][j];

        }
        cout<<endl;
    }
    
    transpose(arr,arr2);
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}