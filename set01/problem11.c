#include<stdio.h>
struct complex 
{
    float real;
    float imaginary;
};
typedef struct complex complex;
complex input_complex();
complex add_complex(complex a, complex b);
void output(complex a, complex b, complex sum);
 
 int main()
 {
    complex a=input_complex();
    complex b=input_complex();
    complex sum=add_complex(a,b);
    output(a,b,sum);
    return 0;
 }
 complex input_complex()
 {
 complex c;
 printf("enter the real and imaginary part");
 scanf("%f%f",&c.real,&c.imaginary);
 return c;
 }
 complex add_complex(complex a,complex b)
 {
    complex sum;
    sum.real=a.real+b.real;
    sum.imaginary=a.imaginary+b.imaginary;
    return sum;
 }
 void output(complex a, complex b, complex sum)
 {
    printf("the sum of(%0.2f+%0.2fi)+(%0.2f+%0.2fi)=%0.2f+%0.2fi",a.real,a.imaginary,b.imaginary,sum.real,sum.imaginary);
 }