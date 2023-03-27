#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str1, *str2, *str3;
	
	str1 = "I do not fear computers. I fear the lack of them - Isaac Asimov";
	str2 = "Arrays a kind of data structure that can store a fixed-size sequential collection of elements of the same type. An array is used to store a collection of data, but it is often more useful to think of an array as a collection of variables of the same type.";
	 str3 = "";

    print_rev(str1);
    print_rev(str2);
    print_rev(str3);

    return (0);
}
