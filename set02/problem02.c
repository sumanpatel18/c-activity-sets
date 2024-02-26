#include<stdio.h>
int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);
int main(){
    int side1, side2, side3;
    side1=input_side();
    side2=input_side();
    side3=input_side();
    int is_scalene=check_scalene(side1, side2, side3);
    output(side1, side2, side3, is_scalene);
    return 0;
}
int input_side(){
    int side;
    printf("Enter side length:");
    scanf("%d", &side);
    return side;
}
int check_scalene(int a, int b, int c) {
    if(a!= b && b!= c && a !=c)
    return 1;
    else
    return 0;
}
void output(int a, int b, int c, int isscalene){
    if (isscalene)
    printf("The triangle with sides %d,%d,%d is scalene.\n",a,b,c);
    else
    printf("The triangle with sides %d,%d,%d is not scalene.\n",a,b,c);
}