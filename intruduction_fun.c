#include<stdio.h>
void sumOfTwoNumbers(int a, int b){
     int sum ;
    sum = a + b;
    printf("sum = %d\n",sum);
}
int main (){
    int a, b;
    scanf("%d %d",&a,&b);
   sumOfTwoNumbers(5, 10);
    return 0;
}