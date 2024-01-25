//bubble sort
//time complexity o(n^2) :- worst case
//time complexity o(n) :- best case
// in c++ the sort method hybrid sort (bubble +)

#include<bits/stdc++.h>
using namespace std;
void BubbleSort(int ind, int n, int *arr){
    if(n == 1) return;
    if(ind == n - 1){
        BubbleSort(0, n - 1, arr);
        return;
    }
    if(arr[ind] > arr[ind + 1]){
        swap(arr[ind], arr[ind + 1]);
    }
    BubbleSort(ind + 1, n, arr);
    
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    BubbleSort(0, n, arr);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}