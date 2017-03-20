#include <vector>
#include <stdexcept>
#include <cmath>

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
    void set_direction(std::vector<double> unit_v) {direction_ = unit_v;}
    void set_magnitude(double size) {magnitude_ = size;}

    // member functions:
    Force operator+(Force, Force);
    std::vector<double> to_vector();



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


// returns the euclidean norm of a vector
template <typename T1>
double norm(std::vector<T1> vector1)
{
    double temp = 0;

    for(T1 x: vector1) temp+= x*x;

    return std::sqrt(temp);
}




















