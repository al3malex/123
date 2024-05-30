#include <stdio.h>
#include "ft_printf.h"
#include <stdio.h>
int main(void)
{
	int count;
	int i;
    int ii;
    unsigned int j;


	i = 'e';
    ii = -1;
    j = -1;
    char s[] = "NULL";

	count = ft_printf("\n\n\n\n\n%s\\n %i", s, i);
    printf("%i\n", count);
	count = printf("\n\n\n\n\n%s\\n %i", s, i);
    printf("%i\n", count);
    count = ft_printf("%c %s %p %d %i %u %x %X %%", i, s, &s, ii, ii, j, ii, ii);
    printf("%i\n", count);
    count = printf("%c %s %p %d %i %u %x %X %%", i, s, &s, ii, ii, j, ii, ii);
    printf("%i\n", count);

}