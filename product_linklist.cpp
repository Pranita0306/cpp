#include<iostream>
using namespace std;
const int max_size=10;
struct product
{
	int id;
	char name[20];
	float price,gst,totalprice;
};
int main()
{
	product p[max_size];
	int temp=0,next=-1,choice;

	while(temp!=2)
	{
		cout<<" enter the choice 1.insert,2.delete,3.dislpay"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:
				if(next==max_size)
				{
					cout<<"list is full "<<endl;
				}
				else
				{
					next++;
					cout<<"enter  the product  name"<<endl;
					cin>>p[next].name;
						cout<<"enter  the product  id"<<endl;
					cin>>p[next].id;
						cout<<"enter  the product  price"<<endl;
					cin>>p[next].price;
						cout<<"enter  the product gst"<<endl;
					cin>>p[next].gst;
					
					
				}
				break;
				case 2:
					if(next==-1)
					{
						cout<<"list is underflow "<<endl;
					}
					else
					{
						next--;
					}
					break;
					case 3:
						if(next==-1)
						{
							cout<<"list is empty"; 
						}
						else
						{
							for(int i=0; i<=next; i++)
							{
								
								cout<<"product name..........."<<p[i].name<<endl;
								cout<<"product name..........."<<p[i].id<<endl;
								cout<<"product name..........."<<p[i].price<<endl;
								cout<<"product name..........."<<p[i].gst<<endl;
								cout<<"-----------------------------------------------"<<endl;
								
							}
						}
						break;
						default:
						cout<<"wrong choise";
						break;
						
				
		}
		
	}
}

