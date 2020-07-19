#include <stdio.h>
#include <stdlib.h>
typedef enum {NOT,OR,AND,TRUE,FALSE,INITIALIZE} logical;

typedef struct node* treePointer;
typedef struct{
    treePointer leftChild;
    logical data;
    short int value;
    treePointer rightChild;
}node;

typedef struct Link* LinkPointer;
typedef struct{
    treePointer pointer;
    LinkPointer Linker;
}Link;
treePointer Create(int num){
    treePointer p1;

    p1=malloc(sizeof(node));
    p1->leftChild=NULL;
    p1->rightChild=NULL;
    p1->data=num;
    p1->value=-1;
    return p1;
}

void connect(treePointer left,treePointer middle,treePointer right){
    middle->left=left;
    middle->right=right;

    return;
}
int main(){
    treePointer root;//tree의 root를 가르키는 pointer

    treePointer node1=NULL;
    treePointer node2=NULL;
    treePointer node3=NULL;
    treePointer node4=NULL;
    treePointer node5=NULL;
    treePointer node6=NULL;
    treePointer node7=NULL;
    treePointer node8=NULL;
    treePointer node9=NULL;
    treePointer node10=NULL;
    treePointer node11=NULL;
    treePointer node12=NULL;
    int x1,x2,x3;

    /* node1~12까지 초기화*/
    /*variable:x1,x2,x3*,\N */
    /*x1->node7,node12
      x2->node11
      x3->node6,node10*/
    LinkPointer variable[3]={NULL,NULL,NULL};
    variable[0]=malloc(sizeof(Link));
    variable[0]->pointer=node7;

    variable[0]->Linker=malloc(sizeof(Link));
    variable[0]->Linker->pointer=node12;
    variable[0]->Linker->Linker=NULL;

    variable[1]=malloc(sizeof(Link));
    variable[1]->Pointer=node11;
    variable[1]->Linker=NULL;

    variable[2]=malloc(sizeof(Link));
    variable[2]->pointer=node6;

    variable[2]->Linker=malloc(sizeof(Link));
    variable[2]->Linker->pointer=node10;
    variable[2]->Linker->Linker=NULL;
    /*변수가 data로 들어가는 node들에 대한 Pointer생성*/

    printf("x1 x2 x3: ? ? ?\n");
    scanf("%d %d %d",&x1,&x2,&x3);

    node1=Create(OR);
    node2=Create(OR);
    node3=Create(AND);
    node4=Create(AND);
    node5=Create(AND);
    node6=Create(INITIALIZE);
    node7=Create(INITIALIZE);
    node8=Create(NOT);
    node9=Create(NOT);
    node10=Create(INITIALIZE);
    node11=Create(INITIALIZE);
    node12=Create(INITIALIZE);
    /*node1~12 까지 공간 할당및 element초기화*/

    connect(node2,node1,node3);
    connect(node4,node2,node5);
    connect(node7,node4,node8);
    connect(NULL,node8,node11);
    connect(node9,node5,node10);
    connect(NULL,node3,node6);



    return 0;
}

