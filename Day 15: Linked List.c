#include <stdlib.h>
#include <stdio.h>	
typedef struct Node
{
    int data;
    struct Node* next;
}Node;

Node* insert(Node *head,int data)

{
    //Complete this function
    struct Node *ll, *it;
    ll=(struct Node *)malloc(sizeof(struct Node));
    ll->data=data;
    ll->next=NULL;
    
    if(head==NULL)
        {
        head=ll;
    }
    else
        {
        it=head;
        while(it->next)
            it=it->next;
        it->next=ll;
    }
    return head;
}

void display(Node *head)
{
	Node *start=head;
	while(start)
	{
		printf("%d ",start->data);
		start=start->next;
	}
}
int main()
{
	int T,data;
    scanf("%d",&T);
    Node *head=NULL;	
    while(T-->0){
        scanf("%d",&data);
        head=insert(head,data);
    }
  display(head);
		
}
