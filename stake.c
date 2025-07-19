#include<stdio.h>
int data[4];
int top=-1;
void push(int value) {
    if(top == 3) {
        printf("Stack Overflow\n");
    } else {
        top++;
        data[top] = value;
    }
}
void pop(){
    if(top==-1){
        printf("stake undeflow\n");
    }
    else{
        top--;
    }
}
int peep(){
    if(top== -1){
        printf("empty stake");
        return 0;
    }
    else{
        return data[top];
    }
}
int main()
{
  pop();
    printf("Top element: %d\n", peep());

    push(40);
    printf("Top element: %d\n", peep());

    pop();
    printf("Top element after pop: %d\n", peep());

}
