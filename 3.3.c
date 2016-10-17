
typedef struct node node_t;
struct node { void *data;
node_t *left; node_t *rght;
};
typedef struct { node_t *root;
int (*cmp)(void*,void*); } tree_t;
/* ptr to stored structure */ /* left subtree of node */ /* right subtree of node */
/* root node of the tree */ /* function pointer */
/* prototypes for the functions in this library */ tree_t *make_empty_tree(int func(void*,void*)); int is_empty_tree(tree_t *tree); void *search_tree(tree_t *tree, void *key);
tree_t *insert_in_order(tree_t *tree, void *value); void traverse_tree(tree_t *tree, void action(void*)); void free_tree(tree_t *tree);
 