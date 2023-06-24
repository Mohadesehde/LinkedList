//
//  main.cpp
//  LinkedList
//
//  Created by Mohadeseh Delavarian on 11/28/20.
//  Copyright © 2020 Mohadeseh Delavarian. All rights reserved.
//

#include <iostream>
#include "LinkedList.h"
using namespace std;


int main(int argc, const char * argv[]) {
    // sample to for the Linkedlist class
    LinkedList list;
    list.print();
    list.insert(2);
    list.insert(5);
    list.insert(-2);
    list.remove(5);
    list.insert(12);
    list.insert(0);
    list.insert(15);
//    list.odd();
//    list.even();
    list.print();
    cout<<list.length()<<endl<<list.min()<<endl;
    return 0;
}
