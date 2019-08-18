#include <iostream>
#include <algorithm>
#include "heap.h"


int main(int argc, char* argv[]) {
  int v[] = {6, 5, 3, 1, 8, 7 , 2, 4};
  int len = sizeof(v)/sizeof(v[0]);
  mr_ds::make_heap(v, len);

  std::for_each(v, v + len, [&v](int& i) {
    std::cout << i << " ";
  });

  return 0;
}

