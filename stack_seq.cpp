/******************************************
File:	stack_seq.cpp
Author:	MyGodot
Date:	Oct 11,2018
Theme:	Code description stack
******************************************/ 
#include<iostream>
using namespace std;

#define MAXSIZE 6

struct Stack{
	int data[MAXSIZE];
	int top; //ջ��ָ�� 
	// int top2;	 
};

//��ʼ��ջ 
bool init_stack(Stack &S){
    S.top=-1;
	for(int i=0;i<MAXSIZE;i++){
		S.data[i]=i+3;
		S.top++;
	}
	return true;
} 

//��ջ����
bool push(Stack &S, int x){
	if(S.top==MAXSIZE-1) return false;
	S.top++;
	S.data[S.top]=x;
	return true;
}

/*��ջ����ռ��������ջʵ�� 
bool push(Stack &S, int x,int num){
	if(S.top+1==S.top2) return false;
	if(num==1){
		S.data[S.top++]=x;
	}
	if(num==2){
		S.data[S.top2--]=x;
	} 
	return true;
}
*/

//��ջ����
int pop(Stack &S){
	int e;
	if(S.top==-1) return false;
	e=S.data[S.top];
	S.top--;
	return e;
}

int main(){
	Stack S;
	init_stack(S);
	cout<<"��ʼջԪ��Ϊ: "<<endl; 
	int n=sizeof(S.data)/sizeof(S.data[0]);
	while(n--){
		cout<<S.data[n]<<" "; 
	}
	cout<<endl<<"������������ջԪ��: "<<endl;
	cout<<pop(S)<<" ";
	cout<<pop(S);
	cout<<endl<<"55��ջ��: "<<endl;
	push(S,55);
	cout<<"��ջԪ��Ϊ: "<<endl; 
	
	while(S.top!=-1){
		cout<<pop(S)<<" "; 
	}
}
