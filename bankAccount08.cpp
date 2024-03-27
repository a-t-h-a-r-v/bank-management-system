#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class bankAccount{
	int accnumber;
	float accbalance;
	string name;
	long mobile[2];
	public:
		bankAccount():accnumber(0),accbalance(0){
			mobile[0]=0;
			mobile[1]=0;
		}
		bankAccount(int n,float m,string nm):accnumber(n),accbalance(m),name(nm){
			mobile[0]=12345678;
			mobile[1]=23456789;
		}
		void printAccountDetails(){
			cout<<accnumber<<":"<<accbalance<<":"<<name<<":"<<"pri num:"<<mobile[0]<<"sec num:"<<mobile[1]<<endl;
		}
};
int main(){
	bankAccount acc1(1,2000,"aaa"),acc2;
	acc1.printAccountDetails();
	acc2.printAccountDetails();
	return 0;
}

