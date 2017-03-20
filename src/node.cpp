//
// Created by Ryan on 3/17/2017.
//

#include "node.h"


node::node(std::vector<double> spot)
        : location_(spot){}

node::node(std::vector<double> spot, std::vector<member> members)
        : location_(spot), members_(members){}

node::node(std::vector<double> spot, std::vector<member> members, std::vector<Force> e_loads)
        : location_(spot), members_(members), external_loads_(e_loads){}

