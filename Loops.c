#include <stdio.h>
int main()
//Question number 1
//While loop
{
    int x=0;
    while(x<=100)
    {
        printf("\t%d",x);
        x++;
    }
//Do while loop
   int x=0;
   do
    {
        printf("\t%d",x);
        x++;
    } while(x<=100);

//For while loop
    int x;
    for (x=1;x<=100;x++)
    {
        printf("\t%d",x);
    }

//Question number 2
   int marks[10];
   int total=0;
   float avg;

   printf("Enter the ten marks \n");


   for(int x=0;x<10;x++)
   {
       printf("Mark %d:",x+1);
       scanf("%d",&marks[x]);
       total += marks[x];
   }

   avg=(float)total/10;

   printf("Total marks:%d \n",total);
   scanf("Average marks : %.2f\n",avg);

   if(avg<50.0)
   {
    printf("Fail\n");
   }
   else
   {
       printf("Pass \n");
   }

}

