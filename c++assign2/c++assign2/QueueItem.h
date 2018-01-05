//
//  QueueItem.h
//  c++assign2
//
//  Created by NandN on 2017/10/01.
//  Copyright © 2017 NandN. All rights reserved.
//

#ifndef QueueItem_h
#define QueueItem_h


class QueueItem {
private:
    char _data[30];
    const int _itemId;
    QueueItem* _pNext;
    
public:
    QueueItem(const char *pData, int id);
    void setNext(QueueItem *pItem);
    QueueItem* getNext() const;
    int getId() const;
    const char* getData() const;

    
    void setNextNull();
};

#endif /* QueueItem_h */
