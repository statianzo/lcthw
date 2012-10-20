#include <stdio.h>

int main(int argc, const char *argv[])
{
  int areas[] = {10, 12, 13, 14, 20};
  char name[] = "Jason";
  char full_name[] = {
    'J', 'a', 's', 'o', 'n',
    ' ', 'A', ' ',
    'S', 't', 'a', 't', 'e', 'n', '\0'
  };


  printf("The size of an int: %ld\n", sizeof(int));
  printf("Size of areas: %ld\n", sizeof(areas));
  printf("The first %d, the second %d\n", areas[0], areas[1]);

  printf("The size of char: %ld\n", sizeof(char));
  printf("The size of name: %ld\n", sizeof(name));
  printf("The number of chars: %ld\n", sizeof(name)/sizeof(char));

  printf("The size of full_name: %ld\n", sizeof(full_name));
  printf("The number of chars: %ld\n", sizeof(full_name)/sizeof(char));

  printf("Name='%s' and full_name='%s'\n", name, full_name);
  return 0;
}
