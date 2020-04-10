#include<bits/stdc++.h>
using namespace std;

class MinStack {
public:
    /** initialize your data structure here. */
	struct Node{
		int val;
		Node *next;
		int minEle;
		Node(int x): val(x), next(NULL) , minEle(INT_MAX){}
	};
	Node *head;
    MinStack() {
        head=NULL;
    }
    
    void push(int x) {
        if(head==NULL){
			Node *temp=new Node(x);
			temp->minEle=x;
			head=temp;

		}
		else{
			Node *temp=new Node(x);
			Node *temp2=head;
			temp->next=temp2;
			temp->minEle=min(x,temp2->minEle);
			head=temp;
		}
		
    }
    
    void pop() {
        if(head==NULL)
			return;
		else{
			Node *temp2=head;
			head=temp2->next;
			free(temp2);
		}
    }
    
    int top() {
        return head->val;
    }
    
    int getMin() {
        return head->minEle;
    }
};

int main(){
	MinStack* obj = new MinStack();
   obj->push(-2);
   obj->push(0);
   obj->push(-3);
   cout<<obj->getMin()<<"\n";
   obj->pop();
   cout<<obj->top()<<"\n";
   cout<<obj->getMin()<<"\n";
    
}