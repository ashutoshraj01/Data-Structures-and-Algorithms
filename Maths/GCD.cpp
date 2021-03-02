#include <iostream> 
#include <algorithm> 
using namespace std;

int gcdNaiveSolution(int a,int b){
    int res = min(a,b);
    while(res>0){
        if((a%res == 0) && (b%res == 0)){
            break;
        }
        res--;
    }
    return res;
}

// Using Euclidean Algorithm
int gcdUsingEuclidean(int a, int b){
    while(a!=b){
        if(a>b){
            a=a-b;
        }else{
            b=b-a;
        }
    }
    return a;
}
// Using Euclidean Algorithm
// Most optimized way of finding Gcd
int gcdUsingOptimizedWay(int a, int b){
    if(b == 0)
       return a;
    else
      return gcdUsingOptimizedWay(b, a%b);   
}

int main(){
     cout<<gcdNaiveSolution(15,12)<<"\n";
     cout<<gcdUsingEuclidean(15,12)<<"\n";
     cout<<gcdUsingOptimizedWay(15,12)<<"\n";   
    return 0;
}