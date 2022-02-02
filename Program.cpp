#include <stdio.h>//include header file
int main(void)//begins main function
{
//declare variables
int totalIncome=0;
int seatType,qty;
int price,ticketPrice;
char ch ='Y';
while(ch=='Y'||ch=='y')//loop
{
printf("PLEASE ENTER THE SEAT TYPE(only 1,2,3):");
scanf(" %d", &seatType);//read a decimal integer
if(seatType==1|| seatType==2|| seatType==3)
{
//inputs and calculations
printf("PLEASE ENTER THE QUANTITY:");
scanf(" %d", &qty);//read a decimal integer
if(seatType==1)
ticketPrice=2000;
else if(seatType==2)
ticketPrice=1500;
else
ticketPrice=1000;
price =ticketPrice * qty;//calculation
printf("SEAT TYPE QUANTITY PRICE(RS)\n");
printf("    %d       %d      %d\n",seatType,qty,price);
totalIncome =totalIncome + price;//calculation
}
else
printf("INVALID SEAT TYPE\n");
printf("Do YOU WANT MORE ENTIRES(Y/N):");
scanf("%*c%c", &ch);//read a character
}
printf("TOTAL INCOME EARN FROM THE SHOW = RS%d\n",totalIncome);//print total
if(totalIncome>10000)
printf("WE HAVE MADE A PROFIT AS WE EXPECTED\n");
else
printf("WE HAVEN'T MADE A PROFIT AS WE EXPECTED\n");
return 0;//end of main function
}
