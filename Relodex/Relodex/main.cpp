// main.cpp : Defines the entry point for the console application.
//

#include "Card.h"
#include "Rolodex.h"



using std::ios;
using namespace std;


int main()
{
	Rolodex rdex;

	string content;
	ifstream openfile("sample.txt", std::ifstream::in);		//automatic main input
	if (!openfile.is_open())
	{
		//ERR
		cout << "Unable to open file" << endl;
		return -1;
	}

	while (openfile.good())
	{
		string input = "";
		getline(openfile, input);

		if (input == "add") {
			cout << "adding new card" << endl;
			string first;
			string last;
			string addy;
			string job;
			string phone;
			string name;
			getline(openfile, name);
			stringstream ss(name);
			ss >> first >> last;
			getline(openfile, addy);
			getline(openfile, job);
			getline(openfile, phone);
			Card c(first, last, addy, job, phone);
			rdex.add(c);
			c.show(cout);
		}
		else if (input == "remove") {
			cout << "removing card" << endl;
			Card c = rdex.getCurrentCard();			c.show(cout);
			rdex.remove();
		}
		else if (input == "flip") {
			cout << "flipping card" << endl;
			rdex.flip();
			Card c = rdex.getCurrentCard();			c.show(cout);
		}
		else if (input == "view") { cout << "viewing card" << endl;			Card c = rdex.getCurrentCard();			c.show(cout); }
		else if (input == "list") { cout << "showing rolodex list" << endl;			rdex.show(std::cout); }
		else if (input == "search") {
			cout << "searching" << endl;
			string name;
			string first;
			string last;
			getline(openfile, name);
			stringstream ss(name);
			ss >> first >> last;
			if (rdex.search(last, first) == true) { Card c = rdex.getCurrentCard();				c.show(cout); }
			else { cout << "card not found" << endl; }
		}
		else if (input == "quit") { return 0; }		cout << "--------------------------------------------------------------" << endl;
	}
	return 0;
}