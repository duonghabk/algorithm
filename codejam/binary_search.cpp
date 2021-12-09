class Node
{
private:
    int key;
    Node * right;
    Node * left;

public:
    Node(int val = 0)
    {
        key = val;
        right = NULL;
        left = NULL;
    }

    Node search(Node root,int key)
    {
        if(root == NULL || root.key == key)
            return root;
        if(root.key<key)
            search(root.right,key);
        else
            search(roo.left,key);
    }

    Node* insert( Node*& root, int key, int value)
    {

    }
    Node* deleteNode(Node*& root, int key)
    {

    }

};
