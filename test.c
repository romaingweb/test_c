#include <stdio.h>
#include <string.h>

int main() {
  FILE *fp = popen("ls", "r");
  char buf[1024];
  int size_cmp;
  while (fgets(buf, sizeof(buf), fp) != NULL) {
    if (strcmp(buf, "test.c\n") == 0) {
      printf("---%s", buf);
      continue;
    }
    printf("===%s", buf);
  }
  return 0;
}
