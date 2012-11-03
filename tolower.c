#include <stdio.h>

int main(int argc, char *argv[])
{
  if (argc != 2) {
    printf("Usage: tolower word\n");
    return 1;
  }

  for(int i = 0; argv[1][i] != '\0'; i++) {
    char letter = argv[1][i];
    if (letter <= 'Z' && letter >= 'A') {
      argv[1][i] = letter + 32;
    }
  }
  printf("%s\n", argv[1]);

  return 0;
}
