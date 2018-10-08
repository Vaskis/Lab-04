# Lab-04

[NOTE: the majority of my help came from cplusplus.com pages]

Part 1:
Another interesting test you should try is calling add_number twice in a row with the same argument - what happens?
	It took the same "random vector" and appended it to itself.

Part 4:
Now in main, manually create a small vecotr of about 5 numbers in random order, and call the sort routine on the begin() and end() iterators of your Vector.
Did it work?
	Yes
What is a very simple test that you can run?
	Print out the vector, which I did, and it works.

[Below is the Output when I ran my code]


__________Part 1__________:

Created Vector Data(0):

Print All:
<empty>

add_numbers(Data):

Print All:
<6, 6, 7, 1, 10, 10, 9, 2, 7, 5>

add_numbers(Data):

Print All:
<6, 6, 7, 1, 10, 10, 9, 2, 7, 5, 6, 6, 7, 1, 10, 10, 9, 2, 7, 5>

__________Part 2__________:

Print Even:
<6, 7, 10, 9, 7, 6, 7, 10, 9, 7>

__________Part 3__________:

Print All:
<6, 6, 7, 1, 10, 10, 9, 2, 7, 5, 6, 6, 7, 1, 10, 10, 9, 2, 7, 5>

Is:   0 present:  no
Is:   1 present: yes
Is:   2 present: yes
Is:   3 present:  no
Is:   4 present:  no
Is:   5 present: yes
Is:   6 present: yes
Is:   7 present: yes
Is:   8 present:  no
Is:   9 present: yes
Is:  10 present: yes
Is:  11 present:  no


__________Part 4__________:

Created Custom Unsorted Vector:

Print All:
<4, 9, 1, 2, 7>

Sorted Data:

Print Sort:
<1, 2, 4, 7, 9>
