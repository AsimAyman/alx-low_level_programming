#include <stdio.h>
#include <math.h>
#include <string.h>
#include "main.h"
unsigned int binary_to_uint(const char *b){
    int value =0,i =0,j =strlen(b)-1;
    for (i;i<strlen(b);i++){
        int currentDigit =0;
        if(b[i]=='1') currentDigit =1;
        else currentDigit =0;
        printf("%d * %d \n",currentDigit,j);
         value += currentDigit * (int)pow(2,j--);
    }
     
        return value;
}
