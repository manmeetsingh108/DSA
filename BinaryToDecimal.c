#include<stdio.h>
#include<math.h>
int main(){
    int n, sum=0,base=1;
    printf("Enter Number: ");
    scanf("%d",&n);
    int temp=n;
    while(temp!=0){
        int rem=temp%10;
        sum=sum + rem*base;
        base=2*base;
        temp=temp/10;
    }
    printf("Binary to Decimal of %d is %d",n,sum);
    return 0;
}

              //OR

#include<stdio.h>
#include<math.h>
int main(){
    int n, sum=0, p=0;
    printf("Enter Number: ");
    scanf("%d",&n);
    int temp=n;
    while(temp!=0){
        int rem=temp%10;
        sum=sum + rem*pow(2,p);
        p++;
        temp=temp/10;
    }
    printf("Binary to Decimal of %d is %d",n,sum);
    return 0;
}
