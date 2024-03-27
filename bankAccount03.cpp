#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class bankAccount{
	int accnumber;
	float accbalance;
	static int counter;
	public:
		bankAccount():accnumber(0),accbalance(0){
			counter++;
		}
		bankAccount(int n,float m):accnumber(n),accbalance(m){
			counter++;
		}
		int getobjectcount(){
			return counter;
		}
};
int bankAccount::counter=0;
int main(){
	bankAccount acc1,acc2,acc3,acc4(1004,2000);
	cout<<"Account:"<<acc1.getobjectcount()<<endl;
	cout<<"Account:"<<acc2.getobjectcount()<<endl;
	cout<<"Account:"<<acc3.getobjectcount()<<endl;
	return 0;
}

