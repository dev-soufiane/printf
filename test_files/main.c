#include "main.h"

int main(void)
{
    int len;
    int len2;

    len = _printf("Let's try to printf a simple sentence.\n");
    printf("%d\n", len);
    len2 = printf("Let's try to printf a simple sentence.\n");
    printf("%d\n\n", len2);

    /*print string only test*/

    len = _printf("String:[%s]\n", "I am a string !");
    printf("%d\n", len);
    len2 = printf("String:[%s]\n", "I am a string !");
    printf("%d\n\n", len2);

    /*print character only test*/

    len = _printf("Character:[%c]\n", 'H');
    printf("%d\n", len);
    len2 = printf("Character:[%c]\n", 'H');
    printf("%d\n\n", len2);

    /*NULL test*/

    len = _printf("NULL: %c, %s\n", NULL, NULL);
	len2 = printf("NULL: %c, %s\n", NULL, NULL);
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);


    /*print percent sign test*/

    len = _printf("Percent:[%%]\n");
    printf("%d\n", len);
    len2 = printf("Percent:[%%]\n");
    printf("%d\n", len2);

    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");

      return (0);
}
