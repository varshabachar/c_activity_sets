#include<stdio.h>
int input();
void compare(int a, int b,int c,int*largest);
void output(int a, int b, int c, int largest);
int main()
{
    int num1, num2, num3, largest;
    num1=input();
    num2=input();
    num3=input();
    compare(num1,num2, num3,&largest);
    output(num1,num2, num3,largest);
    return 0;
}
        int input()
    {
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    return num;
}
void compare(int a, int b, int c, int*largest)
{
    if(a>=b&& b>=c)
    {
        *largest=a;
    }
    else if (b>=a && b>=c)
    {
        *largest=b;
    }
    else
    {
        *largest=c;

    }
}
void output(int a, int b, int c, int largest)
{
    printf(" the largest of %d, %d and is %d\n, a, b, c,largest");

}