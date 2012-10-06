#include <stdio.h>

int main(int argc, const char *argv[])
{
  int bugs = 100;
  double bug_rate = 1.2;

  printf("You have %d bugs at the rate of %f.\n", bugs, bug_rate);

  unsigned long universe_of_defects = 10000000000000000024UL;
  printf("The universe has %lu bugs.\n", universe_of_defects);

  double expected_bugs = bugs * bug_rate;
  printf("You are expected to have %f bugs.\n", expected_bugs);

  double part_of_the_universe = expected_bugs / universe_of_defects;
  printf("That is only a %e portion of the universe.\n", part_of_the_universe);

  char nul_byte = '\0';
  int care_percentage = bugs * nul_byte;

  printf("Which means you should care %d%%.\n", care_percentage);

  printf("%c\n", nul_byte);
  return 0;
}
