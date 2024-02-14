#include <iostream>
class Shape {
	public:
	    virtual double calculateArea() = 0;
	    virtual void draw() = 0;
};


class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double calculateArea() {
        return M_PI * radius * radius;
    }
    void draw() {
        std::cout << "Drawing a circle with radius " << radius << std::endl;
    }
};


class Rectangle : public Shape {
private:
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double calculateArea() {
        return width * height;
