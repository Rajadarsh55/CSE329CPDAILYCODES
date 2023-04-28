#include <iostream>
using namespace std;
struct Tree
{
int data;
Tree* left = NULL,right = NULL;

Tree( int item)
{
data = item;
left = NULL;
right = NULL;
}
};
void inorder_traversal (Tree *root)
{
if (root == NULL) return;

inorder_traversal(root -> left);

cout << root -> data << " ";

inorder_traversal(root -> right);

}
Tree insert_node(Tree* root, int item)
{

if (root == NULL)
{
Tree *temp = new Tree(item);
return temp;
}

if (root -> data >item)
{
root -> left = insert_node(root -> left, item);
}

else
{
root -> right = insert_node(root -> right , item);
}
return root;

}
int main() {
Tree *root = new Tree(15);
root -> left = new Tree(12);
root -> right = new Tree(54);
root -> left -> left = new Tree(8);
root -> left -> right = new Tree(13);
root -> left -> left -> left = new Tree(5);
root -> right -> left = new Tree(20);
int item = 10;
insert_node(root, item);
cout << "insertion" ;
inorder_traversal(root);
return 0;
}
