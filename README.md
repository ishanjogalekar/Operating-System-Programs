# Operating-System-Programs
## OS Lab Programs 
*Note: Run programs in linux environment usinf WSL or Virtual Machine or Bare matel device*

---

## Assignments 
**Assignment 1**  </br> 
[**PDF**](https://github.com/ishanjogalekar/Operating-System-Programs/blob/main/Assignments/DA1/19BCE2250_LAB%20DA%201.pdf) </br>
1. Parent child process creation using fork( ) and exec() system call  </br>
2. The Collatz conjecture concerns what happens when we take any positive integer n and apply the following algorithm: *n = n/2* , if n is even *n = 3 × n + 1* , if n is odd. The conjecture states that when this algorithm is continually applied, all positive integers will eventually reach 1. For example, if n = 35, the sequence is 35, 106, 53, 160, 80, 40, 20, 10, 5, 16,8, 4, 2, 1.Write a C program using the fork () system call that generates this sequence in the child process. The starting number will be provided from the command line. For example, if 8 is passed as a parameter on the Command line, the child process will output 8, 4, 2, 1. Because the parent and child processes have their own copies of the data, it will be necessary for the child to output the sequence. Have the parent invoke the wait () call to 
wait for the child process to complete before exiting the program. </br>
-> [**Code**](https://github.com/ishanjogalekar/Operating-System-Programs/blob/main/Assignments/DA1/collatz.c) </br>

---

**Assignment 2** </br>
[**PDF**](https://github.com/ishanjogalekar/Operating-System-Programs/blob/main/Assignments/DA2/19BCE2250%20OS%20LAB%20DA%202.pdf) </br>
1. Write a program to create a thread and perform the following: </br>
• Create a thread runner function 
• Set the thread attributes 
• Join the parent and thread 
• Wait for the thread to complete </br>
->[**Code**](https://github.com/ishanjogalekar/Operating-System-Programs/blob/main/Assignments/DA2/a.c) </br>
2. Write a program to create a thread to find the factorial of a natural number ‘n’. </br>
->[**Code**](https://github.com/ishanjogalekar/Operating-System-Programs/blob/main/Assignments/DA2/b.c) </br>
3. Assume that two processes named client and server running in the system. It is required that these two processes should communicate with each other using shared memory concept. The server writes alphabets from a..z to the shared memory .The client should read the alphabets from the shared memory and convert it to A...Z. Write a program to demonstrate the above mentioned scenario. </br>
->[**Serer-Code**](https://github.com/ishanjogalekar/Operating-System-Programs/blob/main/Assignments/DA2/C_Server.c)  &nbsp;  [**Client-code**](https://github.com/ishanjogalekar/Operating-System-Programs/blob/main/Assignments/DA2/C_Client.c) </br>
4. Write a multithreaded program that calculates various statistical values for a list of numbers. This program will be passed a series of numbers on the command line and will then create three separate worker threads. One thread will determine the average of the numbers, the second will determine the maximum value, and the third will determine the minimum value. For example, suppose your program is passed the integers 90 81 78 95 79 72 85 , the program will report the average value as 82. The minimum value as 72. The maximum value as 95. The variables representing the average, minimum, and maximum values will be stored globally. The worker threads will set these values, and the parent thread will output the values once the workers have exited. </br>
->[**Code**](https://github.com/ishanjogalekar/Operating-System-Programs/blob/main/Assignments/DA2/d.c) </br>
5. Implement the various process scheduling algorithms such as FCFS, SJF, Priority (Non Preemptive). </br>
> *CPU Scheduling Algorithms - 1*  </br>
• [**FCFS**](https://github.com/ishanjogalekar/Operating-System-Programs/blob/main/Assignments/DA2/CPU%20Scheduling/fcfs.c) </br>
• [**SJF**](https://github.com/ishanjogalekar/Operating-System-Programs/blob/main/Assignments/DA2/CPU%20Scheduling/sjf.c) </br>
• [**Priority-Non-Preemptive**](https://github.com/ishanjogalekar/Operating-System-Programs/blob/main/Assignments/DA2/CPU%20Scheduling/Priority_non_%20pre-emptive.c) </br>
6. Implement the various process scheduling algorithms such as Priority, Round Robin (preemptive). </br>
> *CPU Scheduling Algorithms - 2* </br>
• [**Priority-Preemptive**](https://github.com/ishanjogalekar/Operating-System-Programs/blob/main/Assignments/DA2/CPU%20Scheduling/Priority_pre-emptive.c) </br>
• [**Round Robin**](https://github.com/ishanjogalekar/Operating-System-Programs/blob/main/Assignments/DA2/CPU%20Scheduling/rr.c) </br>
7. Consider a corporate hospital where we have n number of patients waiting for consultation. The amount of time required to serve a patient may vary, say 10 to 30 minutes. If a patient arrives with an emergency, he /she should be attended immediately before other patients, which may increase the waiting time of other patients.If you are given this problem with the following algorithms how would you devise an effective scheduling so that it optimizes the overall performance such as minimizing the waiting time of all patients. (Single queue or multi-level queue can be used). Consider the availability of single and multiple doctors • Assign top priority for patients with emergency case, women, children, elders, and youngsters. • Patients coming for review may take less time than others. This can be taken into account while using SJF. 1. FCFS 2. SJF (primitive and non-pre-emptive) </br>
• [**FCFS-Code**](https://github.com/ishanjogalekar/Operating-System-Programs/blob/main/Assignments/DA2/fcfs_hosp.cpp) </br>
• [**SJF-primitive-Code**](https://github.com/ishanjogalekar/Operating-System-Programs/blob/main/Assignments/DA2/sjf_pre_hos.c) </br>
• [**SJF-non-preemptive-Code**](https://github.com/ishanjogalekar/Operating-System-Programs/blob/main/Assignments/DA2/sjf_non_pre_hos.c) </br>
8. Simulate with a program to provide deadlock avoidance of Banker’s Algorithm including Safe state and additional resource request. </br>
->[**Code 1**](https://github.com/ishanjogalekar/Operating-System-Programs/blob/main/Assignments/DA2/banker.c) </br>
->[**Code 2**](https://github.com/ishanjogalekar/Operating-System-Programs/blob/main/Assignments/DA2/banker_a.c) </br>

---

**Assignment 3** </br>
[**PDF**](https://github.com/ishanjogalekar/Operating-System-Programs/blob/main/Assignments/DA3/19BCE2250%20Assignment%203%20.pdf) </br>
1. Implement the solution for reader – writer’s problem. </br>
->[**Code**](https://github.com/ishanjogalekar/Operating-System-Programs/blob/main/Assignments/DA3/1.c) </br>
2. Implement the solution for dining philosopher’s problem. </br>
->[**Code**](https://github.com/ishanjogalekar/Operating-System-Programs/blob/main/Assignments/DA3/2.c) </br>
3. Implement the solution for producer consumer problem. </br>
->[**Code**](https://github.com/ishanjogalekar/Operating-System-Programs/blob/main/Assignments/DA3/3.c) </br>
4. The analogy is based upon a hypothetical barber shop with one barber. There is a barber shop which has one barber, one barber chair, and n chairs for waiting for customers if there are any to sit on the chair. </br>
- If there is no customer, then the barber sleeps in his own chair. 
- When a customer arrives, he has to wake up the barber. 
- If there are many customers and the barber is cutting a customer’s hair, then the remaining customers either wait if there are empty chairs in the waiting room or they leave if no chairs are empty. </br>
->[**Code**](https://github.com/ishanjogalekar/Operating-System-Programs/blob/main/Assignments/DA3/4.c) </br>
5. A pair of processes involved in exchanging a sequence of integers. The number of integers that can be produced and consumed at a time is limited to 100. Write a Program to implement the producer and consumer problem using POSIX semaphore for the above scenario. </br>
->[**Code**](https://github.com/ishanjogalekar/Operating-System-Programs/blob/main/Assignments/DA3/5.c) </br>

---

**Assignment 4 - Memory Managment & Disk Managment** </br>
[**PDF**](https://github.com/ishanjogalekar/Operating-System-Programs/blob/main/Assignments/DA4/19BCE2250%20DA%204%20.pdf) </br>
1. Consider a memory hole of size 1kb initially. When a sequence of memory request arrives as following, illustrate the memory allocation by various approaches and calculate the total amount memory wasted by external fragmentation and internal fragmentation in each approach. a.First Fit b. Best Fit c.Worst Fit </br>
->[**Code**](https://github.com/ishanjogalekar/Operating-System-Programs/blob/main/Assignments/DA4/1.cpp) </br>
2. Write a program to implement the page replacement algorithms. 
- [**FIFO**](https://github.com/ishanjogalekar/Operating-System-Programs/blob/main/Assignments/DA4/FIFO.c) </br>
- [**LRU**](https://github.com/ishanjogalekar/Operating-System-Programs/blob/main/Assignments/DA4/LRU.c) </br>
- [**OPT**](https://github.com/ishanjogalekar/Operating-System-Programs/blob/main/Assignments/DA4/OPT.c) </br>

3. Write a program that implements the FIFO, LRU, and Optimal page replacement algorithms. First, generate a random page-reference 
string where page numbers range from 0 to 9. Apply the random page reference string to each algorithm, and record the number of page faults incurred by each algorithm. Implement the replacement algorithms so that the number of page frames can vary from 1 to 7. Assume that demand paging is used. </br>
- [**FIFO**](https://github.com/ishanjogalekar/Operating-System-Programs/blob/main/Assignments/DA4/FIFO2.cpp) </br>
- [**LRU**](https://github.com/ishanjogalekar/Operating-System-Programs/blob/main/Assignments/DA4/LRU2.cpp) </br>
- [**OPT**](https://github.com/ishanjogalekar/Operating-System-Programs/blob/main/Assignments/DA4/OPT2.cpp) </br>

4. Implement the following Disk scheduling algorithms: </br>
- [**SSTF**](https://github.com/ishanjogalekar/Operating-System-Programs/blob/main/Assignments/DA4/SSTF.c) </br>
- [**SCAN**](https://github.com/ishanjogalekar/Operating-System-Programs/blob/main/Assignments/DA4/SCAN.c) </br>
- [**C-SCAN**](https://github.com/ishanjogalekar/Operating-System-Programs/blob/main/Assignments/DA4/CSCAN.cpp) </br>
- [**FCFS**](https://github.com/ishanjogalekar/Operating-System-Programs/blob/main/Assignments/DA4/FCFS.c) </br>

5. Consider a file of size 1 MB. The size of a disk block is 512Bytes. Assume any number of available free blocks in the disk contiguously or non-contiguously. Implement the following algorithms to perform file allocation. Determine the efficiency of each file allocation strategies. </br>
- [**Sequential**](https://github.com/ishanjogalekar/Operating-System-Programs/blob/main/Assignments/DA4/sequential.c) </br>
- [**Indexed**](https://github.com/ishanjogalekar/Operating-System-Programs/blob/main/Assignments/DA4/index.c) </br>
- [**Linked**](https://github.com/ishanjogalekar/Operating-System-Programs/blob/main/Assignments/DA4/Linked.c) </br>
