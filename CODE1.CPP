#include <iostream>
using namespace std;

struct Node
{
    char data;
    Node *prev;
    Node *next;
    Node(char val)
    {
        data = val;
        prev = next = NULL;
    }
};

class DoublyLinkedList
{
    Node *head;
    Node *tail;

public:
    DoublyLinkedList()
    {
        head = tail = NULL;
    }

    // Insert at end
    void insertEnd(char val)
    {
        Node *newNode = new Node(val);
        if (!head)
        {
            head = tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }

    // Insert at beginning
    void insertBegin(char val)
    {
        Node *newNode = new Node(val);
        if (!head)
        {
            head = tail = newNode;
            return;
        }
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }

    // Insert before a given position
    void insertBeforePos(int pos, char val)
    {
        if (pos <= 1)
        {
            insertBegin(val);
            return;
        }
        Node *newNode = new Node(val);
        Node *temp = head;
        int count = 1;
        while (temp && count < pos)
        {
            temp = temp->next;
            count++;
        }
        if (!temp)
        { // if pos > length, insert at end
            insertEnd(val);
            return;
        }
        newNode->next = temp;
        newNode->prev = temp->prev;
        if (temp->prev)
            temp->prev->next = newNode;
        temp->prev = newNode;
        if (pos == 1)
            head = newNode;
    }

    // Delete from beginning
    void deleteBegin()
    {
        if (!head)
            return;
        Node *temp = head;
        head = head->next;
        if (head)
            head->prev = NULL;
        else
            tail = NULL;
        delete temp;
    }

    // Delete from end
    void deleteEnd()
    {
        if (!tail)
            return;
        Node *temp = tail;
        tail = tail->prev;
        if (tail)
            tail->next = NULL;
        else
            head = NULL;
        delete temp;
    }

    // Delete from position
    void deletePos(int pos)
    {
        if (!head)
            return;
        Node *temp = head;
        int count = 1;
        while (temp && count < pos)
        {
            temp = temp->next;
            count++;
        }
        if (!temp)
            return; // pos > length

        if (temp->prev)
            temp->prev->next = temp->next;
        else
            head = temp->next;

        if (temp->next)
            temp->next->prev = temp->prev;
        else
            tail = temp->prev;

        delete temp;
    }

    // Display DLL
    void display()
    {
        Node *temp = head;
        while (temp)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    DoublyLinkedList dll;

    // Step 1: Insert A–J at end
    for (char ch = 'A'; ch <= 'J'; ch++)
        dll.insertEnd(ch);

    // Step 2: Insert K–T at beginning
    for (char ch = 'K'; ch <= 'T'; ch++)
        dll.insertBegin(ch);

    // Step 3: Insert U–Y before 4th, 8th, 12th, 16th, 20th node
    int positions[] = {4, 8, 12, 16, 20};
    char ch = 'U';
    for (int i = 0; i < 5; i++, ch++)
    {
        dll.insertBeforePos(positions[i], ch);
    }

    // Step 4: Insert Z at end
    dll.insertEnd('Z');

    cout << "DLL after insertions: ";
    dll.display();

    // Deletions
    dll.deleteBegin(); // delete from beginning
    dll.deleteEnd();   // delete from end

    dll.deletePos(3);  // delete 3rd node
    dll.deletePos(6);  // delete 6th node
    dll.deletePos(9);  // delete 9th node
    dll.deletePos(12); // delete 12th node

    cout << "DLL after deletions: ";
    dll.display();

    return 0;
}
