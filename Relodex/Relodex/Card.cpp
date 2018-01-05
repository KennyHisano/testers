#include <iostream>

#include  "Card.h"

Card::Card() 
{
	fName, lName, Occupation, hAddress, phoneNum = '\0';
}

Card::Card(string fN_param, string lN_param, string Occup_param, string hAddr_param, string pnum_param)
{
	fName = fN_param;
	lName = lN_param;
	Occupation = Occup_param;
	hAddress = hAddr_param;
	phoneNum = pnum_param;
}


bool operator< (Card& card1, Card& card2) {
	if (card1.getlName() < card2.getlName()) {
		return true;
	}
	if (card1.getlName () == card2.getlName()) {
		if (card1.getlName() < card2.getlName()) {
			return true;
		}
	}
	return false;
}

Card::~Card()
{
}

void Card::setfName(const string fN)
{
	fName = fN;
}

void Card::setlName(const string lN)
{
	lName = lN;
}

void Card::setOccupation(const string Occup)
{
	Occupation = Occup;
}

void Card::sethAddress(const string hAddr)
{
	hAddress = hAddr;
}

void Card::setphoneNum(const string pnum)
{
	phoneNum = pnum;
}

const string Card::getfName() const
{
	return fName;
}

const string Card::getlName() const
{
	return lName;
}

const string Card::getOccupation() const
{
	return Occupation;
}

const string Card::getHaddress() const
{
	return hAddress;
}

const string Card::getPhoneNum() const
{
	return phoneNum;
}

void Card::show(std::ostream& os)
{
	using std::endl;
	os << "\nName: " << getfName() << ", " << getlName() << "\nOccupation: " << getOccupation()
		<< "\nAddress: " << getHaddress() << "\nPhone Number: " << getPhoneNum() << endl;
}
