#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class bankAccount{
	private:
		int accnumber;
		float accbalance;
	public:
		bankAccount(){
		cout<<"Enter account number\n";
		cin>>accnumber;
		cout<<"Enter account balance\n";
		cin>>accbalance;
		}
		bankAccount(int n,float m):accnumber(n),accbalance(m){}
		bankAccount createAccount(){
			bankAccount temp;
			return temp;
		}
		bankAccount createAnotherAccount(int n,float m){
			bankAccount temp1(n,m);
			return temp1;
		}
		void printAccount(bankAccount ba){
			cout<<ba.accnumber<<":"<<ba.accbalance<<"\n";
		}
};
int main(){
	bankAccount acc1;
	acc1.printAccount(acc1);
	bankAccount acc2=acc1.createAccount();
	acc1.printAccount(acc2);
	bankAccount acc3=acc1.createAnotherAccount(3,5);
	acc1.printAccount(acc3);
	return 0;
}

