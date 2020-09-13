// Binary Search using Iterative approach

#include <bits/stdc++.h>
using namespace std;

int binarySearch(int x, int n, int arr[]){
    int lo=0, hi=n-1;
    while(hi-lo>1){
       int mid = (hi+lo)/2;
       
       if(arr[mid] == x)
        return mid;

     if(arr[mid] > x)
          hi= mid-1;

         else
           lo = mid+1; 
    }
    if(arr[lo] == x)
      return lo;
    else if(arr[hi] == x)
      return hi;

      return -1;
}


int main(){
    
    printf("\n\t*****  Binary Search  *****\n");
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    printf("\n\t The Array used here is  of size 10 and contains elements 1 to 10. \n");
    printf("\n\t Enter Element to search\n"); 
    int ele=0;
    scanf("%d", &ele);
     
     int elementFound = binarySearch(ele,10,arr);
     if(elementFound == -1){
         cout<<"\n\tElement not found!\n\n";
     }else{
         cout<<"\n\tElement found!\n\n";
     }
    return 0;
}