#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *left, *right;
};

/*newNode() allocates a new node with the given data and NULL left 
right pointers */

struct node* newNode(int data)
{
    struct node* node = (struct node*)malloc(sizeof(struct node));

    //Assign data to node 
    node->data = data;
    //Set node to NULL
    node->right = node->left = NULL;
    return(node);
}

int main(void)
{
    /*create root */
    struct node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);

    getchar();
    return 0;
}