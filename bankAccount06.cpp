#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class bankAccount{
	int accnumber;
	float accbalance;
	public:
		bankAccount():accnumber(0){}
		bankAccount(int n,float m):accnumber(n),accbalance(m){}
		void printAccount();
};
void bankAccount::printAccount(){
	cout<<accnumber<<":"<<accbalance<<endl;
}
int main(){
	bankAccount acc1,acc2(1001,10000);
	acc1.printAccount();
	acc2.printAccount();
	return 0;
}

