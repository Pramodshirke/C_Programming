// Accept number from user and display all the numbers  till that number 
// Input : 8
// output : 1 2 3 4 5 6 7 8 

// Input : -6
// output : 1 2 3 4 5 6 7 8 

/*
START 
   Accept one number as no
   If number is negative then convert it to possitive
   Create one counter as cnt and set it to 1
   
   Iterate till the counter is less than or equal to the number
   print the value of counter on screen 
   Increment the value of counter by 1
   continue
END
*/
#include<stdio.h>
//Display function accepts one parameter and returns nothing
 void Display(int iNo)
 {
	 
	 int iCnt =0;
	 if(iNO==0) // jr input 0 asel tr function prynt janar nahi.
	 {
		 return;
	 }
	 if(iNo<0) // Input Updater
	 {
		 iNo=-iNo;
	 }
	
	 for(iCnt=1;iCnt<=iNo;iCnt++)
	 {
		 printf("%d\n",iCnt);
	 }
 }
 
int main()// Entry Point function
{
	int iValue =0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	Display(iValue);
	return 0;
}