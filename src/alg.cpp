// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"

double pown(double value, uint16_t n) {
  if (n == 0) {
    return 1;
  } else if (n == 1) {
    return value;
  } else if (n > 1) {
    return pown(value, n);
  }
}

uint64_t fact(uint16_t n) {
  uint64_t fac=1
  if (n > 1) {
    for (int i = 1; i <= n; i++)
      fac *= i;
    return fac;
  } else {
    return 1;
  }
}

double calcItem(double x, uint16_t n) {
  return pown(x, n)/fact(n);
}

double expn(double x, uint16_t count) {
  double e = 1;
  for (int j = 1; j <= count; j++) {
    e+=calcItem(x, j);
  }
  return e;
}

double sinn(double x, uint16_t count) {
  double sinx=x;
  for (m = count; m > 0; m--) {
    if (count%2 != 0) {
      sinx -= calcItem(x, count);
    }
  }
  return sinx;
}

double cosn(double x, uint16_t count) {
  double cosx=1;
  for (k = count; k > 0; k--) {
    if (count%2 == 0) {
      cosx -= calcItem(x, count);
    }
  }
  return cosx;
}
