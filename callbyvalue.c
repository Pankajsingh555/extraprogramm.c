//Swap two numbers using call by Value function.
#include<stdio.h>

void swap(int a, int b);

int main(){
    int x=10,y=20;
    printf("x=%d y=%d\n",x,y);
    swap(x,y);
    printf("after swapping :");
    printf("x=%d y=%d\n",x,y);
}
void swap(int a, int b){
    int t=a;
    a=b;
    b=t;
    printf("After swapping :");
    printf("a=%d b=%d\n",a,b);
}
