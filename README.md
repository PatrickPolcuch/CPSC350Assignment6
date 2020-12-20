# CPSC350Assignment6
Testing different sorting algorithms

//Patrick Polcuch
//2348668
//CPSC350Assignment6


Testing and displaying the time each of the following algorithms takes to sort integers from a file:
Quick Sort
Merge Sort
Selection Sort
Insertion Sort
Bubble Sort


Used the Zybook for most of the sorting algorithms.Had to change it up a bit because their sudo code is a bit messy.
This assignment wasn't very hard, but great for learning about sorting algorithms. Too bad I started it after we tool the final.

Overview:
We’ve learned several sorting algorithms, as well as which algorithms are “asymptotically” better
than others. But though it is important to know that, on paper, a O(n2
) algorithm runs slower than
a O (n lg n) algorithm, it is also important to realize just how drastically these algorithmic choices
can affect your program’s performance at run time. To drive this point home, the (simple)
assignment for this week is to implement 5s sorting algorithms and time them on large input.
The Specifics:
All of you will implement Quick Sort, Merge Sort, Selection Sort, Insertion Sort and Bubble Sort.
Your program will then run as follows:
1. Take as a command line argument text file containing a list of double values. The first
line of the file will be the number of items to sort.
2. Read in the values into an array. Because you don’t know the size of the array at compile
time, you will have to use dynamic memory allocation.
3. Run each of the five algorithms on the unsorted data (hence, you will need 5 copies of the
array above). For each algorithm, output its name, the time the sort started, and the time
the sort ended.
4. Write a 1 page report on your experience. Were the time differences more drastic than
you expected? What tradeoffs are involved in picking one algorithm over another? How
did your choice of programming language affect the results? What are some
shortcomings of this empirical analysis? Include this report as a pdf with your
deliverables.
To implement the time stamping you can make use of the C standard library time class. Read the
API for its correct use. (This is a rather crude method for timing your code, but for our purposes
it should get the job done.)
The Rules:
1. You must work individually
2. Use whatever references you like, but all work must be your own.
Grading:
Grades will be based on correctness of implementation, adherence to this spec, comments, coding
style, and efficiency.
Submissions
You know the drill by this point.
