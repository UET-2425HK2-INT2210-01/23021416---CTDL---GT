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

// kiểm tra rỗng
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

// chen 1 phtu
void insert(NodePtr &a, int p, int x)
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
    // ví dụ chèn vào vị trí 2 thì cần tìm đến vị trí 1
    NodePtr current = a;
    for (int i = 1; i < p; i++)
    {
        current = current->next;
    }
    newNode->next = current->next;
    current->next = newNode;
}

// xóa 1 phần tử
void Delete(NodePtr &a, int p)
{
    if (isEmpty(a))
    {
        return;
    }
    NodePtr truoc = NULL, sau = a;
    for (int i = 0; i < p; i++)
    {
        truoc = sau;
        sau = sau->next;
    }
    if (truoc == NULL)
    {
        a = sau->next;
    }
    else
    {
        truoc->next = sau->next;
    }
}

void Print(NodePtr a)
{
    if (a == nullptr)
    {
        cout << "Danh sach rong" << endl;
        return;
    }

    NodePtr current = a;
    while (current != nullptr)
    {
        cout << current->data;
        if (current->next != nullptr)
        {
            cout << " ";
        }
        current = current->next;
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    NodePtr a = nullptr;
    for (int i = 0; i < n; i++)
    {
        string op;
        cin >> op;
        if (op == "insert")
        {
            int p, x;
            cin >> p >> x;
            insert(a, p, x);
        }
        else if (op == "delete")
        {
            int p;
            cin >> p;
            Delete(a, p);
        }
    }
    Print(a);
    return 0;
}