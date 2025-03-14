#include <iostream>

using namespace std;
struct Node
{
    int data;
    Node *next;
};

typedef struct Node *NodePtr;
NodePtr NewNode(int xdata)
{
    NodePtr newNode = new Node;
    newNode->data = xdata;
    newNode->next = nullptr;
    return newNode;
}
bool isEmpty(NodePtr a)
{
    return a == nullptr;
}

// đếm số phần tử
int Size(NodePtr a)
{
    int count = 0;
    while (a != nullptr)
    {
        count++;
        a = a->next;
    }
    return count;
}
void append(NodePtr &a, int p, int x)
{
    int n = Size(a);
    if (p < 0 || p > n + 1)
    {
        cout << "Vi tri chen khong hop le" << endl;
        return;
    }
    NodePtr newNode = NewNode(x);
    if (isEmpty(a))
    {
        a = newNode;
        return;
    }
    if (p == 0)
    {
        newNode->next = a;
        a = newNode;
        return;
    }
    if (p == n)
    {
        NodePtr Cuoi = a;
        while (Cuoi->next != nullptr)
        {
            Cuoi = Cuoi->next;
        }
        Cuoi->next = newNode;
        return;
    }
}
//Tìm kiếm vị trí đầu tiên của phần tử x và in ra vị trí đó trong danh sách
void Search(NodePtr a)
{
    int x;
    cin >> x;
    NodePtr current = a;
    int count = 0;
    while (current != nullptr)
    {
        count++;
        if (current->data == x)
        {
            cout << count << endl;
            return;
        }
        current = current->next;
    }
    cout << "NO" << endl;
}
// đảo ngược danh sách liên kết
void Reverse(NodePtr &a)
{
    NodePtr prev = nullptr;
    NodePtr current = a;
    NodePtr next = nullptr;
    while (current != nullptr)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    a = prev;
}
int main()
{
    NodePtr head = nullptr;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string op;
        cin >> op;
        if (op == "append")
        {
            int p, x;
            cin >> p >> x;
            append(head, p, x);
        }
        else if (op == "search")
        {
            Search(head);
        }
    }
    return 0;
}