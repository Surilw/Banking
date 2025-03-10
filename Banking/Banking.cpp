

#include <iostream>
#include <iomanip>
void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{
    double balance = 0.00;
    int choice = 0;

    do {
        std::cout << "Enter your choice:\n";
        std::cout << "1.Show Balance\n";
        std::cout << "2.Deposit Money\n";
        std::cout << "3.Withdraw Money \n";
        std::cout << "4.Exit\n";
        std::cin >> choice;
        std::cin.clear();
        fflush(stdin);
        switch (choice) {
        case 1:showBalance(balance);
           
            break;

        case 2:balance += deposit();
            showBalance(balance);
            break;

        case 3:balance -= withdraw(balance);
            showBalance(balance);
            break;

        case 4:std::cout << "Thanks for visiting\n";
            break;
        default: std::cout << "Invalid choice!!\n";


        }
       

    } while (choice!=4);
    return 0;
}
void showBalance(double balance) {
    std::cout << "Your balance is: R" <<std::setprecision(2)<<std::fixed <<balance << '\n';
}
double deposit() {
    double amount = 0;
    std::cout << "Enter the amount you want to deposited:";
    std::cin >> amount;
    if (amount > 0) {
        return amount;
    }
    else {
        std::cout << "That's an invalid amount!\n";
        return 0;
    }

    
}
double withdraw(double balance) {
    double amount = 0;
    std::cout << "Enter the amount you want to withdraw:\n";
    std::cin >> amount;
    if (amount > balance) {
        std::cout << "Insufficient funds!!\n";
        return 0;
    }
    else if (amount < 0) {
        std::cout << "That's invalid!\n";
        return 0;
    }
    else {
        return amount;
    }
    

}

