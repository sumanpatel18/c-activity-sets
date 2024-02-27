///Write a program find whether a number is a composite number
// A Composite number has more than 2 factors.
#include<stdio.h>
int input_number();
int is_composite(int n);
void output(int n, int result);
int main()
{
int num = input_number();
int result = is_composite(num);
output(num, result);
return 0;
}
int input_number()
{
    int n;
    printf("enter the composite number\n");
    scanf("%d",&n);
    return n;
}
int is_composite(int n)
{
    int factors =0;
    for(int i=1; i<=n; i++){
        if(n % i == 0)
        {
            factors++;
        }
    }
    return (factors>2);
}
void output(int n, int result)
{
    if(result)
    {
        printf("%d is a composite number",n);
    }
    else 
    {
        printf("%d is not a composite number",n);
    }
    }