// Sum of first N natural numbers

#include <bits/stdc++.h>
using namespace std;
  
int sum(int n){
    return n*(n+1)/2;
}

int main()
{
    cout<<sum(3); // prints 6
    return 0;
}
