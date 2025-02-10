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
        
    # def print(self):
    #     temp=self.head
    #     # self.temp=self.head
    #     while temp:
    #         print(temp.data, end="->")
    #         temp=temp.next
    #     print("None")
        
    
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
    


