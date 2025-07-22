#include <unistd.h>
void    ft_ultimate_div_mod(int *a, int *b);
void    write_int(int n)
{
    char buf[10];
    int i;
    if (n == 0) { write(1, "0", 1); return; }
    if (n < 0) { write(1, "-", 1); n = -n; }
    i = 0;
    while (n > 0) { buf[i++] = '0' + (n % 10); n /= 10; }
    while (i--) write(1, &buf[i], 1);
}
int     main(void)
{
    int m = 47, n = 9; // Test various cases
    ft_ultimate_div_mod(&m, &n);
    write_int(m);
    write(1, "\n", 1);
    write_int(n);
    write(1, "\n", 1);
    return (0);
}
