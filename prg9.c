#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
struct node
{
   int coef;
   int pow_x;
   int pow_y;
   int pow_z;
struct node*next;
};
typedef struct node*polyptr;
polyptr insertitem(polyptr poly,int coef,int pow_x,int pow_y,int pow_z)
{
   polyptr cur
   polyptr newNode=(polyptr)malloc(sizeof(struct node));
   newNode->coef=coef;
   newNode->pow_x=pow_x;   
   newNode->pow_y=pow_y;   
   newNode->pow_z=pow_z; 
   newNode->next=NULL;
   cur=poly;
   while(cur->next!=poly)
   {
      cur=cur->next;
   }
   cur->next=newNode;
   newNode->next=poly;
   return poly;
}  
void display(polyptr poly)
{
   if(poly->next=poly)
   {
      printf("polynomial is empty\n");
      return;
   }
   polyptr cur=poly->next;
   do
   {
      printf("%dx^%dy^%dz^%d",cur->coef,cur->pow_x,cur->pow_y,cur->pow_z);
      cur=cur->next;
      if(cur!=poly)
      {
         printf("+");
      }
   }while(cur!=poly);
}
int evaluate(polyptr poly,int x,int y,int z)
{
   int result=0;
   if(poly->next==poly)
   {
      return result;
   }
   polystr cur=poly->next;
   do
   {
      int val=cur-.poly*pow(x,cur->pow_x)*pow(y,cur->pow_y)*pow(z,cur->pow_z);
      result=result+val;
      cur=cur->next;
   }
   while(cur!=poly);
   return result;
}
bool matchterm(polyptr p1,polyptr p2)
{
   bool bmatches=true;
   if(p1->pow_x!=p2->pow_x)
   bmatches=false;
   if(p1->pow_y!=p2->pow_y)
   bmatches=false;
   if(p1->pow_z!=p2->pow_z)
   bmatches=false;
   return bmatches;
}  
polyptr addpoly(polyptr poly1,polyptr poly2,polyptr polysum)
{
   polyptr cur1=poly1->next;
   polyptr cur2=poly->next;
   do
   {
      polysum=inserttemp(polysum,cur1->coef,cur1->pow_x,cur1->pow_y,cur1->pow_z);
      cur1=cur1->next;
}while(cur1!=poly1);
do 
{
   cur1=polysum->next;
   bool matchfound=false;
   do
   {
      if(matchtemp(cur1,cur2))
      {
         
          
      
       
         
       
      
        
