// #include "Ball.h"
// //#include "Plotter.h"
// #include<iostream>
// using namespace std;

// int main(){
//     Ball b(2., 3., {1., 2., 2.}, {3., 3., 3.});
//     std::cout<<b;
//     b.set_m(4.5);
//     std::cout<<b;
// }

#include "Plotter.h"
#include<iostream>
using namespace std;
int main(){
Ball b1(0.8,0.025,{0.1,0.9,0.1},{0.,0.,0.});
Ball b2(0.8,0.05,{-0.8,0.9,-0.8,},{0.,0.,0.});
Ball b3(0.8,0.07,{0.1,0.8,-0.8,},{0.,0.,0.});
Ball b4(0.8,0.09,{-0.8,0.7,-0.1},{0.,0.,0.});

//b.print();
//cout << b << endl;
Plotter p;
std::vector<Ball> bb = {b1, b2, b3, b4};
p.plotBalls2D(bb,0);
for(int i=1; i<10; i++){
    for(Ball& b:bb){
        b.update(0.2);
    }
    p.plotBalls2D(bb, i);
}
p.makeAnimation();
return 0;
}
