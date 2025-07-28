#include <stdio.h>
#include <string.h>
#include <limits.h>

int ft_atoi_base(char *str, char *base);

typedef struct s_test_case {
    char *str;
    char *base;
} t_test_case;

int main() {
    t_test_case test_cases[] = {
        {"123", ""},
        {"123", "0"},
        {"123", "01234+6"},
        {"123", "0123345"},
        {"123", "0 "},
        {"123", "01-"},
        {"123", "01+"},
        {"", "0123456789"},
        {"+", "0123456789"},
        {"-", "0123456789"},
        {"   ", "0123456789"},
        {"   +42", "0123456789"},
        {"   \t\n-+--10", "01"},
        {"--+--101", "01"},
        {"1011", "01"},
        {"-1011", "01"},
        {"111000111", "01"},
        {"755", "01234567"},
        {"2147483647", "0123456789"},
        {"-2147483648", "0123456789"},
        {"1A3F", "0123456789ABCDEF"},
        {"-ABCDEF", "0123456789ABCDEF"},
        {"deadbeef", "0123456789abcdef"},
        {"DEADBEEF", "0123456789ABCDEF"},
        {"deadBEEF", "0123456789abcDEF"},
        {"123Z", "0123456789abc"},
        {"abba", "ab"},
        {"baba", "ab"},
        {"365", "0123456"},
        {"xyzzyx", "xyz"},
        {"    123", "0123456789"},
        {"123    ", "0123456789"},
        {"    -123    ", "0123456789"},
        {"    +    ", "0123456789"},
        {"    -    ", "0123456789"},
        {"123abc", "0123456789"},
        {"1011xyz", "01"},
        {"45x67", "0123456789x"},
        {"123a456", "0123456789"},
        {"!@#", "!@#$%^&*()"},
        {"12 34", "0123456789"},
        {"123", "0123 456"},
        {"AZaz09", "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789"},
        {"    --+-4rt56y a", "4367598zqrt"},
        {"abc", "0123456789"},
    };

    int num_tests = sizeof(test_cases) / sizeof(t_test_case);

    for (int i = 0; i < num_tests; i++) {
        long result = ft_atoi_base(test_cases[i].str, test_cases[i].base);
        printf("Test %d: \"%s\", base: \"%s\", result: \"%ld\"\n", i + 1, test_cases[i].str, test_cases[i].base, result);
    }

    return 0;
}
