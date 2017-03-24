#include "Force.h"
// ideas:
/*
 * Easy method of sections option:
 * used a n-tree structure where there is a data component and a dynamic amount of pointers to nodes
 *  start at the pin joint, continue on via method of joints, solving the truss joints
 *
 *  a member is a class that contains pointers to nodes
 *
 */

// nodes of a truss
class node
{
public:
    // constructors
    node(std::vector<double>);
    node(std::vector<double>, std::vector<Force>);

    // setters

    // getters

    // member functions

    // imperatives
        /*
         * cannot have 2 nodes in the same spot
         *
         */



private:

    std::vector<double> location_;
    std::vector<Force> external_loads_;

};





