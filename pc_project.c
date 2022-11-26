/*Program to create a user defined binary search tree using pointers and structures.
Functions included are inserting a node, preorder traversal, postorder traversal and 
Inorder traversal. */ 

#include<stdlib.h>
#include<stdio.h>

//creating a structure named bin_tree representing a node of the tree
struct bin_tree {
    int data;
    struct bin_tree * right, * left;
};
typedef struct bin_tree node;

//Function to insert a node containing a value specified by the user
void insert(node ** tree, int val)
{
    node *temp = NULL;

    //checking if the tree is empty or not
    //And creating a new root node if tree is empty
    if(!(*tree))
    {
        temp = (node *)malloc(sizeof(node));
        temp->left = temp->right = NULL;
        temp->data = val;
        *tree = temp;
        return;
    }

    //inserting the value given to the left of the given node
    //if it is smaller than or equal to the value stored in the current node
    if(val <= (*tree)->data)
    {
        insert(&(*tree)->left, val);
    }

    //inserting the value given to the right of the given node
    //if it is greater than the value stored in the current node
    else if(val > (*tree)->data)
    {
        insert(&(*tree)->right, val);
    }

}

void print_preorder(node * tree)
{
    // checking for null node
    if (tree)
    {
        printf("%d\t",tree->data); // visiting root
        print_preorder(tree->left); //visiting left subtree
        print_preorder(tree->right); //visiting right subtree
    }

}

void print_inorder(node * tree)
{
    // checking for null node
    if (tree)
    {
        print_inorder(tree->left); //visiting left subtree
        printf("%d\t",tree->data); // visiting root
        print_inorder(tree->right); //visiting right subtree
    }
}

void print_postorder(node * tree)
{
    // checking for null node
    if (tree)
    {
        print_postorder(tree->left); //visiting left subtree
        print_postorder(tree->right); //visiting right subtree
        printf("%d\t",tree->data); // visiting root
    }
}

void main()
{
    node *root;
    node *tmp;

    //declaring variables for loop values and to store the no of elements in the tree
    int i,limit;

    //initialising the value of root as null
    root = NULL;

    //Taking the number of elements from the user
    printf("Enter the number of elements in the tree:\n");
    scanf("%d", &limit);

    //creating an integer array to store the elements of the tree given by the user
    int elements[limit];

    //accepting the elements from the user and storing it in the array
    printf("Enter the elements:\n");
    for(i = 0;i < limit;i++){
        scanf("%d", &elements[i]);
    }

    for(i = 0;i < limit;i++){
        /* Inserting nodes into tree */
        insert(&root,elements[i]);
    }    
    
    /* Printing nodes of tree */
    printf("\nPre-Order Display\n");
    print_preorder(root);

    printf("\nIn-Order Display\n");
    print_inorder(root);

    printf("\nPost-Order Display\n");
    print_postorder(root);
}