typedef struct Tree {
    int key;
    int height;
    struct Tree *left;
    struct Tree *right;
    struct Tree *parent;
    int info;
} Tree;
