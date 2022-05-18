Algorithm push
//
//
//
Procedure: PUSH (STACK,TOP,MAX,ITEM)
 //This procedure pushes an ITEM onto stack.
1.	[Stack already full]
 If TOP=MAX, then Print: UNDERFLOW, and Return.
2.	Set TOP: =TOP+1 [Increase TOP by 1]
3.	SetSTACK [TOP]:=ITEM. [Insert ITEM in new TOP position]
4.	Return.

Algorithm pop
Procedure: POP (STACK,TOP,ITEM)
 //This procedure Deletes the top element of STACK and assigns it to the variable ITEM.
step 1.	[Stack Empty or Not]
 If TOP=0, then Print: OVERFLOW, and Return.
step 2.	Set ITEM: =STACK [TOP]. [Assigns Top element to ITEM] 
step 3.	Set TOP: =TOP-1 [Decrease TOP by 1]
step 4.	Return.


//Program

#include<iostream.h>
#include<conio.h>
#include<process.h>
class stack
{
int s[10],n,top,ele,i;
public:
stack()
{
top=-1;
}
void push();
void dis();
int pop();
int peep();
void change();
};
void stack::push()
{
if(top>=2)
cout<<"\nStack is overflow:";
else
{
cout<<"\nEnter element:";
cin>>ele;
top++;
s[top]=ele;
}
}
void stack::dis()
{
cout<<"\nElements in stack are:\n";
for(i=top;i>=0;i--)
cout<<s[i]<<"\t";
}
int stack::pop()
{
if(top==-1)
{
cout<<"\nUnderflow";
return 0;
}
else
return (s[top--]);
}
int stack::peep()
{
cout<<"\nEnter position:";
cin>>i;
if((top-i+1)<0)
{
cout<<"\nUnderflow";
return 0;
7
}
else
return (s[top-i+1]);
}
void stack::change()
{
cout<<"\nEnter position ";
cin>>i;
if((top-i+1)<0)
{
cout<<"\nUnderflow";
}
else
{
int n;
cout<<"\nEnter element:";
cin>>n;
s[top-i+1]=n;
}
}
void main()
{
clrscr();
stack s;
int ch;
cout<<"\n1. Push 2.Display 3.Pop 4.Peep 5.Change 6.Exit\n";
while(ch!=6)
{
cout<<"\nEnter ch :";
cin>>ch;
switch(ch)
{
case 1: s.push(); break;
case 2: s.dis(); break;
case 3: int n=s.pop();
if(n>0)
cout<<"\nPop ele is "<<n;
break;
case 4: int m=s.peep();
if(m>0)
cout<<"\nPeep ele is "<<m;
break;
case 5: s.change(); break;
case 6: exit(0);
}
}
getch();
}
