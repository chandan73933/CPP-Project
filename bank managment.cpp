#include<iostream>
using namespace std;
class Bank
{
	int  acc_no,account;
	float balance;
	char name[30];
	
public:
	void open();
	void deposite(int);
	void withdraw(int);
	void search(int);
	void display();
	
};
	void Bank :: open()
	{
		cout<<"Enter the name:->";
		cin>>name;
		cout<<"Enter your account number:->";
		cin>>account;
		cout<<"Enter the amount of money: BDT->";
		cin>>balance;
	}
	void Bank :: deposite(int j)
	{
		int bnc;
		if(account==j)
		{
		cout<<"Enter the amount of money: BDT->";
		cin>>bnc;
		balance=balance+bnc;
		cout<<"\n \n job has done \n";
		}
	}
	void Bank :: withdraw(int k)
	{
		int balc,p;
		if(account==k)
		{
			cout<<"\n Your current bank account is BDT  "<<balance<<"\n "<<"The amount of money is BDT  ";
			cin>>balc;
			p=balance-balc;
			if(p<0)
			{
				cout<<"Sorry!! there is not enough money \n ";
				
			}
			else if(p>=0)
			{
				cout<<"\n \t  Your request is done \n \n ";
				balance=p;
			}
		}
	}
	void Bank :: display(void)
	{
		cout<<"\n\n name:"<<name<<"\n\n Account no  "<<account<<"\n \n Balance : BDT  "<<balance<<"\n\n ";
		
	}
	void Bank ::search(int m)
	{
		if(account==m)
		{
			cout<<" \n \n **************Account holder";
			cout<<"\n\n name:"<<name<<"\n\n Account no  "<<account<<"\n \n balance : BDT  "<<balance<<"\n \n ";
			cout<<"\n***************************************************\n \n ";
		}
	}
	int main()
	{
		int i,j,k,m,l,y=0;
		Bank b[20];
		int index;
		do
		{
			cout<<"Please enter 1 to open account\n\n";
			cout<<"Please enter 2 to deposite amount\n\n";
			cout<<"Please enter 3 to withdraw money\n\n";
			cout<<"Please enter 4 to dispaly\n\n";
			cout<<"Please enter 5 to search\n\n ";
			cin>>index;
		switch(index)
		{
			case 1:
				{
					cout<<"\n How many account you want to open \n ";
					cin>>y;
					for(i=0;i<y;i++)
					b[i].open();
					cout<<"Account created sucessfully ";
					break;
				}
			case 2:
				{
					cout<<"\n Plese enter your account no";
					cin>>j;
					for(i=0;i<y;i++){
					b[i].deposite(j);
				}
				break;
					
				}
			case 3:
				{
					cout<<"\n Please nter your account no";
					cin>>k;
					for(i=0;i<y;i++)
					{
						b[i].withdraw(k);
					}
					break;
				}
			case 4:
				{
				for(i=0;i<y;i++)
					{
						b[i].display();
					}
					break;	
				}
			case 5:
				{
				cout<<"\n Please enter your account no";
					cin>>m;
					for(i=0;i<y;i++)
					{
						b[i].search(m);
					}
					break;	
				}
			default:
				{
					cout<<"You have pressed the wrong key try again\n \n ";
					break;
					
				}
		}
	}	while(1);
	}
	
