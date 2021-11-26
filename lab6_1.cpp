#include<iostream>
using namespace std;

int main(){

    int N, countEven = 0, countOdd = 0;

    cout << "Enter an integer: ";
    cin >> N;

    if(N % 2 == 0){
            countEven++;

        }else{
            countOdd++;
        }
        
    while(N != 0){

    
    cout << "Enter an integer: ";
    cin >> N;
    
        if(N % 2 == 0){
            countEven++;

        }else{
            countOdd++;
        }

    }
  
    cout << "#Even numbers = " << countEven-1;
    cout << "#Odd numbers = " << countOdd;
    return 0;
}

