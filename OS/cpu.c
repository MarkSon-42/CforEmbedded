//
// Created by Mac Apple on 24. 7. 1.
//

#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <assert.h>
#include "common.h"

int main(int argc, char *argv[]) {
  if (argc != 2) {
    fprintf(stderr, "usage: cpu <string>\n");
    exit(1);
  }
  char *str = argv[1];
  while (1) {
    Spin(1);
    printf("%s\n", str);
  }
  return 0;
}
