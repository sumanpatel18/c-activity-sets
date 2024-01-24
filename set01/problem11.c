#include<stdio.h>
struct _complex { float real;float imaginary;};
typedef struct _complex Complex;
Complex input_complex();
Complex add_complex(Complex a, Complex b);
void output(Complex a, Complex b, Complex sum);
int main(){
Complex num1,num2,result;
printf("enter the first complex number:\n");
num1=input_complex();
printf("enter the second complex number:\n");
num2=input_complex();
result=add_complex(num1,num2);
output(num1,num2,result);
return 0;
}
Complex input_complex() {
Complex num;
printf("real part:");
scanf("%f", &num.real);
printf("imaginary part:");
scanf("%f", &num.imaginary);
}
Complex add_complex(Complex a, Complex b){
Complex result;
result.real = a.real +b. real;
result.imaginary = a.imaginary + b.imaginary;
return result;
}
void output(Complex a, Complex b, Complex sum) {
printf("sum of complex numbers:\n");
printf("(%.0f = %.0fi)+(%.0f+%.0fi)=%.0f+%.0fi\n",a.real, a.imaginary, b.real, b.imaginary, sum.real, sum.imaginary);
}