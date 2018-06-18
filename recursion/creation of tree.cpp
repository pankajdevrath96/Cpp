#include "iostream"
using namespace std;

struct node {
    node *left;
    int info;
    node *right;
};
node *tree(node *start,node *q,node *t,int i)
{
    if(start==NULL)
        {
        node *p;
        p=new node();
        p->info=i;
        //cout<<i;
        start=p;
        }
    else if(t==NULL)
        {
        node *p;
        p=new node();
        p->info=i;
        if(q->info>i)
            q->left=p;
        else
            q->right=p;
           
        }
    else
        {
        q=t;
        if(t->info>i)
            t=t->left;
        else
            t=t->right;
        tree(start, q, t, i);
        }
    return start;
}

void preorder(node *p)
{
    if(p!=NULL)
        {
        cout<<p->info<<" ";
        preorder(p ->left);
        preorder(p->right);
        }
        
    
}

int main()
{
    node *p,*start,*q,*t,*s;
    char ch;
    s=NULL;
    start =NULL;
    q=NULL;
    int info;
    do {
        cin>>info;
        t=s;
        start=s;
        s=tree(start,q,t,info);
        
        cout<<"press y if u want to enter another element"<<endl;
        cin>>ch;
    } while (ch=='y');
   // cout<<s->info;
    p=s;
    
    preorder(p);
    
    
}
