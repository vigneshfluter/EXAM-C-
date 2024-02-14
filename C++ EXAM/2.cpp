#include <iostream>
using namespace std;

class BankAccount {
    private:
        int accountNumber;
        int balance;
        string ownerName;

    public:
        
        BankAccount(int accNum, string name, int initialBalance) {
            accountNumber = accNum;
            ownerName = name;
            balance = initialBalance;
        }

        
        void credit(int amount) {
            balance += amount;
            cout << "Credit successful. Current balance: " << balance << endl;
        }

        void debit(int amount) {
            if (amount <= balance) {
                balance -= amount;
                cout << "Debit successful" << endl << " Current balance: " << balance << endl;
            } else {
                cout << "not successful " << endl;
            }
        }

        void displayBalance() {
            cout << "Account number: " << accountNumber << endl;
            cout << "Owner name: " << ownerName << endl;
            cout << "Current balance: " << balance << endl;
        }
};

int main() {
    
    BankAccount account(1111, "VIGNESH", 5000);
	account.displayBalance();
	account.credit(2500);
	account.debit(1200);
	account.displayBalance();
	 return 0;
}
