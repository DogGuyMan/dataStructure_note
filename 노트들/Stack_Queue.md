<style>
.imgOption{
    display:flex;
    justify-content:center;
    align-items:center;
    height: 600px; 
}

.inverse {
    filter : invert(85%);
}

h2{
    font-weight :bold;
    border : 6px solid yellow;
    color : yellow !important;
}
h3 {
    font-weight :bold;
    border : 3px solid ;
}
</style>

<!--##### π νΈλ‘λ―ΈλΈλ? -->

## μ€νκ³Ό ν
### μ€ν
<img src="https://media.giphy.com/media/bN6VuVwldkTtFt2jK4/giphy.gif" width=400px>

#### β μ€νμ νΉμ§

##### π  μλ£κ΅¬μ‘°

* LIFO (νμμ μΆ)

##### π λ©λͺ¨λ¦¬μ μ¬λΌκ° κ΅¬μ‘° νλ‘μΈμ€ λ©λͺ¨λ¦¬ κ΅¬μ‘°

* μ½λ°νμ€
  1. μ½λ μμ­
       * μ»΄νμΌν μμ±λ κΈ°κ³μ΄
       * CPUκ° κΈ°κ³ λͺλ Ήμ΄λ₯Ό κ°μ Έμ¬λ μ¬μ©λλ μμ­
       * νλ‘κ·Έλ¨ μ’λ£νμλ λ¨μμμ
  2. λ°μ΄ν° μμ­
       * μ μ­λ³μ μ μ λ³μ
       * μ»΄νμΌν ν λΉλ¨
       * νλ‘κ·Έλ¨ μ’λ£νμ κ°μ΄ μ­μ 
  3. ν μμ­ 
        * λμ ν λΉλ λ©λͺ¨λ¦¬ μμ­
        * new delete, malloc free
        * μ»΄νμΌμ€μ ν λΉ
        * νλ‘κ·Έλ¨ μ’λ£νμ κ°μ΄ μ­μ 
  4. **μ€ν μμ­**
        * ν¨μ, μ§μ­λ³μ, λ§€κ°λ³μ
        * μ€ν νλ μμ΄λΌκ³  ν¨μμ νΈμΆ μ λ³΄λ₯Ό μ€νμ²λΌ μλλ‘ λμνλ κ΅¬μ‘°
        * μ»΄νμΌμ€μ ν λΉ
        * νλ‘κ·Έλ¨ μ’λ£νμ κ°μ΄ μ­μ 

##### π λ―Έλ‘μ°ΎκΈ°
* **κ·Έλννμ**
  * DFSλ λ³΄ν΅ μ¬κ·λ‘ ν΄κ²°νκΈ°λ νμ§λ§ μ€νμ μ΄μ©ν΄μλ DFSλ₯Ό μ§νν  μ μλ€.
  * μ½λλ λ€μκ³Ό κ°λ€
    **[λ―Έλ‘μ°ΎκΈ° μ½λ](./μ€νλ―Έλ‘μ°ΎκΈ°.cpp)**

* **μΈν** 
  * λ€μ μΈν κ²°κ³Όκ°μ΄ 1μ΄λ©΄ μ μλνκ²μ΄λ€..(μλ§λ) 
    ```
    10 
    
    1 1 1 1 1 1 1 1 1 1
    0 0 0 0 1 0 0 0 0 1
    1 0 0 0 1 0 0 1 0 1
    1 0 1 1 1 0 0 1 0 1
    1 0 0 0 1 0 0 1 0 1
    1 0 1 0 1 0 0 1 0 1
    1 0 1 0 1 0 0 1 0 1
    1 0 1 0 1 0 0 1 0 1
    1 0 1 0 0 0 0 1 0 0
    1 1 1 1 1 1 1 1 1 1
    
    0 1 9 8
    ```
* **μλ μ λ**
    * <img src="https://media.giphy.com/media/teXhRBVD5HYioTw4Bo/giphy.gif">

### ν

#### β νμ νΉμ§

##### π  μλ£κ΅¬μ‘°
<img src="https://media.giphy.com/media/ZQsRnt6X8y9S8wP8rN/giphy.gif" width=400px>

* FIFO (μ μ μ μΆ)

##### π OS CPU μ€μΌμ₯΄λ§
λ€μ νλ‘μΈμ€λ₯Ό μ ννλλ° μμ΄
1. linked lsit || binary tree
2. FIFO queue
3. Priority Queue

