unsigned int binary_to_uint(const char *b){
unsigned int res = 0, currentBit;
int l = 0;
   
if(b==0)return 0;
while (b[l]!=0)
{
if (b[l] != '1' && b[l] != '0') return 0;
l++;
}
l--;
for (int i=0;l>=0;i++,l--){
if (b[i] == '1') currentBit=1;
else currentBit = 0;
currentBit = currentBit << l;
 res +=currentBit;
}
return res;
}
