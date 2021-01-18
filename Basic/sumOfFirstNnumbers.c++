// Sum of first N natural numbers

#include <bits/stdc++.h>
using namespace std;
  
 // using formula 
int sum(int n){
    return n*(n+1)/2;
}

// using recursion
int sumUsingRecursion(int n){
    if(n<=0)
       return 0;
    return n+sumUsingRecursion(n-1);       
}

int main()
{
    cout<<sum(3); // prints 6
    cout<<sumUsingRecursion(3); // prints 6
    return 0;
}
