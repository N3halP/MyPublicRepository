/*
8.Library Catalog with Books and Journals:
Problem Statement: Build a library catalog system.
Create a base class LibraryItem with properties like title and author.
Then, derive classes like Book and Journal, each with their unique properties.
Implement methods to check out and return items in the derived classes.
*/

#include<iostream>
using namespace std;

class LibraryItem {
	private:
		string title;
		string author;
	public: 
		virtual void accept()
		{
			cout<<"-----Enter Details-----"<<endl;
			cout<<"Enter Title: "<<endl;
			cin>>title;
			cout<<"Enter Author: "<<endl;
			cin>>author;
		}
		virtual void display()
		{
			cout<<"----------Details--------"<<endl;
			cout<<"Title: "<<title<<"\n"<<"Author: "<<author<<endl;
		}
};

class Book: public LibraryItem
{
	private: 
		int refrenceNo;
		string type;
		
	public:
		void accept()
		{
			LibraryItem::accept();
			cout<<"Enter Refrence No.: "<<endl;
			cin>>refrenceNo;
			cout<<"Enter Type: "<<endl;
			cin>>type;
		}
		void display()
		{
			LibraryItem::display();
			cout<<"Refrence Number: "<<refrenceNo<<"\n"<<"Type: "<<type<<endl;
		}
};

class Journal: public LibraryItem
{
	private: 
			int edition;
			string publisher;
	public:
		void accept()
		{
			LibraryItem::accept();
			cout<<"Enter Edition : "<<endl;
			cin>>edition;
			cout<<"Enter Publisher : "<<endl;
			cin>>publisher;
		}
		void display()
		{
			LibraryItem::display();
			cout<<"Edition : "<<edition<<"\n"<<"Publisher : "<<publisher<<endl;
		}
			
};

int main()
{
	Book b;
	b.accept();
	b.display();

	Journal j;
	j.accept();
	j.display();
}
