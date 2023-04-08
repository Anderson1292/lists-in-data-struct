# Lists in Data Struct

To represent a group of data, we have already seen that we can use a vector in C.
vector is the most primitive way to represent several grouped elements. For
simplify the discussion of the concepts that will be presented now, let's assume that
we have to develop an application that must represent a group of values
whole. To do so, we can declare a vector by choosing a maximum number of
elements.However, vector is not a very flexible data structure as we need
size it with a maximum number of elements. If the number of elements that
we need to store exceed the dimension of the vector, we will have a problem, because
there is a simple and cheap (computationally) way to change the dimension
of the vector at runtime. On the other hand, if the number of elements that
if we need to store in the vector is much smaller than its dimension, we will be underusing the reserved memory space.
The solution to these problems is to use data structures that grow as
we need to store new elements (and decrease as we need to remove
previously stored elements). Such structures are called dynamic and
store each of its elements using dynamic allocation.

# Linked Lists

In a linked list, for each new element inserted in the structure, we allocate a
memory space to store it. In this way, the total memory space spent
by the structure is proportional to the number of elements stored in it.

![Image vector](https://www.google.com/url?sa=i&url=http%3A%2F%2Feduardolucio.blogspot.com%2F2015%2F09%2Faprenda-implementar-uma-lista-encadeada.html&psig=AOvVaw2dNeiJ366WATSs2YmmcrbK&ust=1681048598472000&source=images&cd=vfe&ved=0CBEQjRxqFwoTCOjbhZe4mv4CFQAAAAAdAAAAABAJ)

The structure consists of a linked sequence of elements, generally called
we from the list. The list is represented by a pointer to the first element (or node).
From the first element, we can reach the second following the chain, and so
on. The last element of the list points to NULL, signaling that there is no such thing.
next element.
