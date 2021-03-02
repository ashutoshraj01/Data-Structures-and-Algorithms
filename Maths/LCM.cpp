#include <iostream> 
#include <algorithm> 
using namespace std;

// Using Naive approach
int lcm(int a, int b){
    int res = max(a,b);
    while (true)
    {
        if(res%a == 0 && res%b == 0)
           return res;
        res++;   
    }
    return res;
}

// Optimized Way
// Using formula ==>  a*b = gcd(a,b) * lcm(a,b) 
 
   int gcd(int a,int b){
       if(b==0)
         return a;
        return gcd(b, a%b); 
   }

  int lcmUsingFormula(int a, int b){
       return (a*b)/(gcd(a,b));
   }

int main(){

    cout<<lcm(4,6)<<"\n";
    cout<<lcmUsingFormula(4,6)<<"\n";
    return 0;
}