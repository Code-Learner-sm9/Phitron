void print_linked_list(Node *n)

{
    if (n == NULL)
        return;

    cout << n->value << " ";

    print_linked_list(n->next);
}
