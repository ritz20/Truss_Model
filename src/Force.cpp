#include "Force.h"


// force constructor
Force::Force(std::vector<double> load)
        : force_(load)
{
    magnitude_ = norm(load);
    direction_ = load / magnitude_;
}

Force::Force(std::vector<double> vector1, double size)
    : magnitude_(std::abs(size))
{
    if (norm(vector1) == 0){
        direction_ = vector1;
        magnitude_ = 0;
        force_ = direction_;
    }

    if (norm(vector1) != 1) normalize(vector1);

    direction_ = vector1;
    force_ = direction_ * magnitude_;
}

// sets the private variable direction_ to be some vector or norm = 1
void Force::set_direction(std::vector<double> unit_v)
{
    normalize(unit_v);
    direction_ = unit_v;
    force_ = direction_ * magnitude_;
}

void Force::set_magnitude(double size)
{
    magnitude_ = size;
    force_ = direction_ * magnitude_;
}

void Force::set_force(std::vector<double> force)
{
    force_ = force;
    magnitude_ = norm(force);

    normalize(force);
    direction_ = force;
}

// represents a force as single vector
std::vector<double> Force::to_vector()
{
//    std::vector<double> temp;
//    for(double x : direction_) temp.push_back(magnitude_ * x);
    return force_;
}

// prints the force vector to the ostream
void Force::print()
{
    std::cout << force_ << '\n';
}

// allows to index a Force represented as a to_vector()
double& Force::operator[] (unsigned int x)
{
    return force_.at(x);
}

// overloads the addition operator to add forces
Force Force::operator+ (Force& f2)
{
    std::vector<double> temp = to_vector() + f2.to_vector();

    // creates and sets new Force to return
    Force ftr;
    ftr.set_magnitude(norm(temp));
    normalize(temp);
    ftr.set_direction(temp);

    return ftr;
}

Force Force::operator- (Force& f2)
{

    std::vector<double> temp = to_vector() - f2.to_vector();

    // creates and sets new Force to return
    Force ftr;
    ftr.set_magnitude(norm(temp));
    normalize(temp);
    ftr.set_direction(temp);

    return ftr;
}






