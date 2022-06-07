// OKWF
// Polecenie do kompilacji:
//g++ pierwszy_okwf.cpp -I/usr/include/python3.6m -lpython3.6m
#include<iostream>
#include<cstdlib>
#include<vector>

#include "matplotlibcpp.h"

namespace plt = matplotlibcpp;

int main() {

  // Ta linijka konieczna w przypadku zdalnego laczenia sie
  // z okwf 
  plt::backend("Agg");
  
  std::vector<double> x = {1, 2, 3, 4};
  std::vector<double> y = {1, 4, 9, 16};
  plt::scatter(x,y,'o');
  plt::title("$x^{2}$");
  plt::xlabel("x");
  plt::ylabel("y");
  plt::save("pierwszy.png");
}