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
        
    common_set = []
    
    # Insert elements of set1 into union_set
    for set1Element in set1:
        for set2Element in set2:
            if (set1Element == set2Element):
                common_set.append(set1Element)
            
    

        
    
    print(f"Common set: {common_set}")
    
    

if __name__ == "__main__":
    main()
