#include <stdio.h>
#include "ft_printf.h"

// int main() {
//     unsigned int a = -1;
//     int b = -1;
//     printf("%x\n", a);
//     printf("%x\n", b);

//     printf("%d\n", a);
//     printf("%d\n", b);

//     printf("%u\n", a);
//     printf("%u\n", b);
//     return 0;
// }

#include <stdio.h>
int main(void)
{
	int count;
	int count2;
	int i;

	i = 'e';

    char s[] = "NULL";

	count = ft_printf("\n\n\n\n\n%s%\\n %i", s, i);
	count2 = printf("\n\n\n\n\n%s%\\n %i", s, i);
	// count2 = printf("%u\n", 4294967295);
    // count = ft_printf("hello %u, %d, %i\n", 1000000000, 245, 2452);
	// count2 = printf("hello %u, %d, %i\n", 1000000000, 245, 2452);

	printf("%i", count);
	printf("%i", count2);
}
