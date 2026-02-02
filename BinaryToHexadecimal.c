#include<stdio.h>
#include<string.h>
#include<stdlib.h>
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

char* convertDecimalToHexadecimal(int decNum){
    int n;
    char *hexa = (char*)calloc(100, 1);
    while(decNum != 0)
    { 
        int rem = decNum % 16;
        char str[2];
        if(rem >= 0 && rem <= 9){
            sprintf(str, "%d", rem);
        }
        else if(rem == 10)
            str[0] = 'A';
        else if(rem == 11)
            str[0] = 'B';
        else if(rem == 12)
            str[0] = 'C';
        else if(rem == 13)
            str[0] = 'D';  
        else if(rem == 14)
            str[0] = 'E'; 
        else
            str[0] = 'F';
        str[1] = '\0';
        strcat(hexa, str);
        decNum /= 16;
    } 
    strrev(hexa);
    return hexa;
}

int main(){
    int num;
    printf("Enter Binary Number : ");
    scanf("%d", &num);
    int dec = convertBinaryToDecimal(num);
    char *str = convertDecimalToHexadecimal(dec);
    printf("Hexadecimal of %d is %s",num,str);
    return 0;
}
