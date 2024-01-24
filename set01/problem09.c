#include<stdio.h>
float input();
float square_root(float n);
void output(float n, float sqrroot);
int main(){
    float n, result;
    n= input();
    result=square_root(n);
    output(n,result);
    return 0;
}
float input()
{
    float n;
    printf("enter a number:");
    scanf("%f", &n);
    return n;
}
float square_root(float n){
    float x =n;
    float y =1;
    float epsilon =0.000001;
    while(x-y>epsilon){
        x=(x+y)/2;
        y=n/x;
    }
    return x;
}
void output(float n, float sqrroot){
    printf("square root of %.2f =%.6f\n",n,sqrroot);
}