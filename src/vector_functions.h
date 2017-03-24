#include <vector>
#include <cmath>
#include <stdexcept>
#include <iostream>


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
        std::cout << "<>";
        return;
    }

    std::cout << '<';

    if (vector1.size() != 1){
        for(int x = 0; x < vector1.size() - 1; ++x) std::cout << vector1[x] << ", ";
    }

    std::cout << vector1[vector1.back()] << '>' << '\n';
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

// for doubles only:
template <typename T1>
std::vector<T1> operator* (std::vector<T1>& vector1, const T1& scaler)
{
    for (T1& x: vector1) x *= scaler;
    return vector1;
}

template <typename T1>
std::vector<T1> operator/ (std::vector<T1>& vector1, const T1& scaler)
{
    if (scaler == 0) throw std::overflow_error("Division by Zero");

    for (T1& x: vector1) x /= scaler;
    return vector1;
}

// overloading the print operator to print vectors
template <typename T1>
std::ostream& operator<< (std::ostream& os, const std::vector<T1>& vector1)
{
    if (vector1.empty()) {
        std::cout << "<>";
        return os;
    }

    std::cout << '<';

    if (vector1.size() != 1){
        for(int x = 0; x < vector1.size() - 1; ++x) std::cout << vector1[x] << ", ";
    }

    std::cout << vector1[vector1.back()] << '>';

    return os;
}
