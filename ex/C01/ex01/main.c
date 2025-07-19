#include <unistd.h>

void ft_ultimate_ft(int **********nbr);

int main(void) {
  int a = 0;
  int *p1 = &a;
  int **p2 = &p1;
  int ***p3 = &p2;
  int ****p4 = &p3;
  int *****p5 = &p4;
  int ******p6 = &p5;
  int *******p7 = &p6;
  int ********p8 = &p7;
  int *********p9 = &p8;
  int **********p10 = &p9;

  ft_ultimate_ft(p10);
  // Output the value of a to verify it has been set to 42
  char buffer[3];
  buffer[0] = (a / 10) + '0'; // Tens place
  buffer[1] = (a % 10) + '0'; // Units place
  buffer[2] = '\0';           // Null-terminate the string
  write(1, buffer, 3);
  write(1, "\n", 1);
  return 0;
}
