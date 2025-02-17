class Node:
    def __init__(self,new_data):
        self.data=new_data
        self.next=None
        
class Stack:
        def __init__(self):
            self.head=None
        
        
        def is_empty(self):
            return self.head is None
        
        
        def push(self,new_data):
            new_node=Node(new_data)
            new_node.next=self.head
            self.head=new_node
            
        def pop(self):
            temp=self.head
            temp.next=self.head.next
            del temp
            
        def peek(self):
            if not self.is_empty():
                return self.head.data
            else:
                print("stack is empty")


if __name__=="__main__":
    stack=Stack()
    stack.push(11)
    stack.push(123)
    stack.push(12)
    print(stack.pop())
    # stack.push(1223)
    print(stack.peek())
    
    
    