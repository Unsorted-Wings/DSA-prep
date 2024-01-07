#include<bits/stdc++.h>

using namespace std;

void selection_sort(vector<int>& arr, int n){
    for (int i = 0; i <= n-2; i++)
    {
        int minimum = i;
        for (int j = i+1; j <= n-1; j++)
        {
            if(arr[minimum] > arr[j]) minimum = j;
        }

        int temp = arr[minimum];
        arr[minimum] = arr[i];
        arr[i] = temp;
    }
}

int main(){
    vector<int> arr;
    int n;

    cout << "enter size: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        arr.push_back(value);
    }
    
    selection_sort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    


    return 0;
}