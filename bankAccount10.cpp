#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class bankAccount{
	public:
		int accnumber;
		float accbalance;
		bankAccount(){
			accnumber=0;
			accbalance=0;
		}
		bankAccount(int num,float bal){
			cout<<"parameterized constructor is called"<<endl;
			accnumber=num;
			accbalance=bal;
		}
		bankAccount(const bankAccount &obj){
			cout<<"copy constructor is called"<<endl;
			accnumber=obj.accnumber;
			accbalance=obj.accbalance;
		}
		void printAccount(){
			cout<<accnumber<<":"<<accbalance<<endl;
		}
};
int main(){
	bankAccount ba1(1001,1000),ba3;
	bankAccount ba2=ba1;
	ba3=ba1;
	ba1.printAccount();
	ba2.printAccount();
	ba1.accbalance=2000;
	ba3=ba1;
	ba2.printAccount();
	ba3.printAccount();
	return 0;
}

