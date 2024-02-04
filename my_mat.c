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
int i;
int j;
scanf(" %d",&i);
scanf(" %d",&j);
int x=arr[i][j];
if(x!=0){printf("true/n");}
else printf("false/n");
 
}

void fanc3(int arr[10][10]){
    
    int i;
int j;
scanf(" %d",&i);
scanf(" %d",&j);
int x=arr[i][j];
for (int k = 0; k < 10; k++)
{
    if (arr[i][k]+arr[k][j]<x)
    {
        x=arr[i][k]+arr[k][j];
    }
    
}
if(x!=0){printf(" %d/n", x);}
else printf(" %d/n", -1);
}
