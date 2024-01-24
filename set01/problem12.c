#include<stdio.h>
struct _complex { float real; float imaginary;};
typedef struct _complex Complex;
int get_n();
Complex input_complex();
void input_n_complex(int n, Complex c[n]);
Complex add(Complex a, Complex b);
Complex add_n_complex(int n, Complex c[n]);
void output(int n, Complex c[n], Complex result);
int main(){

}
int get_n(){
    int n;
    printf("enter the number of complex numbers:");
    scanf("%d",&n);
    return n;
}
Complex input_complex() {
    Complex num;
    printf("real part:");
    scanf("%f",&num.real);
    printf("imaginary part:");
    scanf("%f",&num.imaginary);
return num;
}
void input_n_complex(int n, Complex c[n]) {
    printf("enter %d complex numbers:\n",n);
    for(int i=0; i<n; i++){
        printf("complex number %d:\n", i+1);
        c[i]=input_complex();
    }
}
Complex add(Complex a, Complex b) {
Complex result;
result.real=a.real+b.real;
result.imaginary =a.imaginary+b.imaginary ;
return result;
}
Complex add_n_complex(int n, Complex c[n]) {
    Complex sum = {0, 0}; 
    for (int i = 0; i < n; i++) {
        sum = add(sum, c[i]);
    }
    return sum;
}
void output(int n, Complex c[n], Complex result){
    printf("sum of %d complex numbers:\n",n);
    for (int i=0; i<n; i++){
        printf("(%f + %Fi)", c[i].real, c[i].imaginary);
        if(i<n -1){
            printf(" +");
        }
    }
    printf(" =%f + %fi\n",result.real, result.imaginary);
}