```
1. PCB(νλ‘μΈμ€ μ μ΄λΈλ‘) μ κ΅¬μ±μμ [3. νλ‘μΈμ€]
	1. process state
		1. new, ready, running, waiting, teminated
		νλ‘μΈμ€ μν μ μ΄λ
		
			ready to run : dispatch 
			run to ready : time limit preemption
			wait to ready : μ°μ μμ preemption
			run to wait : non-preemptive
			run to end : non-preemptive
_-------------------------------------------

2. νλ‘μΈμ€ κ΅¬μ±	[3. νλ‘μΈμ€]
	1. text 
		μ€νμ½λ
	2. data
		μ μ­ λ³μ
	3. heap
		μ§μ­, λμ , malloc, new
	4. stack
		μ§μ­, ν¨μ, λ§€κ°
		
_-------------------------------------------

3. SMPμμμ λκΈ°νλ₯Ό μ²λ¦¬νλ 2κ°μ§ λ°©λ² [5. μ€μΌμ₯΄λ§]
	CPUμ€μΌμ₯΄λ§μ κ°μ
		λ©ν° νλ‘κ·Έλλ°μ κΈ°λ³Έμ΄λΌ ν  μ μλ€.
		CPUλ₯Ό μ΅λν νμ©ν  μ μλλ‘ 
		ready Queue μ μ ν μ€ννλ λ°©λ²
	
	μ€μΌμ₯΄λ§ λ¨κ³
		1. long-term
			jobμ€μΌμ₯΄λ§ κ²°μ 
			new to ready state
			load a process into memory
		2. mid-term
			swap out swap in process
		3. short-term	
			μΈν°λ½νΈ, νμμμ, λμ€ν¨μ³, CPUμ€μΌμ₯΄λ§
			I/O λΈλ‘, 
			select a process to run on CPU
			
	CPUμ κ³ λ €ν΄μΌν μ μ
		ready queue μ€μμ
		μ΄λ€κ±Έ μ νν΄μ μ€νν΄μΌνλκ°?
		
		case 
			------------------------
			1. preemptive
				κ°μ λ‘ μ«μλΌμμμ
				
				> νλ‘μΈμ€ μν
				- 2. running -> ready(μΈν°λ½νΈ λ°μ) -> timeout
				- 3. waiting -> ready(μΈν°λ½νΈ λ°μ) -> λμ μ°μ μμ
				
				μ₯μ  : 
					1.interactive system
					3.real-time tasks
					2.Good for handling 
				λ¨μ  : 
					1. λκΈ°ν λ¬Έμ κ° λ³΅μ‘.
					2. Number of context switches increase.
		
			------------------------
			2. none-preemptive
				μ«μλΌ μ μμ
				switcingμ΄ λΆκ°λ₯
				
				> νλ‘μΈμ€ μν
				- 1. running -> waiting
				- 4. teminated
				
				μ₯μ  : 
					1. Scheduling overhead is smaller.
					2. Number of context switches decrease.
					3. Synchronization among processes becomes easier.
				λ¨μ  :
					interactive system
					bad for handling 
					none real-time tasks
			------------------------
			
	Dispatcher
		context switchingμ΄ μΌμ΄λλλ‘ νκ²½μ λ§λ¦
		Dispatch latency 
			= context switching delay
		
		latencyκ° μ§§μ μλ‘ μμ€νμ ν¨μ¨μ±μ λΉ λ₯΄λ€.
	
	μ΄μ  μκ³ λ¦¬μ¦...
	
	
	SMP(λ©ν° νλ‘μΈμ€ μ€μΌμ₯΄λ§) 5.11
		λκΈ°μ΄μ λ§λλ λ°©λ²(read queue) 
		λκ°μ§λ‘ λλμ μλ€
			1. common ready queue	
				νλμ ready queueλ₯Ό νλμ CPUμ μ²λ¦¬
				μ₯μ  : 	1.λΆλ°°ν  νμμμ΄ μ­~ load balanceκ° X
						2.μ€μΌμ₯΄λ§ μ€λ²ν€λκ° λ μμμ§
						3. A process is guarateed to be run on the same CPU.						
						
				λ¨μ  :	νλμ ready queueλ₯Ό μ°λ€λ³΄λ μΊμ hit ratio κ°μ
						λ³λͺ©νμ κ°λ₯μ±
				
			2. pre-core run queue (Each processor may have its own private queue of threads.)
				νλμ ready queueλ₯Ό κ³΅μ ν΄μ μ²λ¦¬
					μμμ΄ μλ‘ μκΈ°λ©΄(new). μ΄μμ²΄μ κ°
					queue κ°λ³μ μΌλ‘ μ μ ν λΆν΄νλ λ°©μ
				
				μ₯μ  : μΊμ hit μ±λ₯μ΄ μ’μ
				λ¨μ  : load unbalancedκ° λ°μ
					μ¦ ,νμͺ½μ΄ λλλ©΄ λΈλ CPUκ° μκΈ΄λ€.
					
					ν΄κ²°μ± : μμμ΄ μλμ¬λμκ² μΌλΆ μ?κ²¨μ€
						process migration
							PULLλ΄λ³΄λ΄ & PUSHκ°κ³ κ° λ°©λ²μ λμμ μ¬μ©

	
_-------------------------------------------

6. μ€μΌμ₯΄λ§ μκ³ λ¦¬μ¦ [5. μ€μΌμ₯΄λ§]
	μκ³ λ¦¬μ¦ μ νκΈ°μ€
		1. CPU utilization
			μ ν΄μ§ μκ°λμ μ μ©νμμμν ν¨μ¨
		2. Throughput : 
			waiting + service
		3. waiting time : 
			νλμ processκ° ready queueμμ κΈ°λ€λ¦¬λ μκ°
		4. turnaround timeκ³Ό waiting time
			λ°νμκ°κ³Ό μ€λΉμλ£ν λκΈ° μκ°μ μ΅μν
		5. Response time : 
			ready queueμ λ€μ΄κ°μ λ°μμ΄ λμ€κΈ°κΉμ§ κ±Έλ¦°μκ°.
			
	μ±λ₯λΆμμ νλ λͺ©μ 
		1. μ μ νκ° : selection evaluation
			κ³ κ°μμ₯
		2. μ±λ₯μμΈ‘ : 
			κ°λ°μμμ₯
		3. μ±λ₯ λͺ¨λν°λ§ :
			μνλ μ±λ₯μ΄ λμ€λμ§ κ³μ κ°μ
			μ΄μμμμ₯
			
	μκ³ λ¦¬μ¦ 
		1. FCFS (first com first serced)
			λ€μ΄μ¨ μμλλ‘
			
			μ₯μ  	
				1. non-preemptive
			λ¨μ  	
				1. non-preemptive
				2. Convey effect
					cpuμλ³΄ μ κΉμ§λ λͺ¨λ λκΈ°
		
		2. SJF
			μλΉμ€μκ° μ§§μκ±°λΆν°
			
			μ₯μ  	
				1.non-preemptive
				2. It gives an advantage for shorter job
				3. It gives the minimum average waiting time.
			λ¨μ 	
				1.non-preemptive
				2. λΆκ³΅νν μ€μΌμ₯΄λ§
				3. λ€μκ²μ΄ μΌλ§λ κ±Έλ¦¬λμ§ μκΈ° νλ¬
				It requires execution time estimation of processes.
				4. κΈ΄ μλΉμ€λ κ³μ λ°λ¦°λ€.
				
		3. SRTF
			μλΉμ€μκ° μ§§μκ±°λΆν°
			
			μ₯μ  
				1. preemptive
				2. It gives an advantage for shorter job
				3. It gives the minimum average waiting time.

			λ¨μ  
				1. preemptive
				2. It requires execution time estimation of processes.

			
		4. RR
			μ₯μ 
				1. FCFS
				2. Fair for ALL 
				3. μ°μ μμ λμμ
				4. μΈν°λ ν°λΈν μμ μ²λ¦¬κ° μ’μ
			λ¨μ 
				1. μ€λ²ν€λ νΌ
				2. νμννμ λ°λΌ νΌν¬λ¨Όμ€κ° κ°λ¦°λ€
				
		5. μ°μ μμ μ€μΌλλ§
			μ°μ μμκ° λμ μμλλ‘
			λμΌνλ€λ©΄ FCFS
			
			static, dynamic
			
			λ¨μ  
				1. 	μμΉκΈ° λΉνκΈ° starvation
					λ?μ μ°μ μμλ μμν λ°λ¦¬κ²λλ€.
						ν΄κ²°μ± : Aging
							μ°¨κ·Όμ°¨κ·Όν μ°μ μμλ₯Ό λμ¬μ€λ€.

```