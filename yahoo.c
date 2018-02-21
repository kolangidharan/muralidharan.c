#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,min,max,Student[50];
printf("\n Enter the number of student in a class:");
scanf("%d",&n);                // get number of students
for(i=0;i<n;i++)
{
printf("\n Enter the Student[%d] mark=");
scanf("%d\n",&Student[i]);          //get student marks in array
}
max=Student[0];            //initialize maximum value as 0
min=Student[0];            //initialize minimum value as 0
for(i=0;i<n;i++)
{
if(Student[i]>max)           //if mark is maximunm
{
max=Student[i];              //if satisfy condition
}
if(Student[i]<min)            //if mark is minimum
{
min=Student[i];                    //if satisfy condition
}
}
printf("\n MAximum mark=%d",max);            //print maximum
printf("\n Minimum mark=%d",min);           //print minimum
return 0;
}
