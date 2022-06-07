#include "Ball.h"

Ball::Ball(double d_mass=1.0, double d_r=0.025, std::vector<double> d_coords = {0.,0.,0.}, std::vector<double> d_speed = {0.,0.,0.}){
    mass = d_mass;
    r = d_r;
    coords = d_coords;
    speed = d_speed;
}

void Ball::set_m(double new_m){
    mass = new_m;
}

void Ball::set_r(double new_r){
    r = new_r;
}

void Ball::set_c(std::vector<double> new_coords){
    coords = new_coords;
}

void Ball::set_v(std::vector<double>new_v){
    speed = new_v;
}

double Ball::get_m(){
    return mass;
}

double Ball::get_r(){
    return r;
}

std::vector<double> Ball::get_c(){
    return coords;
}

std::vector<double> Ball::get_v(){
    return speed;
}


std::ostream& operator<< (std::ostream& stream, const Ball& b){
    stream << "***************" <<std::endl;
    stream<<"m = "<<b.mass<<std::endl;
    stream<<"r = "<<b.r<<std::endl;
    stream<<"coordinates x, y, z: "<<std::endl;
    for(double c : b.coords){
        std::cout<<c<<std::endl;
    }
    stream<<"speed (x, y, z): "<<std::endl;
    for(double s : b.speed){
        std::cout<<s<<std::endl;
    }
    stream << "***************" <<std::endl;
    return stream;
}

double Ball::get_x(){
    return coords[0];
};


double Ball::get_y(){
    return coords[1];

};

double Ball::get_z(){
    return coords[2];
};