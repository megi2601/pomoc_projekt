#include<iostream>
#include<vector>


class Ball{
    public:
    Ball(double, double, std::vector<double>, std::vector<double>);

    void set_m(double);
    void set_r(double);
    void set_c(std::vector<double>);
    void set_v(std::vector<double>);
    double get_m();
    double get_r();
    std::vector<double> get_c();
    std::vector<double> get_v();

    double get_x();
    double get_y();
    double get_z();


    friend std::ostream& operator<< (std::ostream& stream, const Ball& b);

    private:
    double mass;
    double r;
    std::vector<double> coords;
    std::vector<double> speed;
};

