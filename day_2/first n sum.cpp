//sum of first n numbers

#include<iostream>

using namespace std;

//paramiterized
void nSum(int i, int sum){
    if(i < 1){
        cout << sum;
        return;
    } 
    nSum(i-1, sum+i);
}

//functional
int nSum(int n){
    if(n == 0) return 0;
    return n + nSum(n-1);
}

int main()
{
    //for paramiterized
    nSum(4,0);

    //for functional
    cout << nSum(4);

    return 0;
}