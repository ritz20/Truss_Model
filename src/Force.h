#include "vector_functions.h"

class Force
{
public:

    // constructors:
    Force() : magnitude_(0), direction_(), force_(){}
    Force(std::vector<double>);
    Force(std::vector<double>, double);

    // getters:
    const std::vector<double> direction() {return direction_;}
    const double magnitude() {return magnitude_;}
    const std::vector<double> force() {return force_;}

    // setters:
    void set_direction(std::vector<double>);
    void set_magnitude(double);
    void set_force(std::vector<double>);

    // member functions:
    Force operator+(Force&);
    Force operator-(Force&);
    std::vector<double> to_vector();
    double& operator[] (unsigned int x);
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
    std::vector<double> force_;

};




// printing forces
//std::ostream& operator<< (std::ostream& os, Force f1)
//{
//    std::cout << f1.to_vector();
//    return os;
//}





//
//// printing a vector of forces
//std::ostream& operator<< (std::ostream& os, std::vector<Force> loads)
//{
//    for (Force f: loads) std::cout << f;
//    return os;
//}
//
//
//
//







