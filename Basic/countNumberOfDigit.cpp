// Count No of digit in a given number.

#include <bits/stdc++.h>
using namespace std;
  
 // using formula 
int countDigit(int n){
    int count=0;
    while(n != 0){
        n=n/10;
        count++;
    }
    return count;
}

// using recursion
int countDigitUsingRecursion(int n){
    if(n==0)
       return 0;
    return 1 + countDigitUsingRecursion(n/10);       
}

// using logarithmic approach, can be used for positive no's only
int countDigitUsingLog(int n){
    return floor(log10(n)+1);
}

int main()
{
    cout<<countDigit(123); // prints 3
    cout<<countDigitUsingRecursion(123); // prints 3
    cout<<countDigitUsingLog(123);  // Prints 3
    return 0;
}
