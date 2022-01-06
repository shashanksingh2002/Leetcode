class Node{
  public:
  int data;
  Node* next;
};
class MyQueue {
Node* head;
Node* tail;
public:
    MyQueue() {
        head=NULL;
        tail=NULL;
    }
    
    void push(int x) {
       Node* newnode=new Node();
       newnode->data=x;
        if(head==NULL){
          head=newnode;
          tail=newnode;
        }
         else{
           tail->next=newnode;
           tail=tail->next;
         }
    }
    
    int pop() {
        int ans=head->data;
        head=head->next;
        return ans;
    }
    
    int peek() {
        return head->data;
    }
    
    bool empty() {
        if(head==NULL){
          return true;
        }
      return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
