#include<stdio.h>
#include<stdlib.h>
#include "practical10_2.h"
void main()
{
	int ch,x;
	do
	{
		printf("\n----MENU---");
		printf("\n1.enqueuefront\n2.dequeuefront\n3.getfront\n4.getrear\n5.dequeuerear\n6.enqueuerear\n7.display\n8.exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("enter ele to insert in front:\n");
				scanf("%d",&x);
				enqueuefront(x);
				break;
			case 2:
				printf("dequeue front:\n");
				dequeuefront();
				break;
			case 3:
				printf("getfront ele:\n");
				getfront();
				break;
			case 4:
				printf("getrear ele:\n");
				getrear();
				break;
			case 5:
				printf("dequeue rear:\n");
				dequeuerear();
				break;
			case 6:
				printf("enter ele to insert in rear:\n");
				scanf("%d",&x);
				enqueuerear(x);
				break;
			case 7:
				printf("show dequeue element\n");
				display();
				break;
			default:
				printf("wrong input\n");
		}
	}while(ch!=8);
}
