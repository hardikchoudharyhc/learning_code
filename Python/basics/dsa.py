""" Stack - 'LIFO' principle, Operation that can be performed in stacks:
Push: Adds a new element on the stack.
Pop: Removes and returns the top element from the stack.
Peek: Returns the top (last) element on the stack.
isEmpty: Checks if the stack is empty.
Size: Finds the number of elements in the stack. """

stack = []

# Push
stack.append('A')
stack.append('B')
stack.append('C')
print("Stack: ", stack)

# Peek
topElement = stack[-1]
print("Peek: ", topElement)

# Pop
poppedElement = stack.pop()
print("Pop: ", poppedElement)

# Stack after Pop
print("Stack after Pop: ", stack)

# isEmpty
isEmpty = not bool(stack)
print("isEmpty: ", isEmpty)

# Size
print("Size: ",len(stack)) 

""" Queue - 'FIFO' principle, Operations:-
Enqueue: Adds a new element to the queue.
Dequeue: Removes and returns the first (front) element from the queue.
Peek: Returns the first element in the queue.
isEmpty: Checks if the queue is empty.
Size: Finds the number of elements in the queue. """

queue = []

# Enqueue
queue.append('A')
queue.append('B')
queue.append('C')
print("Queue: ", queue)

# Peek
frontElement = queue[0]
print("Peek: ", frontElement)

# Dequeue
poppedElement = queue.pop(0)
print("Dequeue: ", poppedElement)

print("Queue after Dequeue: ", queue)

# isEmpty
isEmpty = not bool(queue)
print("isEmpty: ", isEmpty)

# Size
print("Size: ", len(queue))