#ifndef _BST_H_
#define _BST_H_

struct node {
    int key_value;
    struct node *left;
    struct node *right;
};


class btree {
    public:
        btree();
        ~btree();

        void insert(int key);
        node *search(int key);
        void destroy_tree();

    private:
        node *root;
        void destroy_tree(node *leaf);
        void insert(int key, node *leaf);
        node *search(int key, node *leaf);
};


#endif
