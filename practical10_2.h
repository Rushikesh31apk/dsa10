#include<stdio.h>
#include<stdlib.h>
#define n 5
int deque[n];
int f=-1;
int r=-1;
void enqueuefront(int x)
{
	if(f==0 && r==n-1 || f==r+1)
	{
		printf("dequeue is full\n");
	}
	else if(f== -1 && r==-1)
	{
		f=r=0;
		deque[f]=x;
	}
	else if(f ==0)
	{
		f=n-1;
		deque[f]=x;
	}
	else
	{
		f--;
		deque[f]=x;
	}
}
void enqueuerear(int x)
{
	if(f==0 && r==n-1 || f==r+1)
	{
		printf("dequeue is full\n");	
	}
	else if(f==-1 && r==-1)
	{
		f=r=0;
		deque[r]=x;
	}
	else if(r==n-1)
	{
		r=0;
		deque[r]=x;
	}
	else
	{
		r++;
		deque[r]=x;
	}	
}
void display()
{
	if( f==-1 && r==-1)
	{
		printf("dequue is empty");
	}
	else
	{
		int i=f;
		do
		{
			printf("%d ",deque[i]);
			i=(i+1)%n;
		}while(i != r);
	}
}
void getfront()
{
	if(f==-1 && r==-1)
	{
		printf("dequeue is empty:\n");
	}
	else
	{
		printf("%d \n",deque[f]);
	}
}
void getrear()
{
	if(f==-1 && r==-1)
	{
		printf("dequeue is empty:\n");
	}
	else
	{
		printf("%d \n",deque[r]);
	}
}
void dequeuefront()
{
	if(f==-1 && r==-1)
	{
		printf("dequeue is empty:\n");
	}
	else if(f==r)
	{
		printf("%d \n",deque[f]);
		f=r=-1;
	}
	else if(f==n-1)
	{
		printf("%d \n",deque[f]);
		f=0;
	}
	else
	{
		printf("%d \n",deque[f]);
		f++;
	}
}
void dequeuerear()
{
	if(f==-1 && r==-1)
	{
		printf("dequeue is empty:\n");
	}
	else if(f==r)
	{
		printf("%d \n",deque[r]);
		f=r=-1;
	}
	else if(r==0)
	{
		printf("%d \n",deque[r]);
		r=n-1;
	}
	else
	{
		printf("%d \n",deque[r]);
		r--;
	}
}
