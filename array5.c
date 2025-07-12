/* Swapping */
#include <stdio.h>
void main()
{
	int number[10],temp;
    printf("Enter 10 numbers :");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&number[i]);
    }
	printf("\nBefore swapping\n");
	for(int i=0; i<10; i++)
    {
      printf("%d\t",number[i]);
    }
	for(int i=0; i<10; i+=2)
	{
		temp = number[i];
		number[i]=number[i+1];
		number[i+1]=temp;
	}
	printf("\nAfter swapping\n");
	for(int i=0; i<10; ++i)printf("%d\t",number[i]);
}
