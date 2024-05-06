#include<stdio.h>
int extractSum(int num){
    int lastDigit = num%10;
    int firstDigit = num/1000;
    int result = firstDigit + lastDigit;
    return result;
}
int main(){
    int n;
    scanf("%d",&n);
    int result = extractSum(n);
     printf("%d",result);
    return 0;
}