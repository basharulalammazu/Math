def main():
    fSize = int(input("Size of first set: "))
    set1 = [] #Declear array
    
    # first set user input
    for i in range(fSize):
        set1.append(int(input(f"Element {i+1}: ")))
    
    
    
    # Second set
    lSize = int(input("Size of secod set: "))
    set2 = [] 
    
    #secod set user input
    for i in range(lSize):
        set2.append(int(input(f"Element {i+1}: ")))
        
    union_set = []
    
    # Insert elements of set1 into union_set
    for element in set1:
        if element not in union_set:
            union_set.append(element)
            
    
    # Insert elements of set2 into union_set
    for element in set2:
        if element not in union_set:
            union_set.append(element)
        
    
    print(f"Union set: {union_set}")
    
    

if __name__ == "__main__":
    main()
