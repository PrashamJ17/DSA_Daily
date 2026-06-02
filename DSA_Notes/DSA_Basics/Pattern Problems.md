
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
	- we have to start in the middle - so n/2 pe we start . 
	- then 
