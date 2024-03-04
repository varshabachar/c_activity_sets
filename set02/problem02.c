#include<stdio.h>
int input_side();
int check_scalene(int a, int b,int c);
void output(int a, int b, int c, int isscalene);
int main()
{
    int s1, s2, s3;
    printf("enter the sides of the triangle:\n");
    s1 = input_side();
    s2 = input_side();
    s3 = input_side();
    int isscalene = check_scalene(s1,s2,s3);
    output(s1,s2,s3,isscalene);
    return 0;
}

