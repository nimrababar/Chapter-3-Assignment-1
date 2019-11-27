#include<iostream>
using namespace std;
class Account
{
	private:
		int a,b ,c;
		public:
			void Input_Amount()
			{
				cout<<"Enter Amount";
				cin>>a;
			}
			void Output_Amount()
			{
				cout<<"Enter Amount";
				cin>>b;
			}
			void condition()
			{
				if(b>a)
				{
					cout<<"=====>Error"<<endl<<"=====>Error"<<endl<<"=====>Error"<<endl;
					cout<<"Withdrawal Amount ecceed"<<endl;
					cout<<"You enter a correct Amount"<<endl;
					cout<<"Your Remaining Amount is"<<b;
				}
				else
				
					c=a-b;
					cout<<"Your Remaining Amount is"<<c<<endl;
					cout<<"Thanks for using Our Bank";
			}
			
};
int main()
{
	cout<<"Welcome to the Student Bank!"<<endl;
	Account a;
	a.Input_Amount();
	a.Output_Amount();
	a.condition();
	return 0;

}

