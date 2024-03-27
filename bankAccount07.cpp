#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class bankAccount{
	int accnumber;
	float accbalance;
	public:
		bankAccount():accnumber(0),accbalance(0){}
		bankAccount(int n,float m):accnumber(n),accbalance(m){}
		void printAccount();
};
void bankAccount::printAccount(){
	cout<<accnumber<<":"<<accbalance<<endl;
}
int main(){
	bankAccount acc1(1,1000),acc2(2,2000),acc3(3,3000);
	bankAccount accounts[]={acc1,acc2,acc3};
	for(int i=0;i<3;i++){
		accounts[i].printAccount();
		cout<<"\n";
	}
	return 0;
}

