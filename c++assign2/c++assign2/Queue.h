//
//  Queue.h
//  c++assign2
//
//  Created by NandN on 2017/09/30.
//  Copyright © 2017 NandN. All rights reserved.
//

#ifndef Queue_h
#define Queue_h

#include <iostream>
#include "QueueItem.h"

using namespace std;

class Queue{
private:
    QueueItem *_pHead;
    QueueItem *_pTail;
    int _itemCounter;
public:
    Queue();
    ~Queue();
    void addItem(const char *pData);
    void removeItem();
    void print();
    void erase();
};


#endif /* Queue_h */
