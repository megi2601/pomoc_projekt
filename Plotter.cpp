#include <string>
#include <sstream>
#include <iomanip>
#include <cstdlib>

#include "matplotlibcpp.h"
#include "Plotter.h"

namespace plt = matplotlibcpp;

//////////////////////////////////////////////
// Usuwanie poprzednich rysunków
///////////////////////////////////////////////
void Plotter::clean(){
  system("cd plots; rm -f animation.gif; rm -f frame*.png");
}

///////////////////////////////////////////////////////////////////////////
// rysowanie obiektów klasy Ball umieszczonych w wektorze
// zapisywanie rysunkow do plików png
///////////////////////////////////////////////////////////////////////////
void Plotter::plotBalls2D(vector<Ball>  & objects, unsigned int timeStep){

// Ta linijka konieczna w przypadku zdalnego laczenia sie z okwf
  //plt::backend("Agg");

  plt::xlim(-1.,1.);
  plt::ylim(-1.,1.);
  plt::xlabel("x");
  plt::ylabel("y");
  for(auto it: objects){
    plotBall(it,false);
  }

  std::ostringstream ostr;
  ostr<< "plots/frame_"<< std::setfill('0') << std::setw(4) <<timeStep<<".png";
  plt::save(ostr.str());
  plt::close();
}

///////////////////////////////////////////////////////////////////////////
// rysowanie jednego obiektu klasy Ball
// zapisywanie rysunku do pliku ball.png
///////////////////////////////////////////////////////////////////////////
void Plotter::plotBall(Ball & b, bool write_single_plot){

// Ta linijka konieczna w przypadku zdalnego laczenia sie z okwf
//plt::backend("Agg");

  std::vector<double> x, y;
  x.push_back(b.get_x());
  y.push_back(b.get_y());
  plt::scatter(x,y,80);

  if(write_single_plot){

    plt::xlim(-1.,1.);
    plt::ylim(-1.,1.);
    plt::xlabel("x");
    plt::ylabel("y");

    plt::save("ball.png");
    plt::close();
  }

}

///////////////////////////////////////////////////////////////////////////
// Tworzenie animacji z plików png
///////////////////////////////////////////////////////////////////////////

void Plotter::makeAnimation() const{

  std::cout<<"Plotter: tworzenie animacji"<<std::endl;
  std::string command = "cd plots; convert -delay 0.01 frame_*.png animation.gif";
  system(command.c_str());
  std::cout<<"Zakonczone"<<std::endl;
  std::cout<<"Usuwanie plikow .png "<<std::endl;
  system("cd plots; rm -f frame*.png");

}