// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"
#include math.h

double pown(double value, uint16_t n) {
  if (n == 0)
    return 1;
  else if (n == 1)
    return value;
  else if (n > 1)
    return pow(value, n);
}

uint64_t fact(uint16_t n) {
  fac=1
  if (n > 1) {
    for (int i = 1, i <= n; i++)
      fac *= i;
    return fac;
  }
  else
    return 1;
}

double calcItem(double x, uint16_t n) {
  return pow(x, n)/fact(n);
}

double expn(double x, uint16_t count) {
  double e = 1;
  for (int i = 1, i <= count, i++)
    e+=calcItem(x, i);
  return e;
}

double sinn(double x, uint16_t count) {
  double sinx=x;
  for (i = count, i > 0, i--){
    if (count%2 != 0) {
      sinx -= calcItem(x, count);
    }
  }
  return sinx;
}

double cosn(double x, uint16_t count) {
  double cosx=1;
  for (i = count, i > 0, i--){
    if (count%2 == 0) {
      cosx -= calcItem(x, count);
    }
  }
  return cosx;
}
