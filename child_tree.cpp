/*****************************
Description: ���ĺ��ӱ�ʾ�� 
******************************/

#include <iostream>
using namespace std;

#define SIZE 100
 
struct Child{         //��������ĺ��ӽ�� 
	int index;	 
	Child *next;
};

struct Node{		//��ͷ����ı�ͷ��� 
	int data;
	Child* child;
};

struct Tree{			//���ṹ 
	Node nodes[SIZE];
	int n;
};

void addNode(Tree& tree,int data,int parent){
	tree.nodes[tree.n].data=data;
	tree.nodes[tree.n].child=0;
	if(parent>-1){
		Child* ch = new Child;
		ch->index = tree.n;
		ch->next = 0; 
		Child*& temp=tree.nodes[parent].child;
		while(temp!=0){
			temp = temp->next;
		}
		temp = ch;
	}
	tree.n++;
}

int main(){
	Tree tree;
	tree.n=0;
	addNode(tree,0,-1);
	addNode(tree,2,0);
	addNode(tree,4,1);
	for(int i=0;i<tree.n;i++){
		cout<<tree.nodes[i].data<<endl;
	}
	return 0;
}

