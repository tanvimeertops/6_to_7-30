/*string group of character (character of array)
characteristic
1. it always ends with the null pointer
2. it works with the ascii value.
3. it is stored in buffer
input types:
1.scanf("%s",&str);
2.gets()
3.fgets(str,sizeof str,stdin)
"hello world"
char str[]="hello" 

char 1 byte
a=97

*/
#include <stdio.h>

void main()
{
    char str[10];
    fgets(str, sizeof str, stdin);
    puts(str);
}
