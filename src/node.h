#include "member.h"
#include "Force.h"

// ideas:
/*
 * Easy method of sections option:
 * used a n-tree structure where there is a data component and a dynamic amount of pointers to nodes
 *  start at the pin joint, continue on via method of joints, solving the truss joints
 */

// nodes of a truss
class node
{
public:
    // constructors
    node(std::vector<double>);

    // setters

    // getters

    // member functions

    // imperatives
        /*
         * cannot have 2 nodes in the same spot
         *
         */



private:

    std::size_t n_members_;
    // should I preallocate memory for the proper size of just use push_back
    std::vector<double> location_;
    std::vector<member::member*> members_;
    std::vector<Force> external_loads_;


};





