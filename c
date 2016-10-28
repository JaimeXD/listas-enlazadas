#include <stdio.h>
#include <stdlib.h>
struct nodo
{
  int val;
  struct nodo *next;
};
int imprimir(head)
{
  struct nodo *t;
  t=head;
  while(t!='\0')
  {
    printf("%d",t->val);
    t=t->next;
  }
}
int crear(int n)
{
  struct nodo *head,*prev,*cur;
  int i;
  head =malloc(sizeof(struct nodo));
  head->val=1;
  prev=head;
  for(i=2;i<=n;i++)
  {
    cur=malloc(sizeof(struct nodo));
    cur->val=i;
    prev->next=cur;
    prev=cur;
  }
  prev->next='\0';
  imprimir(head);

}
int eliminar(int a)
{
    struct nodo *prev,*head,*cur;
    prev = head;
    cur = head -> next;
    while (cur != '\0')
    {
        if (cur->val == a)
        {
            prev -> next = cur -> next;
            free(cur);
            break;
        }
        prev = cur;
        cur = cur -> next;
    }
    imprimir(head);
}
void insertarfirst(int n)
{
    struct nodo *t,*head,*prev,*cur;
    t=malloc(sizeof(struct nodo));
    t->val=n;
    prev=t;
    prev->next=head;
    imprimir(head);
    
}
void insertarmiddle(int n)
{
    struct nodo *a,*head,*prev,*cur;
    a=malloc(sizeof(struct nodo));
    a->val=n;
    int i,n;
    for(i=0;head->next!='\0';++i)
        n++;
    
}
void insertorder(int n)
{

}
void concatenate()
{
  
}

main()
{
  int n=6;
  int a=crear(n);
  printf("\n",a);
  printf("\n",eliminar(4));
  insertarfirst(9);


}
