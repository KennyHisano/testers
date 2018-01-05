//
//  Card.h
//  relodex
//
//  Created by NandN on 2017/11/04.
//  Copyright © 2017 NandN. All rights reserved.
//

#ifndef Card_h
#define Card_h

#include <string>

using std::string;
class Card{

private:
    
    string fName;
    string lName;
    string Occupation;
    string hAddress;
    string phoneNum;

public:

	Card(string fN_param, string lN_param, string Occup_param, string hAddr_param, string pnum_param);
	~Card();
	void setfName(string fN);
	void setlName(string lN);
	void setOccupation(string Occup);
	void sethAddress(string hAddr);
	void setphoneNum(string pnum);
    
    string getfName() const;
    string getlName() const;
    string getOccupation() const;
	string haddress() const;
	string phoneNum() const;

	string 

    
};


#endif /* Card_h */
