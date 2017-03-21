This post presents a new algorithm called DeQ insertion sort that enhances the performance of bubble sort and insertion sort by reducing the swaps to zero and decreasing the number of comparison. The result from the implementation of the algorithm compared with insertion and bubble sort showed that the algorithm performed better than the other in the worst case scenario.
In general O(n^2) sorting algorithm runs slower than O(nLogn) therefore DeQ insertion algorithm sort reduces the worst case of insertion and bubble sort to the complexity of O(n) and general average case complexity O(n^1.7).



**Working of proposed
algorithm**

** **

**Step 1 :** We start with first element and
push if Queue is empty.

**Step 2 :** For every next element check if
it is smaller than the front of queue and greater than the rear of queue.            

**Step 3 :** If it is smaller,
and min stack is empty, push at front of queue

if min stack is not empty,

and if element is less than top of min stack,

then apply pop operation on min stack and push at front of queue till top of min stack is
greater than element or min stack is empty.

push element in min stack

else if element is greater or equal to top of min stack

then push element in min stack    

If it is greater,

and max stack is empty, push at rear of queue

If max stack is not empty,

and if element is greater than top of max stack,

then apply pop operation on max stack and push at rear of queue till top of max stack is
smaller than element or max stack is empty.

push element in max stack

else if max is greater than equal to element

then push element in max stack

If element is greater than front of queue and less than rear of queue,

then push front of queue in min stack and rear of queue in max stack until element is
greater than queue front and less than queue rear.

            

If queue is empty or element is less than equal to front of queue,

push element in front of queue 

Else

push element in rear of queue

 

Repeat **Step 3** until last element is processed

 

**Step 4 :** if min stack is not empty.

push all elements of min stack in front of queue

if max stack is not empty

push all elements of max stack in rear of queue
