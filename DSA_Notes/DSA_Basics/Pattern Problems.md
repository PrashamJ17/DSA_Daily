
Concept to be followed for solving pattern problems -->
 - we use nested loops to solve this problem . 
 - For rows - horizontal - we use Outer loop . 
 - For columns - vertical - we use inner loop .
 - For every row --> column runs --> prints --> moves to the next line
 - See if there is any symmetry in the problem . 


- In online compilers - used for interviews and problems -they test the code against multiple test cases - our code must satisfy them all .
- thus , always include an input for no. of times our code should run --> depending on the no. of test cases . 
- Also in such scenarios , int main is not given we have to directly write our code in the function void , or whatever - we cannot modify int main with respect to our code. 

# PATTERNS - 

1. 
 - ![[Screenshot 2026-06-02 at 6.31.39 PM.png|302]]
 - In this problem , we have - 4 rows and 4 columns 
 - problem --> for same no. of rows and columns --> square pattern problem . 
 - For each row -> print the pattern for each column -> move to the next row. Continue this step until the end . 
2. 
	![[Screenshot 2026-06-02 at 6.41.21 PM.png]]
	- Again same - rows - outer loop , columns - inner loop 
	- Pattern identified -
		- for 1st row -  1st column
		- for 2nd row - 2 columns
		- 3rd row - 3 columns 
		- and so on - for nth row - n columns 
3. 
	- ![[Screenshot 2026-06-02 at 6.59.56 PM.png]]
	- instead of starts we are printing no.s - index of each column 
	- for Nth no - say 100 , we will print 100 for 100th column 
4. 
	- ![[Screenshot 2026-06-02 at 6.50.42 PM.png]]
	- here same as above pattern , instead of printing index of index of columns , we are printing index of the rows . 
	- for each row -> index of rows = no. of columns printed --> print row no. --> next line . 
5. 
	- ![[Screenshot 2026-06-02 at 6.53.06 PM.png]]
	- Here , this is different than above patterns 
	- Instead of columns indexing starting from 1 , we will start from the back --> i.e n 
	- For every row --> decrement the no. of columns to print . 
	- thus , for nth row --> only 1 start will print and for 1st row --> N starts will print
6. 
	- ![[Screenshot 2026-06-02 at 6.55.55 PM.png]]
	- Same as above pattern . 
	- Instead of printing stars , we are printing the index of the column from 1 till Nth column.
	- Since the column decrement by 1 
			thus , we will print from 1 till N , then 1 till N-1 , then 1 till N - 2 ... and so on , until Nth row --> where will print 1 . 

- Pattern 5 , 6 --> good , rest are easy .  
- after solving 6 patterns  - 
	- its not just about being fast . 
	- think about it - like in pattern 5  , 6 .
	- How to get the desired output -> changing the initialization or the condition , not using another variable 
	- Debug , see the conditions are correct or not , debug if something is wrong , output not showing or wrong output/pattern printed . 
	- approaching it without compromising on space complexity is important . 
	- having variable for test case is important


continuing after 6th -> 

7. 
	- ![[Screenshot 2026-06-03 at 12.42.47 AM.png|161]]
	- In this the pattern to be printed does not depend on rows or columns . 
	- we have to start printing at the nth column , then n-1 th column , then n-2 column ... in the form of a triangle not as a right angled triangle .  
	- how do we do this ??
		- for this we will need 3 loops - 
			- 1. for the rows . --> i
			- 2. to print stars in odd multiples - 2n + 1 --> j
			- 3. to create blank , white spaces before printing any stars - to form a triangle . this has to decrease every row , so that the printing starts from nth column , then n-1 th column, then n-2 th column ..... till 1st column at the last row .  ---> k
			- outer loop -> i consists of 2 nested loops -> 
				- 1st --> to create blank spaces --> k from 1 to n-i ( since i will increase every row , thus no. of blank spaces will decrease every row )
				- 2nd --> after the blank spaces are created , then print stars --> j from 1 to (2 x i + 1 ) odd multiples of i . 

8.  
	- ![[Screenshot 2026-06-03 at 7.23.54 PM.png]]
	- same , rows -> i from 0 to n 
	- difference will be in k and j 
	- k --> no space to n space --> k increases --> k=0 to i --> k < i 
	- j from (n-i )x 2 -1 to 1 --> j>=1 -->j decreases

9.  
	- ![[Screenshot 2026-06-03 at 7.54.14 PM.png]]
	- we are given integer n , --> the no. of rows are 2n . 
	- it consists of 2 patterns merged together 
	- w halves upper half and lower half so we need to apply nested loops twice .
	- after the upper half completed , then the lower half starts . 
	- int i = 0 to n-1 for for both the halves if we do them both separately 
	- apply the 7th pattern function for the upper half then 8th pattern function for the lower half 
	- that is one solution 
	- We can also do it in 1 nested loop i = 0 to 2 x n  , using if-else block 
	- if i < n {do the upper half function} else { do the lower half function}
	- the functions will vary slightly for the lower half , the upper half will remain the same , as now i = n to 2n for the lower half . 
	- k = n to i --> k++ --> as the white spaces are increasing in lower half from nth to 2n th rows .
	- j = 2*(2 x n - i) - 1 to 1 --> j -- --> no. of stars are decreasing in lower half . 

10. 
	 - ![[Screenshot 2026-06-03 at 9.12.35 PM.png]]
	 - no. of rows --> 2 x n -1 --> int i will go from 0 to 2n-1 . 
	 - after n rows -> stars decrease --> 2 patterns merged together
	 - so for j = 0 to i --> print "* " 
	 - then for i = 0 to n-1 --> i incre 
	 - j = 0 to n - i - 1 --> j incre --> print "* "
	 - we can also do another solution like the above pattern 
	 - using if-else block and nested for loops 
	 - same function for the upper half from 0 to n --> if block
	 - for lower half -> else block - 
	 - we take j --> 2n - i - 1 to 1 --> j decreases . 

11.  
    -  ![[Screenshot 2026-06-04 at 12.30.55 AM.png]]
	-  we start i = 1 to n ; 
	-  for even i --> i % 2 == 0 --> j = 0 to i ,  != i --> cout << j % 2
	- for odd i --> j = 1 to i , == i , --> cout << j % 2 . 

12. 
	- ![[Screenshot 2026-06-04 at 6.21.37 PM.png]]
	- 3 for loops 
	- i -> 1 to n -> for the rows -> n
	- j -> 1 to i --> cout < j 
	- k -> create white spaces in the middle -> 1 to 2 x (n-i) -> cout << "  "
	- j -> n to 1 --> cout << j 
	- cout << endl 

13. 
    - ![[Screenshot 2026-06-04 at 6.57.55 PM.png]]
	- initialize a variable num = 1
	- increment its value and cout << num 

14. - 
	- ![[Screenshot 2026-06-04 at 7.00.57 PM.png]]
	- use ASCII characters instead of no.s that's it . 
	- 65-90 --> A,B,C,D,E......Z
	- 91-116 --> a,b,c,d,e......z
	- string --> str
	- character -> char
	- instead of integer int , we use char data type to initialize j . 
	- j = 'A' , j<'A' + i , j++; same as before patterns. 

15. 
	- ![[Screenshot 2026-06-05 at 12.12.19 AM.png]]
	- same as pattern - 6 . 
	- except for no.s we use char, ascii character .