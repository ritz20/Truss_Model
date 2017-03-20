#include "Force.h"

// members of a truss
class member
{

    // constructors
    member();


    // setters

    // getters

    // member functions

    // imperatives
    /*
     * 1) cannot have external loads
     * 2) If a Node has 3 members, 2 of which are co-linear, then the third must have 0 load
     * if no external forces are exerted on that node
     */

private:

    double length_;
    std::vector<double> size_;
    Force exersion_;

    // always assume tension
    bool tension_ = true;


};

