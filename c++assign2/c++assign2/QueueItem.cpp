//
//  QueueItem.cpp
//  c++assign2
//
//  Created by NandN on 2017/09/30.
//  Copyright © 2017 NandN. All rights reserved.
//

#include <stdio.h>
#include <string.h>

#include "QueueItem.h"

QueueItem::QueueItem(const char *pData, int id) : _itemId(id)
{
    strcpy(_data,pData);
    _pNext = NULL;
}

void QueueItem::setNext(QueueItem *pItem)
{
    _pNext = pItem;
}
void QueueItem::setNextNull()
{
    _pNext = NULL;
}


QueueItem* QueueItem::getNext() const
{
    return _pNext;
}

int QueueItem::getId() const
{
    return _itemId;
}

const char* QueueItem::getData() const
{
    return _data;
}


