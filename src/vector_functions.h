#include <vector>
#include <cmath>


// returns the euclidean norm of a vector
template <typename T1>
double norm(std::vector<T1> vector1)
{
    double temp = 0;

    for(T1 x: vector1) temp += x*x;

    return std::sqrt(temp);
}

// divides each element of a vector by its magnitude
template <typename T1>
void normalize(std::vector<T1>& vector1)
{
    double length = norm(vector1);
    if (length == 0) return;

    for(T1& x: vector1) x /= length;
}

// a function to print vectors
template <typename T1>
void to_cout(std::vector<T1> vector1)
{
    if (vector1.empty()) {
        std::cout << "<>\n";
        return;
    }

    std::cout << '<';
    for(int x = 0; x < vector1.size(); ++x){

        if (x == vector1.size() - 1 ) {
            std::cout << vector1[x] << ">\n";
            return;
        }

        std::cout << vector1[x] << ", ";
    }
}

// overloads plus operator for element-wise vector addition
template <typename T1>
std::vector<T1> operator+ (const std::vector<T1>& vector1, const std::vector<T1>& vector2)
{
    // checks if the force vectors have the same dimensionality
    if (vector1.size() != vector2.size()) throw std::length_error("Vectors must be of same size to add");

    std::vector<T1> temp;
    for(int x = 0; x < vector1.size(); ++x) temp.push_back(vector1[x] + vector2[x]);

    return temp;
}

template <typename T1>
std::vector<T1> operator- (const std::vector<T1>& vector1, const std::vector<T1>& vector2)
{
    // checks if the force vectors have the same dimensionality
    if (vector1.size() != vector2.size()) throw std::length_error("Vectors must be of same size to add");

    std::vector<T1> temp;
    for(int x = 0; x < vector1.size(); ++x) temp.push_back(vector1[x] - vector2[x]);

    return temp;
}


