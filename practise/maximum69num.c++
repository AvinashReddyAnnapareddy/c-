#include<iostream>
using namespace std; 
    int maximum69Number(int num) {
        int temp = num;
        int digits = 0;

    
        while (temp > 0) {
            digits++;
            temp /= 10;
        }

   
        int arr[digits];
        temp = num;
        for (int i = digits - 1; i >= 0; i--) {
            arr[i] = temp % 10;
            temp /= 10;
        }

    
        for (int i = 0; i < digits; i++) {
            if (arr[i] == 6) {
                arr[i] = 9;
                break;
            }
        }

 
        int result = 0;
        for (int i = 0; i < digits; i++) {
            result = result * 10 + arr[i];
        }

        return result;
    }
    int main(){
        int x=9669;
int z= maximum69Number(x);
cout<<z;
    }

