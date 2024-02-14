#include <iostream>
using namespace std;

class Vehicle {
private:
    std::string model;
    double speed;

public:
    Vehicle(const std::string& model, double speed) : model(model), speed(speed) {}

    void setModel(const string& model) {
        this->model = model;
    }

    void setSpeed(double speed) {
        this->speed = speed;
    }

    std::string getModel() const {
        return model;
    }

    double getSpeed() const {
        return speed;
    }

    virtual double timeForDistance(double distance) const = 0;
};

class Car : public Vehicle {
public:
    Car(const std::string& model, double speed) : Vehicle(model, speed) {}

    double timeForDistance(double distance) const override {
        return distance / speed;
    }
};

class Bike : public Vehicle {
public:
    Bike(const std::string& model, double speed) : Vehicle(model, speed) {}

    double timeForDistance(double distance) const override {
        return distance / (speed * 1.5);
    }
};

int main() {
    Car car("Toyota", 100);
    Bike bike("Giant", 20);

    double distance = 100;

    cout << "CARS TIME :- " << car.timeForDistance(distance) << " seconds" << std::endl;
    cout << "BIKES TIME :- " << bike.timeForDistance(distance) << " seconds" << std::endl;

    return 0;
}
