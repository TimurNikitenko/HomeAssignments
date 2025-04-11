/*Nikitenko Timur st128375@student.spbu.ru
  classes
*/

#ifndef CLASSES_H
#define CLASSES_H

#include <iostream>
#include <vector>

class Class1 {
public:
    bool bar(int num, const std::vector<float>& vec) {
        return num > 0;
    }
    int c_1_1() { std::cout << "c_1_1\n"; return 1; }
    float c_1_2() { std::cout << "c_1_2\n"; return 0.1f; }
    void c_1_3() { std::cout << "c_1_3\n"; }
};

class Class2 {
public:
    bool bar(int num, const std::vector<float>& vec) {
        return !vec.empty();
    }
    int c_2_1() { std::cout << "c_2_1\n"; return 2; }
    float c_2_2() { std::cout << "c_2_2\n"; return 0.2f; }
    void c_2_3() { std::cout << "c_2_3\n"; }
};

class Class3 {
public:
    bool bar(int num, const std::vector<float>& vec) {
        return num == -static_cast<int>(vec.size());
    }
    int c_3_1() { std::cout << "c_3_1\n"; return 3; }
    float c_3_2() { std::cout << "c_3_2\n"; return 0.3f; }
    void c_3_3() { std::cout << "c_3_3\n"; }
};

#endif

