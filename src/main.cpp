#include "Force.h"



int main()
{
    std::vector<double> v {-2.4, -0};
    Force f (v, -4);
    std::cout << f.magnitude() << f.direction() << f.force() << '\n';
    f.print();
    // to_cout(f.direction());

    std::vector<double> v1 {3,4};
    Force f1(v1, 5);
    std::cout << f1.magnitude() << f1.direction() << '\n';
//    f1.set_magnitude(5);
//    f1.set_direction({3, 4});
    f1.print();
    // to_cout(f1.direction());

    Force f2({5, 12}, 13);
    f2.print();

    Force f3 = f1 + f2;
    f3.print();
    // to_cout(f3.direction());
    std::cout << norm(f3.direction()) << ' ' << f3.magnitude() << f3.direction() <<'\n';

    Force f4 = f1 + f2 - f3;
    f4.print();
    std::cout << norm(f4.direction()) << ' ' << f4.magnitude() << '\n';
    std::cout << f4.direction() << '\n';

    // to_cout(f1.to_vector() + f2.to_vector() - f3.to_vector());

    std::vector<Force> loads {Force({2,3},2), Force({2,3},4), Force({4,5},5)};
    // std::cout << loads;


    return 0;
}



