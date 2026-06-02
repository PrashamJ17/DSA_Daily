What is time complexity ? 
What is space complexity ?

- Time complexity is not time taken to run a code .
- It's not dependent on the machine it runs - machine config , machine speed , etc don't matter .
- **Time Complexity - The rate at which the time taken increases with respect to the input size - i.e the Slope of the graph input size vs time taken .**
- ![[Screenshot 2026-06-02 at 5.10.49 PM.png]]
- Time complexity is not measured in seconds or minutes
- Notations used for time complexity - **Big Oh notation** - O( ) . 
- Big Oh notation - 
	- No. of steps a code takes to execute
	- Worst - case scenario 
- Time complexity Rules - 
	1. Always compute time complexity in terms of worst case scenario - since it includes all possible scenarios - being realistic . 
	2. Avoid Constants -  not much significant in terms of bigger values
	3. Avoid lower values - not significant in terms of bigger values 
- 3 notations - 
	1. Big Oh - O( ) - Upper bound - Worst case . 
	2. Theta - θ( ) - Average Complexity 
	3. Omega - Ω( ) - Lower bound - Best case .


## Examples -

1. ![[Screenshot 2026-06-02 at 5.33.51 PM.png]]

For loop - within a for loop . 
So , for every iteration of outer loop , the inner loop will run N times
thus , N + N + N + N + N ..... N times 
 therefore - ***TC = O( N^2)***

2. ![[Screenshot 2026-06-02 at 5.36.22 PM.png]]
2 loops- outer and inner . 
for every i - outer loop - inner loop runs i times . and i is increasing by 1. 
there for , 
for
	i = 0 -->  j = 0            1 time
	i = 1 --> j  =  0 , 1       2 time
	i = 2 --> j = 0 , 1 , 2   3 times
	and so on . 

TC = 1 + 2 + 3 + .... + N
there fore - ***TC = N*(N+1) / 2 --> O(N^2)*** --> as per the rules . 

- NOTE - Most online servers like leetcode , codechef  .. - take 1sec for 10^8 opns.
	- In competitive programming or in the platforms like takeUforward, we generally run our codes on online servers. Most of these servers execute roughly 10^8 operations in approximately 1 second i.e. 1s. We must be careful that if the time limit is given as 2s the operations in our code must be roughly 2 x 10^8, not 10^16. Similarly, 5s refers to 5 x *10^8. Simply, if we want our code to be run in 1s, the time complexity of our code must be around O(10^8) avoiding the constants and the lower values.
# Space Complexity - 

- memory space taken by the code - the variables , output , 
- Space complexity - auxiliary space + Input space
	- Auxiliary space - space that you take to store the problem - to store the output of the code - computation of the input 
	- Input space - space that you take to store the input 
- Big Oh notation - O( ) 
- Note - Never do anything to the input given - don't manipulate the DATA . 
	- take extra arrays , or variables or whatever - compromise the space instead of the Input - unless specified otherwise . 