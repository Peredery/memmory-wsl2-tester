#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int
main(int argc, char **argv)
{
  size_t size = 4000000000;
  char *a = malloc(size);
  printf("Allocate 4GB \n");
  memset(a, 'a', size);
  printf("Sleep for next 18s \n");
  sleep(18);
  printf("Free memory 4GB \n");
  free(a);
  printf("Wait 10s before exit \n");
  sleep(10);
  printf("Exiting...\n");
  return 0;
}
