# pc_endsem_project
FUNCTION DEFINITION
1: BIN_TREE: This is a structure that represents a node of the tree.
             It has three elements among whom, one is an integer variable named data which stores an integer value contained in a particular node.
             The two other elements are pointers to the left and right subtree respectively of a particular node. 

2: Insert: It is a function of void return type i.e. it does not return anything on calling.
           Its primary goal is to insert values into nodes of the tree.
           It accepts a pointer to a node of the binary search tree along with a value to be stored concerning the given node.
           If the given node is empty i.e. the tree does not contain a value then it creates a new node whose left and right subtrees are null and stores the value passed to the function in the node.
           If the given node contains some value then it compares the given value with the value stored in the current node, if the value is smaller than the value stored in the current node, then the insert function is called and the node to the left of the current node is passed along with the value given initially else, then the insert function is called and the node to the right of the current node is passed along with the value given initially. 

3: Print_Preorder: This is a function used to print the preorder traversal of the tree
                   i.e. initially the value of the root is printed then the left node and after that the right node.
                   It uses recursion to perform the specified task. 

4: Print_Inorder: This is a function used to print the inorder traversal of the tree
                  i.e. initially the value of the left node is printed then the root node and after that the right node.
                  It uses recursion to perform the specified task. 

4: Print_Postorder: This is a function used to print the inorder traversal of the tree 
                    i.e. initially the value of the left node is printed then the right node and after that the root node.
                    It uses recursion to perform the specified task. 

5. Main function: This function is the heart of the program. 
                  This is where the values are accepted from the user and then stored in the tree in the form of nodes.
                  Later on, functions are called to print the preorder, postorder and inorder traversals of the binary search tree entered by the user. 
                  The variables used in the 'main' function are: *root, which is a pointer to the root node of the tree, 'i' is used for loop value, 'limit' is used to store the number of elements in the tree, 'elements' is an array used to store the elements of the tree when they are entered by the user.
                  There are two 'for' loops used in the 'main' function one to accept the elements from the user and the other one to insert the elements entered by the user in the tree in the form of nodes. 
                  Later on, three printf statements are used followed by the function calling of the three types of traversals.
