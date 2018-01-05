#pragma once

#ifndef Card_h
#define Card_h

#include <string>

using std::string;
class Card {

private:

	string fName;
	string lName;
	string Occupation;
	string hAddress;
	string phoneNum;

public:
	Card();
	Card(string fN_param, string lN_param, string Occup_param, string hAddr_param, string pnum_param);
	friend bool operator< (Card& card1, Card& card2);
	~Card();


	void setfName(string fN);
	void setlName(string lN);
	void setOccupation(string Occup);
	void sethAddress(string hAddr);
	void setphoneNum(string pnum);

	const string getfName() const;
	const string getlName() const;
	const string getOccupation() const;
	const string getHaddress() const;
	const string getPhoneNum() const;

	void show(std::ostream & os);

};


#endif /* Card_h */
