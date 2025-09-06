
#include <iostream>
using namespace std;

class books {

private:
		string title_of_book, author_of_book, janr_of_books;
		int pages;
public:	
	// no parameter constructor
	books();

	// Set book details
	void set_title(string);
	void set_author(string);
	void set_janr(string);
	void set_pages(int);

	// Get book details
	void get_title();
	void get_author();
	void get_janr();
	void get_pages();


	// function to colect details  about book
	void book_details(string, string, string, int);

	// function to display book details
	void display_books_details();

	//Take input from user
	void take_input();
};

//defining constructors outside the class
books::books() {
	title_of_book = "Unknown";
	author_of_book = "Unknown";
	janr_of_books = "Unknown";
	pages = 0;
}

//defining set functions outside the class
void books::set_title(string title) {
	title_of_book = title;
}

void books::set_author(string author) {
	author_of_book = author;

}

void books::set_janr(string janr) {
	janr_of_books = janr;
}

void books::set_pages(int page) {
	pages = page;
}


//defining get functions outside the class
void books::get_title() {
	cout << "Title of the book " << title_of_book << endl;
}

void books::get_author() {
	cout << "Author of the book " << author_of_book << endl;
}

void books::get_janr() {
	cout << "Janr of the book " << janr_of_books << endl;
}

void books::get_pages() {
	cout << "Pages of the book " << pages << endl;
}


//defining function to colect details  about book outside the class
void books::book_details(string title, string author, string janr, int page) {
	set_title(title);
	set_author(author);
	set_janr(janr);
	set_pages(page);
}

//defining function to display book details outside the class
void books::display_books_details() {
	cout << "The book " << title_of_book << ",s authore is " << author_of_book << ", it is a " << janr_of_books << " genre and it has " << pages << " pages" << endl;
}


void books::take_input() {
	string title, author, janr;
	int page;
	cout << "Enter title of the book -> ";
	cin >> title;
	cout << "Enter author of the book -> ";
	cin >> author;
	cout << "Enter janr of the book -> ";
	cin >> janr;
	cout << "Enter pages of the book -> ";
	cin >> page;
}


int main()
{
	books book1;
	book1.book_details();
	book1.display_books_details();

	//book1.set_author("J.K.Rowling");
	//book1.set_title("Harry Potter");	
	//book1.set_janr("Fantasy");
	//book1.set_pages(500);
	//book1.get_author();
	//book1.get_title();
	//book1.get_janr();
	//book1.get_pages();

	return 0;
}