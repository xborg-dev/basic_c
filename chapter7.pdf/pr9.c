#include<stdio.h>
int main(){
int marks [2][3][5];

for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        for (int k=0;k<3;k++){

            printf("marks of table 2,3,5 is ..\n");
           scanf("%d",marks[i][j][k]);

        }
    }
}


for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        for (int k=0;k<3;k++){

            printf("adress of  marks in order %d\n",marks[i][j][k]);
         

        }
    }
}




    return 0;
}