#include <stdio.h>
#include <stdlib.h>


void sum(int a,int b)
{
    int sum=a+b;
    printf("sum=%d\n",sum);


}
    int main()

{
   int x,y;
    printf("please enter any two number");
    printf("number1\n",&x);
    scanf("%d",sum);
    printf("number2\n",&y);
    scanf("%d",sum);

    sum(x,y);
}
