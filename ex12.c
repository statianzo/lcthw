#include <stdio.h>

int main(int argc, const char *argv[])
{
  int i = 0;

  if (argc == 1) {
    printf("Usage: ./ex12 a [b]\n");
  } else if (argc > 1 && argc < 4) {
    printf("Your args:\n");

    for(i = 1; i < argc; i++) {
      printf("%s ", argv[i]);
    }
    printf("\n");
  } else {
    printf("Too many args. Fail.\n");
  }
  return 0;
}
