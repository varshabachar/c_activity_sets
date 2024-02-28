#include<stdio.h>
struct complex_number
{
    float real,imaginary;
};
typedef struct complex_number complex;

int get_n();
complex input_complex();
void input_n_complex(int n, complex c[n]);
complex add(complex a, complex b);
complex add_n_complex(int n, complex c[n]);
void output(int n,complex c[n],complex result);

int main()
{
    int n =get_n();
    complex complex_numbers[n];
    input_n_complex(n,complex_numbers);
    complex sum = add_n_complex(n,complex_numbers);
    output(n, complex_numbers,sum);
    return 0;
}
int get_n()
{
    int n;
    printf("enter the number of complex numbers:");
    scanf("%d",&n);
    return n;
}
complex input_complex()
{
complex c;
printf("enter the real part:");
scanf("%f",&c.real);
printf("enter the imaginary part:");
scanf("%f",&c.imaginary);
return c;
}
    void input_n_complex(int n,complex c[n])
{
for(int i=0;i<n;i++)
{
    printf("enter complex number %d:\n",i+1);
    c[i]=input_complex();
}
}
complex add(complex a,complex b)
{
    complex result;
    result.real = a.real+b.real;
    result.imaginary=a.imaginary + b.imaginary;
    return result;
}
complex add_n_complex(int n, complex c[n])
{
    complex sum;
    for(int i=0;i<n;i++)
{
    sum =add(sum,c[i]);
}
return sum;
}
    void output(int n,complex c[n],complex result )
{
    printf("complex numbers:\n");
    for (int i=0;i<n;i++)
    {
        printf("sum of the %D complex number:%.3f + %.3fi\n,n,result.real,result.imaginary");
    }
}