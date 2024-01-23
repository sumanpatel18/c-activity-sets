#include<stdio.h>
int input();
int add(int a, int b);
void output(int a, int b, int sum);
    int main()
    {
int a,b,result;
a=input();
b=input();
result = add(a,b);
output(a,b,result);
return 0;
}
int input(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    return 0;
}
int add(int a, int b)
{
    return a+b;
}
void output(int a,int b,int sum)
{
    printf("the sum of %d and %d is %d\n" );
}