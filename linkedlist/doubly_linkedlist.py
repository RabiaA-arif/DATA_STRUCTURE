class Node:
    def __init__(self,data):
        self.data=data
        self.next=None
        self.prev=None
        

class doubly_linkedlist:
    def __init__(self):
        self.head=None
        
    
    def insert_at_strat(self,data):
        new_node=Node(data)
        # print("hi")
        if self.head is None:
            self.head=new_node
        else:
            new_node.next=self.head
            self.head.prev=new_node
            self.head=new_node
        
    def insert_at_end(self,data):
        new_node=Node(data)
        if self.head is None:
            self.head=new_node
            return
        end=self.head
        while end.next:
            end=end.next
        end.next=new_node
        new_node.prev=end
    
    def insert_before_node(self,given_node_data,data):
        new_node=Node(data)
        if self.head is None:
            print("no node here for adding new node before that")
            return
        current=self.head
        while current:
            if current.data==given_node_data:
                new_node.next=current
                new_node.prev=current
            
            if current.prev:
                current.prev=new_node
            else:
                self.head=new_node
            current.prev=new_node
            return
        
            current=current.next
        print(f"node with value {given_node_data} not found")

        
    
    def print(self):
            temp = self.head
            if temp is None:
                print("The list is empty.")
                return
            while temp:
                print(temp.data, end=" <-> ")
                temp = temp.next
            print("None")

    
if __name__ == "__main__":
    doubly_linkedlist=doubly_linkedlist()
    doubly_linkedlist.insert_at_strat(11)
    doubly_linkedlist.insert_at_strat(12)
    doubly_linkedlist.insert_at_strat(13)
    doubly_linkedlist.insert_at_strat(14)
    doubly_linkedlist.insert_at_strat(15)
    doubly_linkedlist.insert_at_strat(16)
    
    print("node of linkedlist with value")
    doubly_linkedlist.print()
    
    
    print("adding node at the strat")
    doubly_linkedlist.insert_at_end(1)
    doubly_linkedlist.insert_at_end(2)
    doubly_linkedlist.insert_at_end(3)
    doubly_linkedlist.insert_at_end(4)
    doubly_linkedlist.insert_at_end(5)
    doubly_linkedlist.print()
    
    print("adding the node before given node data")
    doubly_linkedlist.insert_before_node(4,44)
    doubly_linkedlist.print()


