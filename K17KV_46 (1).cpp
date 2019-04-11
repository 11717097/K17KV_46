#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
main()
{
 int n,i,j,k,temp,max;
 int head,array[n];
 int  point=0,diff;
 printf("enter max size of disk");
 scanf("%d",&max);
 printf("\nEnter the  max size of array: ");
 scanf("%d",&n);
 a:
   printf("\nEnter the current head position: ");
   scanf("%d",&head);
    if(head>max||head<=0)
         {printf("enter again");
          goto a;
        }
 printf("Enter the array elements:-");
 array[0]=head;
 for(i=1;i<n;i++){
 b:
    printf("\nEnter the %d element of the array ",i); 
    scanf("%d",&array[i]);
    if(array[i]>=max||array[i]<=0)
        {printf("enter again");
          goto b;
        }
    }
    for (i=0;i<n;i++)
    {   for(j=i+1;j<n;j++)
         { 
            if(array[i]>array[j])
            {  temp=array[i];  
               array[i]=array[j];
               array[j]=temp;
            }
          }
   }
 for(j=0;j<n;j++)
   {  if(array[j]==head)
    diff=abs(array[j+1]-array[j]);
    point+=diff;
    printf("Steps covered from %d  to %d are %d \n",array[j],array[j+1],diff);
     if(i==n){
	 diff=abs(array[n]-array[0]);
	 printf("Steps covered from %d  to %d are %d \n",array[0],array[n],diff);
	 point+=diff;
	 i=0;
	 }
	}
 printf("Total steps taken are %d",point);
}
