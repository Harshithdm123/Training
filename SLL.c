
#include <stdio.h>
#include <stdlib.h>
struct NODE
{
    int data;
    struct NODE *next;
    
};

void insert(struct NODE **head_ref,int new_data){
    struct NODE*new_node=(struct NODE*)malloc(sizeof(struct NODE));
    
    new_node->data=new_data;
    
    new_node->next = (*head_ref);
    
    (*head_ref)=new_node;
    
}
void insertend(struct NODE **head_ref,int new_data){
    struct NODE *new_node=(struct NODE*)malloc(sizeof(struct NODE));
   struct NODE *temp=*head_ref;
    new_node->data=new_data;
      
    new_node->next = NULL;
    
    if(head_ref==NULL){
        *head_ref=new_node;
        return;
        
    }
    while(temp->next!=NULL){
        temp=temp->next;
        
    }
    temp->next=new_node;
}
int insertAfter(struct NODE **head_ref,int key,int new_data){
    // if(prev_node==NULL){
    //     printf("the");
        
    // }
    struct NODE *new_node=(struct NODE*)malloc(sizeof(struct NODE));
    struct NODE *prev=*head_ref;
    new_node->data=new_data;
    
    new_node->next=NULL;
    
    
    if(prev->next==NULL)
    {
        prev->next=new_node;
        
    }
    while(prev->next!=NULL)
    {
        if(prev->next==key){
            new_node->next=prev->next;
            
            prev->next=new_node;
           
        }
        prev=prev->next;
        
    }
    if(prev->data!=key){
        printf("not found");
        return;
    }
    
}

int delete(struct NODE *head_ref,int key ){
      struct NODE *temp=head_ref;
      struct NODE *prev=head_ref;
       
      if(head_ref==NULL){
          return;
}
while(temp->data!=NULL&&temp->next!=NULL){
   temp=prev;
    
     temp=temp->next; 
     if(temp->data==key){
       prev->next=temp->next;
         free(temp);
         return;
     }
}

}
void print(struct NODE *head_ref){
  struct NODE *temp=head_ref;
  while(temp!=NULL){
      printf("%d->", temp->data);
      temp=temp->next;
      
  }
    printf("\n");
    
}



int main()
{
    struct NODE *head_ref=NULL;
    
    
     insert(&head_ref,50);
     insert(&head_ref,40);
     insert(&head_ref,60);
     print(head_ref);
     insertend(&head_ref,400);
     print(head_ref);
     insertAfter(&head_ref,50,50);
     print(head_ref);
    delete(head_ref,40);
    print(head_ref);
    

    return 0;
}
