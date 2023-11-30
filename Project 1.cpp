#include <iostream>
#include <string>

class BankAccount {
  private: 
  std::string accnum;
  double bal;

  public:
    BankAccount(const std::string & accno, double initialbal): accnum(accno),
  bal(initialbal) {}
  
  void deposit(double amt) {
    bal += amt;
    std::cout << "Amount deposited. \nCurrent balance: " << bal << std::endl;
  }
  
  void withdraw(double amt) {
    if (amt <= bal) {
      bal-= amt;
      std::cout << "Amount withdrawed.\n Current balance: " << bal<< std::endl;
    } else {
      std::cout << "No Balance and amount cannot be withdrawed." << std::endl;
    }
  }
};

int main() {
  std::string accholder;
  std::cout<<"ENTER ACCOUNT HOLDER NAME:";
  std::cin>>accholder;
  std::string sacno;
  std::cout<<"ENTER SANCTION NUMBER NAME:";
  std::cin>>sacno;
  double Opening_balance, deposit_amnt, withdrawal_amnt;
  std::cout<<"ENTER OPENING BALANCE:";
  std::cin>>Opening_balance;
  std::cout <<"\nACCOUNT HOLDER: "<<accholder<< "\nA/c. No: " << sacno << "\n Balance: " << Opening_balance << std::endl;

  BankAccount account(sacno,Opening_balance);
  std::cout<<"ENTER DEPOSIT AMOUNT:";
  std::cin>>deposit_amnt;
  std::cout<<"ENTER WITHDRAWAL AMOUNT:";
  std::cin>>withdrawal_amnt;
   std::cout << "\nDeposit Amount: " << deposit_amnt << std::endl;
  account.deposit(deposit_amnt);
  std::cout << "\nWithdrawl Amount: " << withdrawal_amnt << std::endl;
  account.withdraw(withdrawal_amnt);
  return 0;
}