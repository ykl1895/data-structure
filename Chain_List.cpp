/********************************************
File:	Chain_list.cpp
Author:	MyGodot 
Date:	Oct 9,2018
Theme:	Chain List
********************************************/ 
#include<iostream>
using namespace std;

//����ڵ� 
struct Node{
	int data;
	Node *next;
};

//���嵥����
class  ChainList{
	public:
		void initList();
		void creatList(int datas[], int length);
		//bool listEmpty();
		void clearList();
		int getElem(int location);
		bool listInsert(int location, int element);
		bool listDelete(int location);
		int  listLen();
	private:
		Node *p; //ͷ��� 
};

//��ʼ��һ���ձ�
void ChainList::initList(){
	p=new Node;
	p->next=NULL;
	p->data=0; 
} 

//��������Ϊlength������
void ChainList::creatList(int datas[], int length){
	Node *m;
	m=p;
	p->data=length; //ͷ����������洢��
	for(int i=0;i<length;i++){
		Node *n = new Node;
		n->data=datas[i];
		m->next=n;
		m=m->next;
	} 
	m->next = NULL;
	m=nullptr;
} 
/*
�ж��Ƿ�Ϊ�ձ�
bool ChainList::listEmpty(){
	if(p->data==0&&p->next==NULL)
		return true;
	return false;
} 
*/
//�������
void ChainList::clearList(){
	Node *m;
	Node *n;
	m=p->next;
	while(m!=NULL){
		n=m->next;
		delete m;
		m=n;
	}
	p->next=NULL;
	p->data=0;
} 

//��ȡԪ�� 
int ChainList::getElem(int location){
	if(location>p->data)    //�жϳ�����Χ 
		return false;
	Node *q;
	q=p;
	for(int i=0;i<location;i++){
		q=q->next;
	}
	return q->data;

} 

//����Ԫ��
bool ChainList::listInsert(int location, int element){
	if(location>(p->data+1))
		return false;
		Node *m;
	Node *n=new Node;
	m=p;
	for(int i=0;i<location-1;i++){
		m=m->next;
	}
	if(location<(p->data+1)){
		n->data=element;
		n->next=m->next;
		m->next=n;
	}
	else{
		n->data = element;
		m->next=n;
		n->next=NULL;
	}
	p->data+=1;
	return true;
} 

//ɾ��Ԫ�� 
bool ChainList::listDelete(int location){
	if(location>p->data)
		return false;
	Node *m;
	Node *n;
	m=p;
	
	if(location<p->data){
		for(int i=0;i<location-1;i++){
		m=m->next;
	}
		n=m->next;
		m->next=m->next->next;
		delete n;
	}
	else{
		n=m->next;
		m->next=NULL;
		delete n; 
	}
	p->data-=1;
	return true;
} 

//��ȡ����
int ChainList::listLen(){
	return p->data;
} 

int main(){
	ChainList cha_list;
	int list_data,length;
	cout<<"����������: ";
	cin>>length;
	int datas[length];
	cout<<"��������"<<length<<"������: "<<endl; 
	for(int i=0;i<length;i++){
		cin>>list_data;
		datas[i]=list_data;	
	}	
	cha_list.initList();
	cha_list.creatList(datas,length);
	cout<<"����Ԫ�طֱ�Ϊ��"<<endl; 
	for (int i = 1; i <= cha_list.listLen();i++)
	{	 
		cout<<cha_list.getElem(i)<<" ";
	}
	cout<<endl<<"�ڵ�3��λ�ò���55"<<endl; 
	cha_list.listInsert(3,55);
	cout<<"��������Ϊ��"<<cha_list.listLen()<<endl;
	cout<<"������Ԫ�طֱ�Ϊ��"<<endl; 
	for (int i = 1; i <= cha_list.listLen();i++)
	{	 
		cout<<cha_list.getElem(i)<<" ";
	}
	cout<<endl<<"ɾ����2��λ�õ�ֵ"<<endl; 
	cha_list.listDelete(2);
	cout<<"��������Ϊ��"<<cha_list.listLen()<<endl;
	cout<<"������Ԫ�طֱ�Ϊ��"<<endl; 
	for (int i = 1; i <= cha_list.listLen();i++)
	{	 
		cout<<cha_list.getElem(i)<<" ";
	}
	cout<<endl<<"��ѯ�ڶ���λ�õ�ֵ��"<<cha_list.getElem(2)<<endl;
	cout<<"ɾ����������"<<endl;
	cha_list.clearList();
	cout<<"��������Ϊ��"<<cha_list.listLen()<<endl;	
}










 
