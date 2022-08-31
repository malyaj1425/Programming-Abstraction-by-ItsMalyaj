#include <iostream>
#include <stdlib.h>
#include <stack>
using namespace std;
int push(int arr[], int n, int top, int size)
{
    if (top == size)
    {
        cout << "Overflow\n";
    }
    top++;
    arr[top] = n;
}
int pop(int arr[], int n, int top, int size)
{
    if(top==-1){
        cout<<"underflow\n";
    }
    arr[top]=0;
}
int main()
{
    cout << "Enter No. of elements: " << endl;
    int n;
    cin >> n;
    int top = -1;
    int arr[n]={0};
    
    while (true)
    {
        cout << "Welcome To Stack! choose your operation: " << endl;
        cout << "1. Push\n2. Pop\n3. Display\n";
        int a;
        cin >> a;
        if (a == 1)
        {
            cout << "Enter Value to be pushed: ";
            int i;
            cin >> i;
            push(arr, i, top, n);
            if(top<n){
                top++;
            }
        }
        else if (a == 2)
        {
        }
        else if (a == 3)
        {
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
        else
        {
            break;
        }
    }

    return 0;
}