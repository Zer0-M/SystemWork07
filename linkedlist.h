struct node { int i; struct node *next;};
void print_list(struct node * ll);
struct node * insert_front(struct node * front, int val);
struct node * free_list(struct node * ll);