/*******************************************************
File:   Seq_List.cpp
Author: MyGodot
Date:	 Oct 8,2017 
Theme:  Sequence List	
********************************************************/ 
#include<iostream> 
using namespace std;


#define MAXSIZE 1024

// 
typedef struct{
	int data[MAXSIZE];//����洢����Ԫ�� 
	int length;//���Ա�ǰ���� 
} Seque_List;
//��ʼ�� 
bool init_list(Seque_List &L){
	L.length=0;
	int list_data,i=0;
	while(cin>>list_data){
		L.data[i]=list_data;
		L.length++;
		i++;
	}
	return true;
}

//��ӡ����
bool list_print(Seque_List L){
	cout<<"The length of List: "<<L.length<<endl;
	cout<<"The elements of List: ";
	for(int i=0;i<L.length;i++){
		cout<<L.data[i]<<" ";
	}
	return true;
}

//�������
bool list_insert(Seque_List &L,int x,int i){
	if(L.length>=MAXSIZE||i>=MAXSIZE) return false;
	else{
		if(i<0||i>=L.length) return false;
		else{
			for(int j=L.length;j>i;j--){
				L.data[j]=L.data[j-1];
			}
			L.data[i]=x;
			L.length+=1;
		}
		
	}
}

//ɾ������ 
bool list_delete(Seque_List &L,int i){
	if(i<0||i>=L.length) return false;
	else{
		for(int j=i;j<L.length;j++){
			L.data[j]=L.data[j+1];
		}
		L.length-=1;
	}
}
int main(){
	Seque_List L;
	init_list(L);
	list_print(L);
	list_insert(L,56,4);
	cout<<endl;
	list_print(L);
	list_delete(L,4);
	cout<<endl;
	list_print(L);
	system("pause");
	return 0;
}
