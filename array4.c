/* Replace */
#include <stdio.h>
void main()
{
	int number[10];
    printf("enter upto 10 different number:");
    for(int i=1;i<=10;i++)
    {
        scanf("%d",&number[i-1]);
    }
	int find, replace, found=0;
	printf("Enter which value you want to replace:");
    scanf("%d",&find);
    printf("Enter the value you want to replace with:");
    scanf("%d",&replace);
	for(int i=0; i<10;i++) 
	{
		if(number[i]==find)
		{
			number[i]=replace;
			found=1;
		}
	}
	if(found==0)printf("Number %d NOT FOUND\n",find);
	else
		{
			printf("Updated Numbers\n");
			for(int i=0; i<10;i++)
				{
				printf("%d\n",number[i]);
			}
		}
        return 0;
}
