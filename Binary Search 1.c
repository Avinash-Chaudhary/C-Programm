//Binary Search Algorithm
#include <stdio.h>

int main()
{
	int number[9]={10,20,30,40,50,60,70,80,90};
	int Flag=0, n=9, i;
	int Target, low, mid , high;
	
	printf("Enter the element to be searched: ");
	scanf("%d",&Target);
		
	low=0;
	high=n-1;
		
	while(low<=high)
	{
		mid=(low+high)/2;
		printf("\nmid=%d",mid);
		if (number[mid]==Target)
		{
			Flag=1;
			break;
		}
		else
		{
			if (Target<number[mid])
			{
				high=mid-1;
			}
			else
			{
				low=mid+1;
			}
		}
	}
	if (Flag==1)
	{
		printf("\nData found at index: %d",mid);
	}
	else
	{
		printf("\nData not found");
	}
	return 0;
}



