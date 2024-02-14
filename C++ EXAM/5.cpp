#include <iostream>
using namespace std;
class BankAccount {
	private:
	string name;
	double balance;

	public:

		
		BankAccount(string n, double b) : name(n), balance(b) {}


	BankAccount operator+(const BankAccount& other) {
	return BankAccount(name + " & " + other.name, balance + other.balance);
	}
	

	void display() const {
	cout << "Name: " << name << ", Balance: " << balance << std::endl;
	}
};

int main() {

BankAccount account1("VIGNESH RAMANI 1  :- ", 1000);
BankAccount account2("VIGNESH RAMANI 2  :- ", 2000);


BankAccount totalAccount = account1 + account2;


std::cout << "Account 1 Details: ";
account1.display();

std::cout << "Account 2 Details: ";
account2.display();

std::cout << "Total Account Details: ";
totalAccount.display();

return 0;
}
