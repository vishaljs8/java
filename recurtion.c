#include<stdio.h>
int  fact(int n)
{
    
    if(n==0)
    return 1;
else{
  return n*fact(n-1);
  }

} int main()

{
int num;
    printf("enter the value of number: ");
    scanf("%d",&num);
    
     printf(" %d", fact(num));
    return 0;
    
}