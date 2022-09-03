// Fransiskus Agapa

#include "Dog.h"
#include "sstream"

using std::stringstream;

// default constructor
Dog::Dog()
{
    _type = "NoType";
    _age = -1;
    _origin = "NoOrigin";
    _price = 0.0;
}

// constructor
Dog::Dog(const string &type, const int &age, const string &origin, const double &price)
{
    _type = type;
    _age = age;
    _origin = origin;
    _price = price;
}

string Dog::GetType() const
{
    return _type;
}

int Dog::GetAge() const
{
    return _age;
}

string Dog::GetOrigin() const
{
    return _origin;
}

double Dog::GetPrice() const
{
    return _price;
}

string Dog::lineJson() const
{
    stringstream asjson;
    asjson << "{\"Type\":\"" << _type << "\", \"Age\":" << _age << ", \"Origin\":\"" << _origin << "\", \"Price\":" << _price << "}";
    return asjson.str();
}
