/*Nikitenko Timur st128375@student.spbu.ru
*/
#ifndef ADVANTAGE
#define ADVANTAGE
#include<string>
#include<iostream>

//composition
class Advantage
{

private:
    int _power;

public:
    Advantage(const int &power);
    ~Advantage();

    void setPower(const int &power);
    int getPower() const;
};

std::ostream& operator<<(std::ostream& os, const Advantage& item);

#endif
