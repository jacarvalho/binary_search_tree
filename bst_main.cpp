#include <cstdio>
#include <iostream>
#include "bst.h"


int main(int argc, char **argv) {
    btree bst;

    bst.insert(10);
    bst.insert(5);
    bst.insert(15);
    bst.insert(1);
    
    node *n;

    n = bst.search(15);
    std::cout << "key found : " << n->key_value << std::endl;

    return 0;
}
