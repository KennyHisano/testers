

#include "Rolodex.h"

void Rolodex::add(Card & card)
{
	/*it = CardVec.begin();

	while (it != CardVec.end())
	{
		if (!card.getlName().compare(it->getlName()))
		{
			CardVec.insert(it, card);
		}
		else
		{
			it++;
		}
	}
*/
	std::vector<Card>::iterator card_iter;
	for (card_iter = CardVec.begin();
		card_iter != CardVec.end();
		card_iter++)
	{
		//use overloaded Card comparison operator for alphabetical ordering
		if (*card_iter < card) {
			continue;
		}
		break;

	}
	it = CardVec.insert(card_iter, card);

	
}

Card Rolodex::remove()
{

	//CardVec.erase(it);

	//if (it == CardVec.end())
	//{
	//	it = CardVec.begin();
	//}
	//else
	//{
	//	it++;
	//}
	//
	//return *it;
	it = CardVec.erase(it);
	if (it == CardVec.end()) {
		it = CardVec.begin();
	}
	return *it;
}

Card Rolodex::getCurrentCard()
{
	return *it;
}

Card Rolodex::flip()
{
	it++;
	if (it == CardVec.end()) {
		it = CardVec.begin();
	}
	return *it;
}

bool Rolodex::search(const std::string & lastname, const std::string & firstname)
{
	for (std::vector<Card>::iterator card_iter = CardVec.begin();
		card_iter != CardVec.end();
		card_iter++)
	{
		if (lastname == card_iter->getlName() && firstname == card_iter->getfName()) {
			it = card_iter;
			return true;
		}
	}
	return false;
}

void Rolodex::show(std::ostream & os)
{
	for (std::vector<Card>::iterator card_iter = CardVec.begin();
		card_iter != CardVec.end();
		card_iter++)
	{
		(*card_iter).show(os);
	}
}
