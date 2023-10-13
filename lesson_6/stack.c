#include "stdint.h"
#include "stdio.h"

#define CAPACITY 5

struct Stack {
  int data[CAPACITY];
  size_t idx;
};

int main() {
  struct Stack stack;

  // 0 - push
  // 1 - print + pop
  // 2 - end

  stack.idx = 0;
  int cmd = 0;
  scanf("%d", &cmd);

  while (cmd != 2) {
    if (cmd == 0) {
      int num = 0;
      scanf("%d", &num);
      
      if (stack.idx < CAPACITY) {
        stack.data[stack.idx] = num;
        ++stack.idx;
      } else {
        return 1;
      }
    } else if (cmd == 1) {
      if (stack.idx > 0) {
        int num = stack.data[stack.idx - 1];
        printf("%d\n", num);
        --stack.idx;
      } else {
        return 2;
      }
    } else {
      return 100; // wtf ??
    }

    scanf("%d", &cmd);
  }

  return 0;
}

