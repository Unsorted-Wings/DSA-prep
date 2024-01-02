#include<iostream>

using namespace std;

//printing name n times

/*
void funct(int i, int n){
    if(i > n) return;
    cout << "rohit";
    funct(i+1,n);
}
*/

//printing number from 1 to n

/*
void funct(int i, int n){
    if(i > n) return;
    cout << i << endl;
    funct(i+1, n);
}
*/

//printing number from n to 1

/*
void funct(int i, int n){
    if(i < n) return;
    cout << i;
    funct(i-1,n);
}
*/

//printing number from 1 to n (backtrack)
/*
void funct(int i){
    if(i < 1) return;
    
    funct(i-1);
    cout << i << endl;
}
*/

//printing number from n to 1 (backtrack)

/*
void funct(int i, int n){
    if(i > n) return;
    funct(i+1,n);
    cout << i;
}
*/

int main(){
    //for name
    //funct(1, 5);

    //for printing from t to n
    //funct(1, 5);

    //for printing from n to 1
    //funct(5,5);

    //for printing from t to n (backtrack)
    //funct(5);

    //for printing from n to 1 (backtrack)
    //funct(1,5);

}