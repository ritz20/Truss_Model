#include "Force.h"


// force constructor
Force::Force(std::vector<double> vector1, double size)
    : magnitude_(std::abs(size))
{
    double length = norm(vector1);

    if (length != 1){
        for (double& x: vector1){
            x = x/length;
        }
    }

    direction_ = vector1;

}


// represents a force a single vector
std::vector<double> Force::to_vector() {

    std::vector<double> temp;

    for(double x : direction_) temp.push_back(magnitude_ * x);

    return temp;
}



// overloads the addition operator to add forces
Force Force::operator+(Force f2)
{
    if (direction_.empty() && f2.direction().empty()) return Force();
    // checks if the force vectors have the same dimensionality
    if (direction_.size() != f2.direction().size()) throw std::length_error("Vectors must be of same size to add");


    // adds the unit vectors
    std::vector<double> vector1;
    for(int x = 0; x < f2.direction().size(); ++x) vector1.push_back(direction_[x] + f2.direction()[x]);

    // adds the magnitudes
    double temp = std::sqrt(magnitude_*magnitude_ + f2.magnitude()*f2.magnitude());

    // creates and sets new Force to return
    Force ftr;
    ftr.set_direction(vector1);
    ftr.set_magnitude(temp);

    return ftr;
}

void Force::print()
{
    std::vector<double> to_out = to_vector();
    if (to_out.empty()) {
        std::cout << "<>\n";
        return;
    }

    std::cout << '<';
    for(int x = 0; x < to_out.size() ; ++x){

        if (x == to_out.size() - 1 ) std::cout << to_out[x] << ">\n";
        std::cout << x << ", ";
    }

}







