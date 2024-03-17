#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class bank_management_system{
	private:
		double balance;
		string accountHolderName;
		string accountNumber;
	public:
		bank_management_system(double b,string n,string a):balance(b),accountHolderName(n),accountNumber(a){}

		void deposit(double amount){
			balance += amount;
			cout<<"Deposited of rs "<<amount<<" successful."<<endl;
		}

		void withdraw(double amount){
			if(amount <= balance){
				balance -= amount;
				cout<<"Withdrawal of rs "<<amount<<" successful."<<endl;
			} else{
				cout<<"Insufficient funds."<<endl;
			}
		}

		void display(){
			cout<<"Account Number : "<<accountNumber<<endl;
			cout<<"Account Holder Name : "<<accountHolderName<<endl;
			cout<<"Balance : rs "<<balance<<endl;
		}

		string getAccountNumber(){
			return accountNumber;
		}
};

class bank{
	private:
		vector<bank_management_system> accounts;
	public:
		void addAccount(bank_management_system account){
			accounts.push_back(account);
			cout<<"Account added successfully."<<endl;
		}

		void displayAllAccounts(){
			for(int i=0;i<accounts.size();i++){
				accounts[i].display();
				cout<<endl;
			}
		}

		int withdraw(string a,int m){
			for(int i=0;i<accounts.size();i++){
				if(accounts[i].getAccountNumber()==a){
					accounts[i].withdraw(m);
					return 1;
				}
			}
			cout<<"Account Number Not Found"<<endl;
			return -1;
		}

		int deposit(string a,int m){
			for(int i=0;i<accounts.size();i++){
				if(accounts[i].getAccountNumber()==a){
					accounts[i].deposit(m);
					return 1;
				}
			}
			cout<<"Account Number Not Found"<<endl;
			return -1;
		}
};

int main(){
	bank Bank;
	int choice;
	do{
		cout<<"1.Add Account"<<endl;
		cout<<"2.Display All Accounts"<<endl;
		cout<<"3.Deposit"<<endl;
		cout<<"4.Withdraw"<<endl;
		cout<<"5.Exit"<<endl;
		cin>>choice;

		switch(choice){
			case 1:{string a,n;
				double b;
				cout<<"Enter Account Number: ";
				cin>>a;
				cout<<"Enter Account Holder Name: ";
				cin.ignore();
				getline(cin,n);
				cout<<"Enter Initial Balance: (in rs)";
				cin>>b;
				bank_management_system newAccount(b,n,a);
				Bank.addAccount(newAccount);
				break;
				}
			case 2:
				Bank.displayAllAccounts();
				break;
			case 3:
				{string a;
				double amount;
				cout<<"Enter Account Number: ";
				cin>>a;
				cout<<"Enter Deposit Amount: (in rs)";
				cin>>amount;
				Bank.deposit(a,amount);
				break;
				}
			case 4:
				{string a;
				double amount;
				cout<<"Enter Account Number: ";
				cin>>a;
				cout<<"Enter Withdraw Amount: (in rs)";
				cin>>amount;
				Bank.withdraw(a,amount);
				break;
				}
			default:
				cout<<"Invalid choice."<<endl;
		}
	}while(choice!=5);
	return 0;
}

