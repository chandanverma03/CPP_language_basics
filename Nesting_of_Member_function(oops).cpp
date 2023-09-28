#include<iostream>
#include<string>
using namespace std;
class binary
{
	private: 
		string s;
	
	public:
		void read(void);
		void check_binary(void);
		void ones_compliment(void);
		void display(void);

};

void binary :: read(void)
{
	cout<<"\tEnter a binary number : ";
	cin>>s;
}
void binary :: check_binary(void)
{
	for(int i = 0; i < s.length(); i++)
	{
		if(s.at(i)!='0' && s.at(i)!='1')
		{
			cout << "\n\tIncorrect binary format!!" << endl;
			exit(0);
		}
	}
}
void binary :: ones_compliment(void)
{
	for(int i = 0; i < s.length(); i++)
	{
		if(s.at(i) == '1')
		{
			s.at(i) = '0';
		}
		else
		{
			s.at(i) = '1';
		}
	}
}
void binary :: display(void)
{
	cout<<"\n\tDisplaying binary number : ";
	for(int i = 0; i < s.length(); i++)
	{
		cout<<s.at(i);
	}
	cout<<endl;
}
int  main()
{
	cout<<"\n\n\t\t\tWelcome to CPP Programming\n\n";
	binary b;
	b.read();
	b.check_binary();
	b.ones_compliment();
	b.display();
	return 0;
}
