#include <bits/stdc++.h>
using namespace std;

int main()
{

    printf("\n\t\t*****  Linear Search  *****\n\n");
    printf("\n\t The Array used here is  of size 10 and contains elements 1 to 10. \n");
    printf("\n\tThe index of array start from 0.\n");
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("\n\t Enter Element to search: ");
    int ele = 0;
    scanf("%d", &ele);
    bool elementFound = false;
    for (int i = 0; i <= 10; i++)
    {
        if (arr[i] == ele)
        {
            elementFound = true;
            printf("\n\t%d found at index %d !\n\n", ele, i);
        }
    }
    if (!elementFound)
    {
        printf("\n\t %d not found!\n", ele);
    }

    return 0;
}