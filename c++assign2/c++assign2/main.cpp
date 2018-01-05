//
//  main.cpp
//  c++assign2
//
//  Created by NandN on 2017/09/30.
//  Copyright © 2017 NandN. All rights reserved.
//


#include "Queue.h"




int main(int argc, const char * argv[]) {
    Queue myQueue;;
    myQueue.removeItem();

    myQueue.addItem("a");
    myQueue.addItem("b");
    myQueue.addItem("c");
    myQueue.addItem("d");
    myQueue.print();
    
    myQueue.removeItem();
    myQueue.removeItem();
    myQueue.addItem("e");
    myQueue.addItem("f");
    myQueue.addItem("g");
    myQueue.addItem("h");
    myQueue.print();
    
    myQueue.removeItem();
    myQueue.removeItem();
    myQueue.removeItem();
    myQueue.removeItem();
    myQueue.print();
    
    myQueue.erase();
    
    myQueue.addItem("i");
    myQueue.addItem("j");
    myQueue.addItem("k");
    myQueue.print();
    
    myQueue.erase();
    myQueue.print();
    
    return 0;
}

