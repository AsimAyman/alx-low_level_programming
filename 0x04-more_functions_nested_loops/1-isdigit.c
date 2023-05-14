#include <ctype.h>
/**
 * _isdigit: check if the c it digit or not
 *@c:is a value to be chacked 
 *Returns: 1 if it is  digit and 0 if it is not.
 */
int _isdigit(int c){
    if (isdigit(c)) return 1;
    else return 0;
}
