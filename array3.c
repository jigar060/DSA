//searching
#include<stdio.h>
int main()
{
    int number[10];

    printf("enter upto 10 integers:");

    for(int i=0;i<10;i++)
    {
        scanf("%d",&number[i]);
    }

    int search;

    printf("Enter the number you want to search for:");

    scanf("%d",&search);

    for(int i=0;i<10;i++)
    {
        if (number[i] == search)
        {
            printf("Number %d found at location %d\n", search, i);
            return 0;  
        }
    }
    printf("Number %d not found.",search);
    return 0;
}
