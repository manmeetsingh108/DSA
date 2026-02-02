#include<stdio.h>
#include<math.h>
int convertBinaryToDecimal(int binaryNum){
    int dec = 0, base = 1;
    while(binaryNum != 0){
        int rem = binaryNum % 10;
        dec += rem * base;
        base *= 2;
        binaryNum /= 10;
    }
    return dec;
}

int convertDecimalToOctal(int decNum){
    int place = 1, octal = 0;
    while(decNum != 0){
        int rem = decNum%8;
        octal += rem * place;
        decNum /= 8;
        place *= 10;
    }
    return octal;
}
 
int main(){
    int num;
    printf("Enter Binary Number : ");
    scanf("%d", &num);
    int dec = convertBinaryToDecimal(num);
    int octal = convertDecimalToOctal(dec);
    printf("Octal of %d is %d",num,octal);
}
