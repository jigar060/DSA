/* Two Dimensional Arrays */
#include <stdio.h>
void main()
{
	int marks [4][3];
	for(int i=0;i<4;i++)
    {
        printf("enter 3 elements of row %d :",i+1);
        for(int j=0;j<3;j++){
            scanf("%d",&marks[i][j]);
        }
    }
	printf("%d\n",marks[0][2]); 
	printf("%d\n",marks[2][0]); 
	printf("%d\n",marks[1][0]); 
}
