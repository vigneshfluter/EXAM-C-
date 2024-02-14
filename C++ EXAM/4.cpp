#include <iostream>
using namespace std;

class Vehicle {
		public:
		    virtual void displayDetails() = 0; 
};

class Car : public Vehicle {
	public:
	    string make, model, color;
	    int year, mileage;
	
	    Car(string make, string model, string color, int year, int mileage) {
	        this->make = make;
	        this->model = model;
	        this->color = color;
	        this->year = year;
	        this->mileage = mileage;
	    }

	    void displayDetails() {
	        cout << "Car Details: " << endl;
	        cout << "Make: " << make << endl;
	        cout << "Model: " << model << endl;
	        cout << "Color: " << color << endl;
	        cout << "Year: " << year << endl;
	        cout << "Mileage: " << mileage << endl;
	    }
};

class Truck : public Vehicle {
	public:
	    string make, model, color;
	    int year, mileage, bedSize;
	
	    Truck(string make, string model, string color, int year, int mileage, int bedSize) {
	        this->make = make;
	        this->model = model;
	        this->color = color;
	        this->year = year;
	        this->mileage = mileage;
	        this->bedSize = bedSize;
	    }
	
	    void displayDetails() {
	        cout << "Truck Details: " << endl;
	        cout << "Make: " << make << endl;
	        cout << "Model: " << model << endl;
	        cout << "Color: " << color << endl;
	        cout << "Year: " << year << endl;
	        cout << "Mileage: " << mileage << endl;
	        cout << "Bed Size: " << bedSize << endl;
	    }
};

class Motorcycle : public Vehicle {
	public:
	    string make, model, color;
	    int year, mileage, bikeType;
	
	    Motorcycle(string make, string model, string color, int year, int mileage, int bikeType) {
	        this->make = make;
	        this->model = model;
	        this->color = color;
	        this->year = year;
	        this->mileage = mileage;
	        this->bikeType = bikeType;
	    }

	    void displayDetails() {
	        cout << "Motorcycle Details: " << endl;
	        cout << "Make: " << make << endl;
	        cout << "Model: " << model << endl;
	        cout << "Color: " << color << endl;
	        cout << "Year: " << year << endl;
	        cout << "Mileage: " << mileage << endl;
	        cout << "Bike Type: " << bikeType << endl;
	    }
};
int main()
{
	Vehicle v1;
	v1.displayDeatails	
}

