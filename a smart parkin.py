# Python program to demonstrate sorting by user's 
# choice 

# function to return the second element of the 
# two elements passed as the parameter 
def sortSecond(val):
	return val[1]

# list1 to demonstrate the use of sorting 
# using using second key 
	       list1 = [(1,2),(3,3),(1,1)]

# sorts the array in ascending according to 
# second element 
	               list1.sort(key=sortSecond)
	               print(list1)

# sorts the array in descending according to 
# second element 
	               list1.sort(key=sortSecond,reverse=True)
	               print(list1)

# OUTPUT
# [(1, 1), (1, 2), (3, 3)]
# [(3, 3), (1, 2), (1, 1)]

#######################################3




# Python3 program to demonstrate working of heapq 

	               from heapq import heappop, heappush, heapify

# Creating empty heap 
	               heap = []
	                      heapify(heap)

# Adding items to the heap using heappush 
# function by multiplying them with -1 
	                      heappush(heap, -1 * 10)
	                      heappush(heap, -1 * 30)
	                      heappush(heap, -1 * 20)
	                      heappush(heap, -1 * 400)

# printing the value of maximum element 
	                      print("Head value of heap : "+str(-1 * heap[0]))

# printing the elements of the heap 
	                      print("The heap elements : ")
                      for i in heap:
	                      print(-1 * i, end = ' ')
		                      print("\n")

		                      element = heappop(heap)

# printing the elements of the heap 
		                                print("The heap elements : ")
                                for i in heap:
		                                print(-1 * i, end = ' ')


########################

			                                from queue import PriorityQueue

			                                q = PriorityQueue()

			                                    q.put((4, 'Read'))
			                                    q.put((2, 'Play'))
			                                    q.put((5, 'Write'))
			                                    q.put((1, 'Code'))
			                                    q.put((3, 'Study'))

			                                    while not q.empty():
				                                    next_item = q.get()
				                                            print(next_item)


#  OUTPUT 
# (1, 'Code')
# (2, 'Play')
# (3, 'Study')
# (4, 'Read')
# (5, 'Write')

############################
