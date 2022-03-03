// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"
#include "math.h"

double pown(double value, uint16_t n) {
  if (n == 0) {
    return 1;
  } else if (n == 1) {
    return value;
  } else {
    return pow(value, n);
  }
}

uint64_t fact(uint16_t n) {
  double fac = 1;
  if (n > 1) {
    for (int i = 1; i <= n; i++)
      fac *= i;
    return fac;
  } else {
    return 1;
  }
}

double calcItem(double x, uint16_t n) {
  return pow(x, n)/fact(n);
}

double expn(double x, uint16_t count) {
  double e = 1;
  for (int j = 1; j <= count; j++) {
    e+=calcItem(x, j);
  }
  return e;
}

double sinn(double x, uint16_t count) {
  double sinx = 0;
  for (int u = count; u > 0; u--) {
    sinx += pow((-1), u-1)*(pow(x, 2*u-1)/fact(2*u-1));
  }
  return sinx;
}

double cosn(double x, uint16_t count) {
  double cosx = 0;
  for (int j = count; j > 0; j--) {
    cosx += pown((-1), j-1)*(pown(x, 2*j-2)/fact(2*j-2));
  }
return cosx;
}
