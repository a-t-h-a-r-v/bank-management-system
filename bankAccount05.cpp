#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class bankAccount{
	int accnumber;
	float accbalance;
	public:
		bankAccount():accnumber(0),accbalance(0){}
		bankAccount(int n,int m):accnumber(n),accbalance(m){}
		void setaccnumber(int newnum){
			accnumber=newnum;
		}
		void setaccnumber(float newbal){
			accbalance=newbal;
		}
		int getaccnumber()const{
			return accnumber;
		}
};
int main(){
	const bankAccount acc1(1001,5000);
	//acc1.setaccnumber(2001);
	cout<<acc1.getaccnumber()<<endl;
	return 0;
}

