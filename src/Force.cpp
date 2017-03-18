#include "Force.h"



// force constructor
Force::Force(std::vector<double> vector1, double size)
    : direction_(vector1), magnitude_(size) {}


// represents a force a single vector
std::vector<double> Force::to_vector() {

    std::vector<double> temp;

    for(double x : direction_) temp.push_back(magnitude_ * x);

    return temp;
}


// overloads the addition operator to add forces
Force operator+(Force f2)
{
    // checks if the force vectors have the same dimensionality
    if (direction_.size() != f2.direction().size()) throw std::length_error("Vectors must be of same size to add");


    // adds the unit vectors
    std::vector<double> vector1;
    for(int x = 0; x < f2.direction().size(); x++) vector1.push_back(this->direction()[x] + f2.direction()[x]);

    // adds the magnitudes
    double temp = std::sqrt(magnitude()*magnitude() + f2.magnitude()*f2.magnitude());

    // creates and sets new Force to return
    Force ftr;
    ftr.set_direction(vector1);
    ftr.set_magnitude(temp);

    return ftr;
}






