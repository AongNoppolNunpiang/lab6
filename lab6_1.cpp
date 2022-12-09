#include<iostream>
using namespace std;

int main(){
    int number ;
    int e = 0, o = 0 ;
    cout << "Enter an integer: ";
    cin >> number ;
    while (number != 0){
        if (number%2 == 1 ){
            o++ ;
        }else{
            e++ ;
            }
        cout << "Enter an integer: ";
        cin >> number ;
    }    
    cout << "#Even numbers = " << e << endl;
    cout << "#Odd numbers = " << o ;
    return 0;
}
