//
//  LinkedList.h
//  LinkedList
//
//  Created by Mohadeseh Delavarian on 6/24/23.
//  Copyright © 2023 Mohadeseh Delavarian. All rights reserved.
//

#ifndef LinkedList_h
#define LinkedList_h

#include <iostream>

using namespace std;

struct node
{
    int d;
    node *next;
};

class LinkedList{
private:
    node *start;
public:
    LinkedList()
    {
        start=NULL;
    }
    bool isempty()
    {
        if(start==NULL)
            return true;
        else
            return false;
    }

    bool insert(int x)
    {
        node *n;
        n=new node;
        if(!n)
            return false;
        n->d=x;
        n->next=NULL;
        if(!start || x<start->d)
        {
            n->next=start;
            start=n;
            return true;
        }
        node *p,*q;
        q=start;
        p=start->next;
        while(p&&p->d<x)
        {
            p=p->next;
            q=q->next;
        }
        q->next=n;
        n->next=p;
        return true;
    }

    void print()
    {
        cout<<"{";
        for(node *p=start;p!=NULL;p=p->next)
            cout<<p->d;
        cout<<"}"<<endl;
    }

    int firstelement()
    {
        if(start==NULL)
            return NULL;
        else
            return start->d;
    }

    int length()
    {
        int e=0;
        for(node *p=start;p!=NULL;p=p->next)
            e++;
        return e;
    }

    void remove(int x)
    {
        if(!start ||x<start->d)
            return;
        if(x==start->d)
        {
            node *temp=start;
            start=start->next;
            delete temp;
            return;
        }
        node *p=start;
        while(p->next&&p->next->d<x)
            p=p->next;
        if(p->next==NULL&&p->next->d<x)
            return;
        else
        {
            node *temp=p->next;
            p->next=p->next->next;
            delete temp;
        }
    }

    void sumavg(int &sum,int &avg)
    {
        sum=0;
        for(node *p=start;p!=NULL;p=p->next)
            sum=sum+p->d;
        int t=length();
        if (t>0)
            avg=sum/t;
        else
            avg=0;
    }

    void avg(int &avg)
    {
        int sum=0;
        for(node *p=start;p!=NULL;p=p->next)
            sum=sum+p->d;
        int t=length();
        if (t>0)
            avg=sum/t;
        else
            avg=0;
    }

    int mul()
    {
        int m=1;
        for(node *p=start;p!=NULL;p=p->next)
            m=m*p->d;
        return m;
    }

    void printodd()
    {
        for(node *p=start;p!=NULL;p=p->next->next)
            cout<<p->d;
    }

    void printeven()
    {
        for(node *p=start->next;p!=NULL;p=p->next->next)
            cout<<p->d;
    }

    bool search(int s)
    {
        for(node *p=start;p!=NULL;p=p->next)
            if(p->d==s)
                return true;
        return false;
    }

    int min()
    {
            if(start==NULL)
                return NULL;
            else
            return start->d;
    }

    void odd()
    {
         for(node *p=start;p!=NULL;p=p->next)
             if(p->d%2==1)
                 cout<<p->d;
    }

    void even()
    {
         for(node *p=start;p!=NULL;p=p->next)
             if(p->d%2==0)
                 cout<<p->d;
    }
    
};
#endif /* LinkedList_h */
