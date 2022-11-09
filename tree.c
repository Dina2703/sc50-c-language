#include <stdio.h>
#include <stdlib.h>

//Implememnt a ist of numbers as a binary search tree

// Create a 'node' data type

typedef struct node
{
    int number;
    struct node *left;
    struct node * right;

}
node;

//below two prototypes
void free_tree(node *root);
void print_tree(node *root);

int main(void)
{
    //tree of size 0 or NULL poiter called tree
    node *tree =NULL;

    //Add number to list
    node *n = malloc(sizeof(node)); //asking for some space for a node and  storing it in a atemporary variable called n.

    //below safety check
    if(n== NULL)
    {
        return 1;
    }

    //initializing this node (n) to contain the number 2.
    n->number = 2;
    n->left = NULL;
    n->right = NULL;
    tree = n;


    //Add number to list (left child node)
    n = malloc(sizeof(node)); //ask for for some space and store it in var 'n'

    //again check, if you have got any space
    if(n == NULL)
    {
        return 1;
    }
    n -> number = 1;
    n -> left = NULL; //initialize left child with NULL
    n -> right = NULL; //initialize right child with NULL
    tree -> left = n; //initialize the tree's left child

    //Add number to list (right child node)
    n = malloc(sizeof(node)); //ask for for some space and store it in var 'n'

    //again check, if you have got any space
    if(n == NULL)
    {
        return 1;
    }
    n -> number = 3; //initialize with 3
    n -> left = NULL; //initialize left child with NULL
    n -> right = NULL; //initialize right child with NULL
    tree -> right = n; //initialize the tree's right child

    //Print tree
    print_tree(tree);

    //Free tree
    free_tree(tree);
}

// Free tree func definition.  //works recursion technique, calling itself again and again
void free_tree(node *root)
{
    //first, as the best practice check for errors
    if(root == NULL)
    {
        return;
    }

    free_tree(root->left);
    free_tree(root->right);
    //free root always MUST be the last action to free, because if you do it before freeing left or right child, you not allowed to touch left side sub-tree or right side sub-tree.
    free(root);
}


//the function takes a pointer to a root element as its sole argument (node *root). //below used  recursion technique(means re-call itself again and again)
void print_tree(node *root)
{
    //just check
    if(root == NULL)
    {
        return; //since the func is void element we just QUIT, means doesn't return any value, we say just 'return' without 1.
    }

    print_tree(root->left); //which is 1
    printf("%i\n", root->number); //which is 2
    print_tree(root->right); // which is 3
}










