#include<iostream>
#include<cstring>
using namespace std;
class Account{
	private:
		string name;
		string surname;
		int tc;
		int balance;
	public:
		void Withdraw() {//çekme
			int t;
			cout<<"How many will you withdraw? "<<endl<<"Please enter:";
			cin>>t;
			if(balance>t){
				balance-=t;
				cout<<"Your process is succesfully completed."<<endl;
			}
			else{
				cout<<"You do not have enough money in your bank account."<<endl;
			}
		}
		void AddAccount() {
			int t;
			cout<<"Please enter the number, which currency do you want to create an account?"<<endl<<"For TL enter 1"<<endl<<"For USD enter 2"<<endl<<"For Gold enter 3"<<endl<<"Please enter:";
			cin>>t;
			if(t>=4){
				cout<<"There is no this currency. Try again, later."<<endl;
			}
			else{
				switch(t) {
					case 1:
						cout<<"Please enter your name:";
						cin>>name;
						cout<<"Please enter your surname:";
						cin>>surname;
						cout<<"Please enter your TC id:";
						cin>>tc;
						if(tc<11111111111){
							cout<<"You entered wrong. Please, try again later."<<endl;
						}
						else{
							cout<<"You succesfully created your bank account."<<endl;
						}
					case 2:
					case 3:
					cout<<"There is a problem about our system. Please, try again later.";	
				}
			}
		}
		void Deposit() {//yatirma
			int t;
			cout<<"How many will you deposit? "<<endl<<"Please enter:";
			cin>>t;
			balance+=t;
			cout<<"Your process is succesfully completed."<<endl;			
		}
		void Transfer() {
			int t,x;
			cout<<"How many will you transfer? "<<endl<<"Please enter:";
			cin>>t;
			balance-=t;
			cout<<"Who will you send?"<<endl<<"Please enter TC id:";
			cin>>x;
			//x.Deposit(t);
			cout<<"Your process is succesfully completed."<<endl;	
		}
		void CheckBalance(){
			cout<<"Your balance is :"<<balance<<endl;
		}
};
int main() {
	int s;
	Account T1;
	while(1) {
		cout<<"Please enter,which process would you like to do?"<<endl;
		cout<<"For creating new account enter 1,"<<endl;
		cout<<"For checking balance enter 2,"<<endl;
		cout<<"For transfering money enter 3,"<<endl;
		cout<<"For depositing money enter 4,"<<endl;
		cout<<"For withdrawing money enter 5,"<<endl;
		cout<<"For exit enter 6."<<endl;
		cout<<"Please enter:";
		cin>>s;
		
		if(s==1){
			T1.AddAccount();
		}
		if(s==2){
			T1.CheckBalance();
		}
		if(s==3){
			T1.Transfer();
		}
		if(s==4){
			T1.Deposit();
		}
		if(s==5){
			T1.Withdraw();
		}
		if(s==6){
			break;
		}
		else{
			cout<<"Error 404"<<endl;
		}
		
	}
	
	
	return 0;
}
