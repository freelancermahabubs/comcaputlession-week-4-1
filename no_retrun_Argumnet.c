#include<stdio.h>
void extractSum(int num){
    int lastDigit = num%10;
    int firstDigit = num/1000;
    int result = firstDigit + lastDigit;
    printf("%d",result);
}
int main(){
    int n;
    scanf("%d",&n);
 extractSum(n);
  
    return 0;
}