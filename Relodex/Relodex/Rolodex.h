//
//  Rolodex.h
//  relodex
//
//  Created by NandN on 2017/11/05.
//  Copyright © 2017 NandN. All rights reserved.
//

#ifndef Rolodex_h
#define Rolodex_h

#include <vector>
#include <iterator>
#include <algorithm>
#include <string>
#include <sstream>

#include <iomanip>
#include <strstream>
#include <string>
#include <sstream>
#include <iostream>
#include <cstdio>
#include <list>
#include <algorithm>
#include "Card.h"
#include <ios>
#include <fstream>
#include "Card.h"

class Rolodex {

private:
	std::vector<Card> CardVec;
	std::vector<Card>::iterator it;
public:
	void add(Card& card);
	Card remove();
	Card getCurrentCard();
	Card flip();
	bool search(const std::string& lastname, const std::string& firstname);
	void show(std::ostream& os);
};

#endif /* Rolodex_h */
