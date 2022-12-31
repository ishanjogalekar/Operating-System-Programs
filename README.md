# Operating-System-Programs
## OS Lab Programs 
*Note: Run programs in linux env*

---

### Assignments 
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
1.Implement the solution for reader – writer’s problem. </br>
->[**Code**](https://github.com/ishanjogalekar/Operating-System-Programs/blob/main/Assignments/DA3/1.c) </br>


---
**This is under development repository**
