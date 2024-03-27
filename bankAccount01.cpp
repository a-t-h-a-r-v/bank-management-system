#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class bankAccount{
	private:
		int accnumber;
		float accbalance;
	public:
		bankAccount():accnumber(0),accbalance(0){}
		bankAccount(int n,float m):accnumber(n),accbalance(m){}
		int getaccnumber(){
			return accnumber;
		}
		int getbalance(){
			return accbalance;
		}
		void printAccount(bankAccount ba){
			cout<<ba.getaccnumber()<<":"<<ba.getbalance();
		}
};
int main(){
	bankAccount acc1,acc2(1001,500);
	cout<<acc1.getaccnumber()<<":";
	cout<<acc1.getbalance()<<"\n";
	acc1.printAccount(acc2);
	return 0;
}

