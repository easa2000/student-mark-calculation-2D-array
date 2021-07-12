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
    // Calculate the total marks per person
    for(i=0;i<10;i++)
    {
        for(j=0;j<3;j++)
           total_marks[i] += marks[i][j];
    }

    // Calculate the average of each student
    for(i=0;i<10;i++)
    {
        for(j=0;j<3;j++)
           avg[i] = (float)total_marks[i]/3.0;
    }

    // Calculate the class

    for(i=0;i<10;i++)
       total_avg  += avg[i];
    
    class_avg = (float)total_avg / 10;

    printf("\n\n STUD NO. \t MARKS IN 3 SUBJECTS \t TOTAL MARKS \t AVERAGE");
    for(i=0;i<10;i++)
    {
        printf("\n %4d ", i);
        for(j=0;j<3;j++)
           printf(" %d ",marks[i][j]);
        printf("%4d \t%.2f ",total_marks[i],avg[i]);
    }
    printf("\n\n CLASS AVERAGE = %.2f ",class_avg);

}
