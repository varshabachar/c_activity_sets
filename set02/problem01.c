#include<stdio.h>
int input_side();
void input(float *height,float *base);
void find_area(float base,float height,float *area);
int main()
{
    float height,area,base;
    input(&base,&height);
    find_area(base,height,&area);
    output(base,height,area);
    return 0;

}
void input (float *height,float *base)
{
printf("enter the base of tirangle\n");
scanf("%f",base);
printf("enetr the height of triangle\n");
scanf("%f",height);
} 
void find_area(float base,float height,float*area)
{
    *area=0.5*base*height;
}
void output(float base,float height,float area)
{
    printf("base:%f\n",base);
    printf("height:%f\n",height);
    printf("area:%F\n",area);
}