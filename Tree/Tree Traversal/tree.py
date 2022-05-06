# Python Program for Tree Traversal.


class Node:

    def __init__(self, key):
        self.left = None
        self.right = None
        self.val = key

#  A Function to do Preorder tree traversal.

def printPreorder(root):

    if root:

        # first print data to node
        print(root.val)

        # Then recur on left Child
        printPreorder(root.left)

        # Then recur on right Child
        printPreorder(root.right)


def printInorder(root):

    if root:

        # First recur on left child
        printInorder(root.left)

        # Then print the data node
        print(root.val)

        # Then recur on right node
        printInorder(root.right)


def printPostorder(root):

    if root:

        # First recur the left node
        printPostorder(root.left)

        # Then recur The right node
        printPostorder(root.right)

        # Then print The value.
        print(root.val)



# Derived The Code.
root = Node(1)
root.left = Node(2)
root.right = Node(3)
root.left.left = Node(4)
root.left.right = Node(5)


print("\nPreorder traversal of binary tree is")
printPreorder(root)
 
print ("\nInorder traversal of binary tree is")
printInorder(root)
 
print ("\nPostorder traversal of binary tree is")
printPostorder(root)
