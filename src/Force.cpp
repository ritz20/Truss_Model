#include "Force.h"


// force constructor
Force::Force(std::vector<double> vector1, double size)
    : magnitude_(std::abs(size))
{
    if (norm(vector1) != 1) normalize(vector1);
    direction_ = vector1;
}

// sets the private variable direction_ to be some vector or norm = 1
void Force::set_direction(std::vector<double> unit_v)
{
    normalize(unit_v);
    direction_ = unit_v;
}

// represents a force as single vector
std::vector<double> Force::to_vector()
{

    std::vector<double> temp;
    for(double x : direction_) temp.push_back(magnitude_ * x);

    return temp;
}

// prints the force vector to the ostream
void Force::print()
{
    to_cout(to_vector());
}

// overloads the addition operator to add forces
Force Force::operator+(Force& f2)
{
    std::vector<double> temp = to_vector() + f2.to_vector() ;

    // creates and sets new Force to return
    Force ftr;
    ftr.set_magnitude(norm(temp));
    normalize(temp);
    ftr.set_direction(temp);

    return ftr;
}

Force Force::operator-(Force& f2) {

    std::vector<double> temp = to_vector() - f2.to_vector();

    // creates and sets new Force to return
    Force ftr;
    ftr.set_magnitude(norm(temp));
    normalize(temp);
    ftr.set_direction(temp);

    return ftr;
}








