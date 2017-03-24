//
// Created by Ryan on 3/17/2017.
//

#include "node.h"

// constructors
node::node(std::vector<double> spot)
        : location_(spot){}

node::node(std::vector<double> spot, std::vector<Force> loads)
        : location_(spot), external_loads_(loads) {}


