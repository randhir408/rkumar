#include<stdio.h>
#include<conio.h>
#include<dos.h>
main()
{
int c,p,i,e;
printf("Menu bar of item\n");
printf("1.pizza \n2.burger \n3.pasta \n4.french fries \n5.sandwich");
printf("\nenter the item see price of food");
scanf("%d",c);
switch(c)
{
case 1:
printf(" \nPizza\n per price:Rs.239");
break;
case 2:
printf("Burger\n per price:Rs.129");
break;
case 3:
printf("pasta\n per price:Rs.179");
break;
case 4:
printf("French Fries\n per price:Rs.99");
break;
case 5:
printf("Sandwich\n per price:Rs.149");
break;
default:
printf("\nEnter the valid food item");
break;
}
printf("\n press 5 key to call waiter\n");
scanf("%d",&p);
if(p==5)
{ 
    for(i=0;i<=p;i++)
    {
    sound(50);
    delay(2);
	}
}

getch();
}


