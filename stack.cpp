#include<iostream>

using namespace std;
int maxsize=4;
class stack{
	private:
		int stackarray[4],top;
	public:
		stack()
		{
			top=-1;
			if(top==-1)
				cout<<"Stack created. Stack is empty.";
			else
				for (int i=top;i>=0;i--)
				cout<<"value "<<i+1<<": "<<stackarray[i]<<endl;
		}
		void push(int number)
		{
			if(top==maxsize-1)
				cout<<"Error stack overflow!\n";
			else
				top++;
				stackarray[top]=number;
		}
		void pop()
		{
			if (top==-1)
			cout<<"Stack underflow\n";
			else
			{
			
			cout<<stackarray[top]<<" popped successfully.\n";
			top--;
			}
		}
		void display()
		{
			if(top==-1)
				cout<<"Stack is empty.";
			else
				for (int i=top;i>=0;i--)
				cout<<"value "<<i+1<<": "<<stackarray[i]<<endl;
		}
		~stack()
		{
					cout<<"Stack Destructed successfully\n";
		}
		
};

int main()
{
	stack s1;
	char ch;
	
	do{
		cout<<"\nPress.. \n"
		<<"1 to push\n"
		<<"2 to pop\n"
		<<"3 to display\n"
		<<"4 to end\n\n";
		cin>>ch;
		switch(ch)
		{
			case '1':
				int n;
				cout<<"Enter a number: ";
				cin>>n;
				s1.push(n);
				break;
			case '2':
				s1.pop();
				break;
			case '3':
				s1.display();
				break;
			case '4':
				cout<<"Exiting...\n\n";
				break;
			default:
				cout<<"Invalid option!\n";
				break;
		}
	}
	while(ch!='4');
	
	return 0;
}
