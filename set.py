set1=set()
n=int(input("Enter the number of elements want to insert in Set A="))
for i in range(n):
    element=int(input("Enter the elements="))
    set1.add(element)

set2=set()
n=int(input("Enter the elements want to insert in Set B="))
for i in range(n):
    element=int(input("Enter the elements="))
    set2.add(element)

print("Set A=",set1)
print("Set B=",set2)

def contains(set,element):
    return element in set

choice=1
while(choice!=0):
    print("\n1.Add\n2.Remove\n3.Contains\n4.Size\n5.Iterator\n6.Intersection\n7.Union\n8.Difference\n9.Subset\n10.Exit")
    choice=int(input("Enter your Choice="))
    if choice==1:
        a=1
        while(a):
            n=int(input("Enter the element in Set 1 or Set 2="))
            if n==1:
                x=int(input("Enter the element to insert in set A="))
                set1.add(x)
                print("Updated Set A=",set1)
            else:
                y=int(input("Enter the element to add in Set B="))
                set2.add(y)
                print("Updated Set B=",set2)
            a=int(input("Press 1 to insert more or 0 to exit"))  

    elif choice==2:
        x=int(input("Enter the element to remove from set A="))
        set1.remove(x)
        print("Updated Set A=",set1)
    elif choice==3:
        x=int(input("Enter the element which you want to check in Set A="))
        print(contains(set1,x))
    elif choice==4:
        print("Size of set A=",len(set1))
    elif choice==5:
        iterator=iter(set1)
        for element in iterator:
            print(element)
    elif choice==6:
        print("Intersection=",set1.intersection(set2))
    elif choice==7:
        print("Union=",set1.union(set2))
    elif choice==8:
        print("Difference=",set1.difference(set2))#elements present in set A but not in set B
    elif choice==9:
        print("Subset=",set1.issubset(set2))#returns true if the elements of set A are present in Set B and False otherwise
    elif choice==10:
        exit()