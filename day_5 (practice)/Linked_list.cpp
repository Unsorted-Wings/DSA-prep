#include <bits/stdc++.h>

using namespace std;

template <class t>
class node
{
private:
    t value;
    node<t> *next;

public:
    node()
    {
        value = NULL;
        next = NULL;
    }
    node(t value)
    {
        this->value = value;
        this->next = NULL;
    }
    node(t value, node *next)
    {
        this->value = value;
        this->next = next;
    }
    t getValue()
    {
        return (value);
    }
    node *getNext()
    {
        return (next);
    }
    void setNext(node<t> *Node)
    {
        next = Node;
    }
    ~node(){cout << "node deleted" << endl;}
};

template <class t>
class linked_list
{
    node<t> *Node;

public:
    linked_list()
    {
        Node = NULL;
    }
    linked_list(t value)
    {
        Node = new node<t>(value);
    }
    void push_front(t value)
    {
        node<t> *newNode = new node<t>(value);
        newNode->setNext(Node);
        Node = newNode;
    }
    void push_back(t value)
    {
        node<t> *newNode = new node<t>(value);
        Node->setNext(newNode);
    }
    void pop_front(){
        node<t> *temp = Node;
        Node = Node->getNext();
        temp->~node();

    }
    t getValue()
    {
        return (Node->getValue());
    }
    void getValues()
    {
        node<t> *current = Node;

        while (current != NULL)
        {
            cout << current->getValue() << " ";
            current = current->getNext();
        }
    };
};

int main()
{
    // node<int> one = node<int>(1);
    // node<int> two = node<int>(2, &one);

    // cout << one.getValue();
    // cout << two.getValue();

    linked_list<int> arr(1);
    arr.push_back(2);
    arr.push_front(3);

    arr.getValues();

    arr.pop_front();

    arr.getValues();

    return 0;
}