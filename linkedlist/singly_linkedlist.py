#  creating node for linkedlist
class Node :
    def __init__(self ,data):
        self.data=data
        self.next=None
        


# linked list class 
class Linkedlist:
    def __init__(self):
        self.head=None
        
        
        #  appendenign a new node here
        
    def append(self,data):
        new_node=Node(data)
        if self.head is None:
            self.head=new_node
        else:
            current=self.head
            while current.next:
                current=current.next
            current.next=new_node
    
    # coutns nodes
    
    def countNode(self):
        num=0
        current=self.head
        while current:
            num+=1
            current=current.next
        return num
    #  inserting node at strat
    def insert_node_strat(self,data):
        new_node=Node(data)
        new_node.next=self.head
        self.head=new_node
        
    # location of last nodes
    
    def find_last_node(self):
        if self.head is None:
            return None
        current=self.head
        while current.next:
            current=current.next
        return current
    

    def delete_node(self,key):
        current =self.head
        if current is not None and current.data == key:
            self.head=current.next
            return
        prev=None
        while current is not None:
            if current.data==key:
                break
            prev=current
            current=current.next
            
            if current is None:
                print(f"node with value{key}")
                return
            
            prev.next=current.next
            
    
    def print_node(self):
        current=self.head
        while current:
            print(current.data,end="->")
            current=current.next
        print("None")
    
if __name__== "__main__":
    Linkedlist=Linkedlist()
    Linkedlist.append(1)
    Linkedlist.append(2)
    Linkedlist.append(3)
    Linkedlist.append(4)
    Linkedlist.append(5)
    Linkedlist.append(6)
    Linkedlist.append(7)
    Linkedlist.append(7)
    Linkedlist.append(9)
    
    count=Linkedlist.countNode()
    print( f"total numbers of nodes {count}")
    
    print("the value of nodes")
    Linkedlist.print_node()
    
    
    Linkedlist.insert_node_strat(10)
    Linkedlist.insert_node_strat(11)
    Linkedlist.insert_node_strat(12)
    Linkedlist.insert_node_strat(13)
    print("vale of node after inserting at the strat")
    Linkedlist.print_node()
    
    print("last node of linkedlist")
    # Linkedlist.find_last_node()
    last_node=Linkedlist.find_last_node()
    if last_node:
        print(f"value of last node  {last_node.data}")
    else:
        print("empty")
        
    
    key = 10
    print(f"\nDeleting node with value {key}:")
    Linkedlist.delete_node(key)
    Linkedlist.print_node()