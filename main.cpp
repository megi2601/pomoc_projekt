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
Ball b(1.,0.025,{0.1,0.1,0.1},{0.5,0.4,0.2});
//b.print();
cout << b << endl;
Plotter p;
p.plotBall(b,true);
return 0;
}
