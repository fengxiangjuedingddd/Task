#include <iostream>
using namespace std;
class Geometry {
public:
    virtual float getVolume() = 0; virtual float getArea() = 0; virtual ~Geometry() {}
};
class Square : public Geometry {
    float side;
public:
    Square(float s) : side(s) {}
    float getVolume() override { return side * side * side; }
    float getArea() override { return 6 * side * side; }
};
class Sphere : public Geometry {
    float radius;
public:
    Sphere(float r) : radius(r) {}
    float getVolume() override { return 4.0/3.0 * 3.14159 * radius * radius * radius; }
    float getArea() override { return 4 * 3.14159 * radius * radius; }
};
int main() {
    Square sq(2.0); Sphere sp(3.0);
    cout << "Square Volume: " << sq.getVolume() << ", Area: " << sq.getArea() << endl;
    cout << "Square Volume: " << sp.getVolume() << ", Area: " << sp.getArea() << endl;
    return 0;
}