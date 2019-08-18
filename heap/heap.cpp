#ifndef HEAP_HEAP_CPP_
#define HEAP_HEAP_CPP_

#include "heap.h"

#include <utility>

void mr_ds::sift_up(int* v, int root, int end) {
  while (end > root) {
    int parent = (end - 1)/2;
    if (v[parent] < v[end]) std::swap(v[parent], v[end]);
    end = parent;
  }
}

void mr_ds::make_heap(int* v, int size) {
  int end = 0;
  while (end < size) {
    mr_ds::sift_up(v, 0, end);
    end++;
  }
}


#endif  // HEAP_HEAP_CPP_
