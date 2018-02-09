#include <iostream>
#include <stdio.h>
#include <math.h>
#include <windows.h>
using namespace std;

int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    double fact = 1;
    for(int a = 1;a <= x;a++){
        fact=fact*a;
    }
    printf("%d!=%f",x,fact);
    return 0;
}

