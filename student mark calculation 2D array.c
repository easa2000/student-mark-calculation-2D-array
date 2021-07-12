// students mark calculation using 2D array

#include<stdio.h>
void main()
{
    int marks[10][3],i,j;
    int total_marks[10] = {0};
    float avg[10],class_avg = 0.0,total_avg = 0.0;

    printf("\n ENTER THE DATA");
    for(i=0;i<10;i++){
        printf("\n Enter the marks of student %d in 3 subjects : ",i+1);
        for(j=0;j<3;j++)
           scanf("%d", &marks[i][j]);
    }
