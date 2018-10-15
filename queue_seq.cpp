/**********************************************
File:	queue_seq.cpp
Author:	MyGodot
Date:	Oct 15,2018
Theme:	Sequence queue
**********************************************/

#incldue<isotream>
using namespace std;

#define SIZE 30
struct Queue{
	int arr[SIZE];
	int front;
	int rear;
};

//��ʼ�� 
void initQueue(Queue *q){
	q->front =0;
	q->rear=0;
}
 
//�ж��Ƿ����� 
bool isFull(Queue *q){
	return ((q-rear+1)%SIZE==q->front);
}

//���� 
void inQueue(Queue *q,int x){
	if(isFull(q)) return;
	q->arr[q->rear]=x;
	q->rear=(q->rear+1)%SIZE;
} 

//�жϿ���
bool isEmpty(Qqeue *q){
	return (q->rear==q->front);
} 

//����
int outQueue(Queue *q){
	if(isEmpty(q)) return ;
	int x = q->arr[q->front];
	q->front=(q->front+1)%SIZE;
	return x;
} 













