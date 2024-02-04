#include <stdio.h>
#include <stdbool.h>
#include "my_mat.h"

void fanc1(int arr[10][10]){
for(int i=0;i<10;i++){
    for (int j=0;j<10;j++)
    {
        scanf(" %d",&arr[i][j]);
    }
}
}
void fanc2(int arr[10][10]){
    bool b=false;
int x=0;
int i;
int j;
scanf(" %d",&i);
scanf(" %d",&j);
x=arr[i][j];
if(x!=0){b=true;;}
else b=false;
 printf(" %d",b);
}

void fanc3(int arr[10][10]){
    int x=0;
    int i;
int j;
scanf(" %d",&i);
scanf(" %d",&j);
for (int k = 0; k < 10; k++)
{
    if (arr[i][k]+arr[k][j]<x)
    {
        x=arr[i][k]+arr[k][j];
    }
    
}
if(x!=0){printf(" %d", x);}
else printf(" %d", -1);
}
