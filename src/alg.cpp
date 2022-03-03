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
  uint64_t fac = 1;
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
  double sinx = x;
  double g = 0;
  for (int m = 2; m <= count; m++) {
    if (m%2 != 0) {
      sinx -= calcItem(x, m);
      g += m+1;
      break;
    }
  }
  for (int o = g; o <= count; o++) {
    if (o%2 != 0) {
      sinx += calcItem(x, o);
    }
  }
  return sinx;
}

double cosn(double x, uint16_t count) {
  double cosx = 1;
  double d = 0;
  for (int k = 2; k <= count; k++) {
    if (k%2 == 0) {
      cosx -= calcItem(x, k);
      d = k+1;
      break;
    }
  }
  for (int a = d; a <= count; a++) {
    if (a%2 == 0) {
      cosx += calcItem(x, a);
    }
  }
  return cosx;
}
