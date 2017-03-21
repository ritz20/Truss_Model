#include "Force.h"



int main()
{
    Force f ({-2.4, -0}, -4);
    f.print();
    to_cout(f.direction());

    Force f1({3, 4}, 5);
    f1.set_magnitude(5);
    f1.set_direction({3, 4});
    f1.print();
    to_cout(f1.direction());

    Force f2({5, 12}, 13);
    f2.print();

    Force f3 = f1 + f2;
    f3.print();
    to_cout(f3.direction());
    std::cout << norm(f3.direction()) << ' ' << f3.magnitude() <<'\n';

    Force f4 = f1 + f2 - f3;
    f4.print();
    std::cout << norm(f4.direction()) << ' ' << f4.magnitude() << '\n';
    to_cout(f4.direction());

    to_cout(f1.to_vector() + f2.to_vector() - f3.to_vector());


    return 0;
}



