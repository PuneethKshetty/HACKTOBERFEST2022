3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
86
87
88
89
90
91
#include<iostream>
#include<process.h>
 
using namespace std;
 
struct Node
{
int data;
Node *next;
}*top=NULL,*p;
 
Node* newnode(int x)
{
p=new Node;
p->data=x;
p->next=NULL;
return(p);
}
 
void push(Node *q)
{
if(top==NULL)
top=q;
else
{
q->next=top;
top=q;
}
}
 
void pop(){
if(top==NULL){
cout<<"Stack is empty!!";
}
else{
cout<<"Deleted element is "<<top->data;
p=top;
top=top->next;
delete(p);
}
}
 
void showstack()
{
Node *q;
q=top;
 
if(top==NULL){
cout<<"Stack is empty!!";
}
else{
while(q!=NULL)
{
cout<<q->data<<" ";
q=q->next;
}
}
}
 
int main()
{
int ch,x;
Node *nptr;
while(1)
{
cout<<"\n\n1.Push\n2.Pop\n3.Display\n4.Exit";
cout<<"\nEnter your choice(1-4):";
cin>>ch;
switch(ch){
case 1: cout<<"\nEnter data:";
cin>>x;
nptr=newnode(x);
push(nptr);
break;
case 2: pop();
break;
case 3: showstack();
break;
case 4: exit(0);
default: cout<<"\nWrong choice!!";
}
}
return 0;
}
