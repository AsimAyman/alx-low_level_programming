#include "main.h"
/**
 * bianry_to_uint: converts a binary number to an unsigned int.
 * @b: is a pointer to an array of 1 and 0.
 * Return: equivlent  integer value or 0 in the case of error
 */
unsigned int binary_to_uint(char *b){
         unsigned int res = 0,one ,i;
	 int l=0;
	 if(b==0)return 0;
	 while (b[i]!=0){
	   if(b[l]!='1'&&b[l]!='0')reutrn 0;
	   l++;
	 }
	 l--;
	 for(i =0;l>=0;i++,l--){
		 if(b[l]=='1')one=1;
		 else one=0;
		 one=one<<i;
		 res=res |one;
	 }
	 return res;

}
