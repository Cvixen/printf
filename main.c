#include "ft_printf.h"
#include "limits.h"
int main ()
{	
 printf("it num printf: %d\n", printf(" %u ", -1));
//printf(" %u ", -1);
ft_printf(" %u ", -1);

//ft_printf(" %p %p ", (void *)LONG_MIN, (void *)LONG_MAX);
//  return (0);
}