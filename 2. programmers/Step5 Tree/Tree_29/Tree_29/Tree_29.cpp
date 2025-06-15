#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Node
{
public:
    int value;
    Node *left, *right;
    Node(int key) : value(key), left(nullptr), right(nullptr) {}
};

bool searchNode(Node* node, int key)
{
    if(!node)
    {
        return false;
    }
    
    if(key == node->value)
    {
        return true;
    }

    // left
    if(key < node->value)
    {
        return searchNode(node->left, key);
    }
    // right
    else
    {
        return searchNode(node->right, key);
    }
}


class BinarySearchTree
{
    private:
    Node *root;
    Node* insertNode(Node* node, int key)
    {
        if(!node)
        {
            return new Node(key);
        }

        // left
        if(key < node->value)
        {
           node->left = insertNode(node->left, key);
        }
        // right
        else
        {
            node->right = insertNode(node->right, key);
        }
        return node;
    }

    public:
    BinarySearchTree() : root(nullptr){}
    
    void insert(int key)
    {
        root = insertNode(root, key);
    }

    bool search(int key)
    {
        return searchNode(root, key);
    }
};


vector<bool> solution(vector<int> lst, vector<int> search_list)
{
    vector<bool> answer;
    BinarySearchTree bst;

    for(const auto& value : lst)
    {
       bst.insert(value);
    }

    for(const auto& value : search_list)
    {
        answer.push_back(bst.search(value));
    }

    return answer;
}

int main()
{
    vector<int> lst = {5,3,8,4,2,1,7,10};
    vector<int> search_list = {1,2,5,6};
    vector<bool> a = solution(lst, search_list);

    for(const auto& b : a)
    {
        cout << b << " ";
    }
    
    return 0;
}