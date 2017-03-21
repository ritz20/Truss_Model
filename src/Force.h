#include <stdexcept>
#include <cmath>
#include <iostream>
#include "vector_functions.h"

class Force
{
public:

    // constructors:
    Force() : magnitude_(0), direction_(){}
    Force(std::vector<double>, double);

    // getters:
    const std::vector<double> direction() {return direction_;}
    const double magnitude() {return magnitude_;}

    // setters:
    void set_direction(std::vector<double>);
    void set_magnitude(double size)  {magnitude_ = size;}

    // member functions:
    Force operator+(Force&);
    Force operator-(Force&);
    std::vector<double> to_vector();
    void print();


    // imperatives:
    /*
     * 1) direction must have norm == 1
     * 2) magnitude must be positive
     * 3) location must be a node location
     */

private:

    std::vector<double> direction_;
    double magnitude_;

};
















