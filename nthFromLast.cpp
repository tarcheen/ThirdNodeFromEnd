/*
Developer: Hamed Mirlohi
Date: 11/27/2019
In this API we are returning a pointer to the nth element from the end of the
Linear Link List
*/

#include <iostream>

struct node
{
    node* next;
    int data;
}*ptr;

void display_node(node* head)
{
    while(head != nullptr)
    {
        std::cout<< "node: "<< head << " :"<<  head->data <<  std::endl;
        head = head->next;
    }
}


// adding nodes to the end of the list
node* build_LLL(node* head, int d)
{
    if(head == nullptr)
    {
        head = new node;
        head->data = d;
    }
    
    else
    {
        node* tmp = head;
        while(tmp->next != nullptr)
        {
            tmp = tmp->next;
        }
        // pointing to last node
        tmp->next = new node;
        tmp->next->data = d;
    }
    return head;
}

int accum_LLL(node* head)
{
    int count = 0;
    if(head == nullptr)
        return count;
    while(head != nullptr)
    {
        count = head->data + (count * 10);
        head = head->next;
    }
    return count;
}

int main(void)
{
      node* h = nullptr;
      
      h = build_LLL(h, 2);
      h = build_LLL(h, 5);
      h = build_LLL(h, 1);

      int total = accum_LLL(h);

      node* m = nullptr;

      m = build_LLL(m, 3);
      m = build_LLL(m, 7);
      m = build_LLL(m, 1);

      total += accum_LLL(m);

      std::cout<< "result: "<< total << std::endl;
    
      

      
}

