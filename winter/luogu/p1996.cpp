#include<iostream>
#include<cstdio>
using namespace std;
int m, n;

struct Node{
	int data;
	Node *next;
} *head, *k, *tail, *temp;

int main(){
	scanf("%d%d",&m,&n);
	head = new Node;
	head -> next = NULL;
	tail = head;
	for(int i = 1; i <= m; i++){
		k = new Node;
		k -> data = i;
		k -> next = NULL;
		tail -> next = k;
		tail = k;
	}
	k = head -> next;
	tail -> next = head -> next;
	for(int i = 1; i <= m; i++){
		for(int j = 1; j < n - 1; j++){
			k = k -> next;
		}
		printf("%d ",k -> next -> data);
		temp = k -> next;
		k -> next = temp -> next;
		k = k -> next;
	}
	return 0;
}