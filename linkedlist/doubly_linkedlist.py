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

        
    

        
    # def delete_node(self,key):
    #     if self.head is None:
    #         print("no node hee to be delete")
    #         return
    #     temp=self.head
    #     while temp is not None:
    #         if temp.data==key:
    #             break
    #         temp=temp.next
        
    #     if temp is None:
    #         print(f"node with value {key} is not found")
    #         return
    #     if temp ==self.head:
    #         self.head=temp.next
    #         if self.head is not None:
    #             self.head.prev=None
    #     else:
    #         if temp.next is not None:
    #              if temp.next.prev is not None:
    #                  temp.next.prev=temp.next
                   
    #     temp=None
    #     print(f"none with value {key} is deleted")
        
     # Function to delete a node by value
     
    def reverse_node(self):
        temp=None
        current=self.head
        
        while current is not None:
            temp=current.prev
            current.prev=current.next
            current.next=temp
            current=current.prev
        if temp is not None:
            self.head=temp.prev
            
    def delete_node(self, key):
        # If the list is empty
        if self.head is None:
            print("The list is empty. Nothing to delete.")
            return

        # Find the node to delete
        temp = self.head
        while temp is not None:
            if temp.data == key:
                break
            temp = temp.next

        # If the node was not found
        if temp is None:
            print(f"Node with value {key} not found.")
            return

        # If the node to delete is the head node
        if temp == self.head:
            self.head = temp.next
            if self.head is not None:
                self.head.prev = None
        else:
            # If the node to delete is not the head node
            if temp.next is not None:
                temp.next.prev = temp.prev
            if temp.prev is not None:
                temp.prev.next = temp.next

        # Free the memory of the deleted node (optional in Python due to garbage collection)
        temp = None
        print(f"Node with value {key} deleted.")
            
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
    
    # print("adding the node before given node data")
    # doubly_linkedlist.insert_before_node(1,44)
    # doubly_linkedlist.insert_before_node(3,45)
    # doubly_linkedlist.insert_before_node(4,24)
    # doubly_linkedlist.print()
    print("revers the linkedlist")
    doubly_linkedlist.reverse_node()
    doubly_linkedlist.print()
    
    print("deleting the node")
    doubly_linkedlist.delete_node(1)
    doubly_linkedlist.print()
    
    doubly_linkedlist.delete_node(5)
    doubly_linkedlist.print()

