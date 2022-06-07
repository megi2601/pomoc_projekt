#ifndef PLOTTER_H
#define PLOTTER_H
//
// Klasa do rysowania położeń kul z klasy Ball przy użyciu
// biblioteki matplotlib z języka Python
// W celu użycia klasy Plotter konieczne jest sciągnięcie z Kampusa
// pliku matplotlibcpp.h
// i umieszczenie go w tym katalogu w którym znajduje się program
//
// Kompilacja w OKWF:
// g++ *.cpp -I/usr/include/python3.6m -lpython3.6m
//
// 
// Opisy metod klasy w pliku Plotter.cpp
//

#include<vector>
#include "Ball.h"

using namespace std;

class Plotter{

 public:

  Plotter() = default;

  void clean();
  
  void plotBalls2D( vector<Ball> & objects, unsigned int timeStep);
  void plotBall(Ball & b, bool write_single_plot);
  
  void makeAnimation() const;

};


#endif