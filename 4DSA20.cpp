/*
   *
  ***
 *****
*******
*/

#include<iostream>
using namespace std;

int main(){
    int n ;
    cout << "enter the value of n : ";
    cin >> n;

    int row = 1 ;
    while(row <= n){
        int space = 1;
        while(space <= n - row){
            cout << " ";
            space++;
        }

        int col = 1;
        while(col <= 2*row - 1){
            cout << "*";
            col++;
        }

        cout << endl;
        row++;
    }

    return 0;
}
