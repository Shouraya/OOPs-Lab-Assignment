#include <iostream>
#include <string>
using namespace std;
class publication{
	private:
		string title;
		float price;
	public:
		void get_data()
		{
			cout<<"Enter title of the book: ";
			cin.ignore();
			getline(cin,title);	
			cout<<"Enter price: ";
			cin>>price;
		}
		void put_data()
		{
			cout<<"\nTitle of book: "<<title;
			cout<<"\nPrice of book: "<<price;
		}
};
class book:public publication{
	private:
		int page_count;
	public:
		void get_data()
		{
			publication::get_data();
			cout<<"Enter no of pages: ";
			cin>>page_count;
		}
		void put_data()
		{
			publication::put_data();
			cout<<"\nNo. of pages: "<<page_count;
		}
};
class tape:public publication{
	private:
		float time;
	public:
		void get_data()
		{
			publication::get_data();
			cout<<"Enter time: ";
			cin>>time;
		}
		void put_data()
		{
			publication::put_data();
			cout<<"\nTotal reading time: "<<time;
		}
};
int main()
{
	tape t1;
	t1.get_data();
	t1.put_data();
	book b1;
	b1.get_data();
	b1.put_data();
	return 0;
}