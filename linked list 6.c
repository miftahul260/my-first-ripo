#include<stdio.h>
#include<stdlib.h>
  struct node{
  	int data;
  	struct node* next;
  };
  struct node* makenode(int data){
  struct node *tmp=malloc(sizeof(struct node));
  tmp->data=data;
  tmp->next=NULL;
  return tmp;
  }
  void output(struct node *a){
  	while(a!=NULL){
  		printf(" %d ->", a->data);
  		a=a->next;
	  }
	  if(a==NULL)
	  printf("NULL");
  }
  struct node* reverse(struct node* head){
  	struct node* prev=NULL;
  	struct node* forw=NULL;
  	while(head!=NULL){
  		forw=head->next;
  		head->next=prev;
  		prev=head;
  		head=forw;
	  }
	  head=prev;
	  return head;

  }
  int main(){
  	struct node *p=makenode(56);
  	struct node *q=makenode(23);
  	p->next=q;
  	struct node *r=makenode(67);
  	q->next=r;
  	p=reverse(p);
  	output(p);
  	return 0;
  }
