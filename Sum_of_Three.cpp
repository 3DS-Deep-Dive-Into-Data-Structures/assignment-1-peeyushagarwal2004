#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(){
    long long int  n ,target;
    cin >> n >> target;
    vector <long long int> arr(n,0);
    vector <pair <long long int,long long int> > iterator;

    //Inputing 
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    for(int i=0;i<n;i++){
        iterator.push_back({arr[i],i+1});
    }
     sort(iterator.begin(),iterator.end());
     // Here index is the first number which is locked 
     // back is the third number which is also locked unless the 
     // first1 iterator matches to meet the result 
     for(int index=0;index<n;index++){
        int number = iterator[index].first;

        int first1 =index+1,back=n-1,sum=0;

        while(first1<back){
            sum=number+iterator[first1].first +iterator[back].first;

            if(sum==target){
                cout << iterator[index].second<<" " <<iterator[first1].second<<" " << iterator[back].second<< " ";
                return 0;
            }
            else if(sum <target){
                first1++; // if the sum if not meet the first1 iterator is updated
            }
            else{
                back--; // if sum is found to be more than required then back is pushed back 
            }
        }

     }
     cout << "IMPOSSIBLE";
     return 0;
}
    
     