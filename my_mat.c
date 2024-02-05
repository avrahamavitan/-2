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
if(x!=0){printf("True\n");}
else printf("False\n");
 
}

void fanc3(int arr[10][10]){

    int arr1[10][10];
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(arr[i][j]!=0){arr1[i][j]=arr[i][j];}
          else arr1[i][j]=999;
        }
        
    }
    for(int k=0;k<10;k++){
        for (int i=0;i<10;i++){
             for(int j=0;j<10;j++){
                if(arr1[i][k]!=999&&arr1[k][j]!=999){
                if (arr1[i][k]+arr1[k][j]<arr1[i][j]){
                    arr1[i][j]=arr1[i][k]+arr1[k][j];
                }
                }
        
             }
        
        }
    }




int i;
int j;
scanf(" %d",&i);
scanf(" %d",&j);
int x=arr1[i][j];

if(x!=999){printf("%d\n", x);}
else printf("%d\n", -1);
}
