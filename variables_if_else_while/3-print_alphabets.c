#include <stdio.h>
/**
 * main - entry point
 *
 * retun - 0 (sucess)
 *
 */

int main(void)
{
char abc;
char ABC;

for (abc = 'a'; abc <= 'z'; abc++)
{
putchar(abc);
}
for (ABC = 'A'; ABC <= 'Z'; ABC++)
{
putchar(ABC);
}
putchar('\n');
return 0;

}
