#include <stdio.h>

int main(int argc, char *argv[])
{
  int i;

  int num_states = 4;
  char *states[] = {
    "California", "Oregon", "Washington", "Texas"
  };

  argv[1] = states[1];

  for(i = 1; i < argc; i++) {
    printf("arg %d: %s\n", i, argv[i]);
  }

  for(i = 0; i < num_states; i++) {
    printf("state %d: %s\n", i, states[i]);
  }

  return 0;
}
