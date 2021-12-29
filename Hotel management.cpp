#include<stdio.h>
main()
{
	printf("Pick an item : \n1. Pizza\n2. Pasta\n3. Burger\n4. French Fries\n5. Cold coffee");
	
	int choice=0;
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("Food Item : Pizza.");
		    printf("Prize : 250 ");
			break;
		case 2:
			printf("Food item : Pasta.");
			printf("Prize : 100");
			break;
		case 3:
			printf("Food item : Burger.");
			printf("Prize : 150");
			break;
		case 4:
			printf("Food item : French Fries.");
			printf("Prize : 75");
			break;
		case 5:
			printf("Food item : Cold Coffee.");
			printf("Prize : 50");
			break;
		default : printf("Invalid Choice");
	}

}
