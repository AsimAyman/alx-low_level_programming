#include "main.h"
/**
 * print_binary: convertes binary to dicimal to binary.
 * @n: binary to be converted,
 * Retrun: non just print the equivalent binary 
 */
void print_binary(unsigned long int n){
    int reminder=0,divider=n,l=0;
    int *num =malloc(l*4);
    while(1){
        reminder = divider%2;
        if(reminder ==0)num[l]=0;
        else num[l]=1;
        divider /=2;
        if(!divider)break;
        l++;
    } 
    for(int i =l;i>=0;i--){
        printf("%d",num[i]);
    }
    free(num);
}
