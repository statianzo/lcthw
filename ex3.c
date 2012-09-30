#include <stdio.h>

int main()
{
  int age = 10;
  int height = 72;
  char letter = 'B';
  float percent = 95.5555;

  printf("I am %d years old.\n", age);
  printf("I am %d inches tall.\n", height);
  printf("My name is %s\n", "bob");
  printf("My favorite letter is %c\n", letter);
  printf("I am %.2f%% in favor\n", percent);
  printf("Show the decimal point %#.0f\n", 50.0f);

  return 0;
}
