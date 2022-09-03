// Fransiskus Agapa

#ifndef NEWDELETEMEMBERACCESS5_DOG_H
#define NEWDELETEMEMBERACCESS5_DOG_H

#include "string"

using std::string;

class Dog
{
private:
    string _type;
    int _age;
    string _origin;
    double _price;
public:
    Dog();
    Dog(const string& type, const int& age, const string& origin, const double& price);
    string GetType() const;
    int GetAge() const;
    string GetOrigin() const;
    double GetPrice() const;
    string lineJson() const;
};


#endif //NEWDELETEMEMBERACCESS5_DOG_H
