#include<iostream>
#include<vector>

using namespace std;

void reshuffle(vector<int>& arr,int start, int n);

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    // for(auto num:arr){
    //     cout << num <<" ";
    // }

    reshuffle(arr,0,n);

return 0;
}

void reshuffle(vector<int>& arr,int start, int n){
    if (start == n - 1) { 
        for (int num : arr) {
            cout << num << " ";
        }
        cout << endl;
        return;
    }

    for (int i = start; i < n; i++) {
        swap(arr[start], arr[i]); 
        reshuffle(arr, start + 1, n);
        swap(arr[start], arr[i]); 
    }
}
