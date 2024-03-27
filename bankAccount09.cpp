#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class bankAccount{
	int accnumber;
	public:
		float accbalance;
		bankAccount():accnumber(0),accbalance(0){}
		bankAccount(int n,float m):accnumber(n),accbalance(m){}
		int getaccnumber(){
			return accnumber;
		}
		float getaccbalance(){
			return accbalance;
		}
		void printAccountDetails(){
			cout<<accnumber<<":"<<accbalance<<"\n";
		}
};
class customer{
	int custid;
	string name;
	public:
		bankAccount ba1,ba2;
		customer():custid(0),name(""),ba1(){}
		customer(int id,string n,int n1,float b,int n2,float b1):custid(id),name(n),ba1(n1,b),ba2(n2,b1){}
		void transferamount(bankAccount* b1,bankAccount* b2,float amt){
			b1->accbalance-=amt;
			b2->accbalance+=amt;
		}
		void printDetails(){
			cout<<custid<<":"<<name<<":"<<ba1.getaccnumber()<<":"<<ba1.getaccbalance()<<":"<<ba2.getaccnumber()<<":"<<ba2.getaccbalance()<<"\n";
		}
		void printDetails(bankAccount b){
			cout<<custid<<":"<<name<<":"<<b.getaccnumber()<<":"<<b.getaccbalance();
		}
};
int main(){
	customer c1;
	customer c(1,"aaa",1001,5000,1002,1000);
	c.printDetails();
	c1.transferamount(&c.ba1,&c.ba2,500);
	c.printDetails();
	return 0;
}

