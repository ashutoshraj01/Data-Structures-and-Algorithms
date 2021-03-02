#include <iostream> 
#include <algorithm> 
using namespace std;

 bool checkForPrime(int n){
     if(n==1)
        return false;
     for(int i=2;i<n;i++)
        if(n%i==0)
           return false;

    return true;          
 }

// Most Efficient Way
bool isPrime(int n){
    if(n==1) return false;
    if(n==2 || n==3) return true;
    if( n%2==0 || n%3==0) return false;

    for(int i=5; i*i<=n; i=i+6){
        if(n%i==0 || n%(i+2)==0) return false;
    }
    return true;
}

int main(){
    cout<<checkForPrime(12)<<"\n";
    cout<<isPrime(11)<<"\n";
    return 0;
}