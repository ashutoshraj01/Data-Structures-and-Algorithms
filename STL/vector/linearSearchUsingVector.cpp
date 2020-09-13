// Linear Search using vector

#include <bits/stdc++.h>
#include <vector>
using namespace std;
typedef long long ll;
vector<int> v;
std::vector<int>::iterator it; 

void create()
{

    printf("\n\t Enter the size for the vector: ");
    ll n = 0;
    scanf("%lld", &n);
    printf("\n\tEnter the elements for vector: \n");
    ll t; 
    for (ll i = 0; i < n; i++)
    {   cin>>t;
        v.push_back(t);
    }
    printf("\n\tElements inserted successfully in the vector!, Now You can search!\n");
}

void search()
{
    if(v.empty()){
        printf("\n\n\tVector  is Empty!, First Insert!\n");
    }else{
         printf("\n\tEnter element to search in the vector: ");
         ll element = 0;
         scanf("%lld", &element);
         it = find (v.begin(), v.end(), element); 
          if (it != v.end()) 
    { 
        cout << "\nElement " << element <<" found at position : " ; 
        cout << it - v.begin() + 1<< "\n" ; 
    } 
    else
        cout <<"\n\t  Element "<<element<<" not found.\n\n"; 
    }
}

int main()
{

    printf("\t~~~~~~~~~~~~~~~~~ Linear Search ~~~~~~~~~~~~~~~~~\n");

    
    while (1)
    {

        printf("\n\nChoose the operation you want to perform\n");
        printf("1. Insert \n");
        printf("2. Search\n");
        printf("3. Exit\n");
        printf("Enter Your Choice(in numbers) : ");
        char ch;
        scanf("%ch", &ch);

        switch (ch)
        {
        case '1':
            create();
            break;

        case '2':
            search();
            break;

        case '3':
            printf("\n\n\t\t\t*****  Program Terminated Successfully!  *****\n\n");
            exit(1);

        default:
            printf("\n\n\tYou Entered Invalid Option, Try again wisely!\n");
        }
    }
    return 0;
}
