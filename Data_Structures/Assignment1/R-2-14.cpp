#include <iostream>

using namespace std;

class Object
{
public:
    virtual void printMe() = 0;
};
class Place : public Object
{
public:
    virtual void printMe() { cout << "Buy it" << endl; }
};
class Region : public Place
{
public:
    virtual void printMe() { cout << "Box it" << endl; }
};
class State : public Region
{
public:
    virtual void printMe() { cout << "Ship it" << endl; }
};
class Maryland : public State
{
public:
    virtual void printMe() { cout << "Read it" << endl; }
};

int main()
{
    Region *mid = new State;
    State *md = new Maryland;
    Object *obj = new Place;
    Place *usa = new Region;
    md->printMe();
    mid->printMe();
    (dynamic_cast<Place *>(obj))->printMe();
    obj = md;
    // obj->printMe();
    (dynamic_cast<Maryland *>(obj))->printMe();
    obj = usa;
    // obj->printMe();
    (dynamic_cast<Place *>(obj))->printMe();
    usa = mid;
    // usa->printMe();
    (dynamic_cast<Place *>(usa))->printMe();
    return EXIT_SUCCESS;
}