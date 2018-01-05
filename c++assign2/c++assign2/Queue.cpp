//
//  Queue.cpp
//  c++assign2
//
//  Created by NandN on 2017/10/01.
//  Copyright © 2017 NandN. All rights reserved.
//

#include <stdio.h>

#include "Queue.h"

Queue::Queue(){
    _pHead=NULL;
    _pTail=NULL;
    _itemCounter=0;
}

Queue::~Queue(){}


void Queue::addItem(const char *pData)
{
    QueueItem *pItem = new QueueItem(pData,++_itemCounter);
    
    if (_pHead == NULL)
        _pHead = _pTail = pItem;
    else
    {
        //pItem gets updated. now pointing to new Item.
        //its next is pointing to null.

        _pTail->setNext(pItem);
        //arrow-> is used to access object's member by pointer.
        //_ptail is pointing to the address of previous item:pItem.
        //setNext(pItem) sets _pTail pointing(previous item's)'s p_next to point pItem(new one).
        //now p_nextis pointing new pItem.
        
        _pTail = pItem;
        //then update ptail.
        pItem->setNextNull();
        //set new pItem's next to null.
    }
}
void Queue::removeItem()
{
    if(_pHead == NULL && _pTail == NULL)
    {
        //do nothing
    }
    else if(_pHead == _pTail)
    {
        _pHead = _pTail = NULL;
    }
    else
    {
        QueueItem* pItem = _pHead->getNext();
        //now pItem is pointing an item which _pHead's next is pointing to.
        //so the pItem is pointintg second latest item.
        delete _pHead;
        _pHead = pItem;
        //update pHead.
    }
    
}


void Queue::print()
{
    QueueItem* pItem = _pHead;
    while(pItem != NULL)
    {
        cout << pItem->getId() << endl;
        cout << pItem->getData() << endl;
        pItem = pItem->getNext();
    }
}
void Queue::erase()
{
    while(_pHead!=NULL)
    {
        removeItem();
    }
}
 
