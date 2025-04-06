#ifndef TEMPLATES_H
#define TEMPLATES_H

#include <vector>
#include "classes.h" 

// General template
template <typename T1, typename T2>
class Transformer {
private:
    int number;
    std::vector<float> vec;
    T1 instance;
public:
    Transformer(int num, const std::vector<float>& v, const T1& obj)
        : number(num), vec(v), instance(obj) {}
    bool foo() { return instance.bar(number, vec); }
};

// Partial specializations
template <typename T>
class Transformer<int, T> {
private:
    int number;
    std::vector<float> vec;
public:
    Transformer(int num, const std::vector<float>& v, const T& obj)
        : number(num), vec(v) {}
    bool foo() { return true; }
};

template <typename T>
class Transformer<double, T> {
private:
    int number;
    std::vector<float> vec;
public:
    Transformer(int num, const std::vector<float>& v, const T& obj)
        : number(num), vec(v) {}
    bool foo() { return false; }
};

#endif


