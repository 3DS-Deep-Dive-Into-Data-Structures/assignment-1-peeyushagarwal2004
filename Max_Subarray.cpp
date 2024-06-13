#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void Check_Sum(long long int *arr,long long int N){
    long long int max_value = -1e9,  sum=0,i;
    for( i=0;i<N;i++){
        sum=sum+arr[i];
        max_value=max(max_value,sum);
        if(sum<0){
            sum=0;
        }
    }
    cout << max_value;
}
int main(){
    long long int N; // Taking the number of input 
    cin >>N;
    long long int arr[N];

    for (int i = 0; i < N; i++)
    {
       cin >> arr[i];
    }
    Check_Sum(arr,N);
    return 0;
    
}