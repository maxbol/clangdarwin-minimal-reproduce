#include <stdlib.h>

int main() {
  int *p = malloc(sizeof(int));
  *p = 42;
  free(p);
  return 0;
}
