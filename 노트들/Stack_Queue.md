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

<!--##### 👉 트로미노란? -->

## 스택과 큐
### 스택
<img src="https://media.giphy.com/media/bN6VuVwldkTtFt2jK4/giphy.gif" width=400px>

#### ❗ 스택의 특징

##### 👉  자료구조

* LIFO (후입선출)

##### 👉 메모리에 올라간 구조 프로세스 메모리 구조

* 코데힙스
  1. 코드 영역
       * 컴파일후 생성된 기계어
       * CPU가 기계 명령어를 가져올때 사용되는 영역
       * 프로그램 종료후에도 남아있음
  2. 데이터 영역
       * 전역변수 정적변수
       * 컴파일후 할당됨
       * 프로그램 종료후에 같이 삭제
  3. 힙 영역 
        * 동적할당된 메모리 영역
        * new delete, malloc free
        * 컴파일중에 할당
        * 프로그램 종료후에 같이 삭제
  4. **스택 영역**
        * 함수, 지역변수, 매개변수
        * 스택 프레임이라고 함수의 호출 정보를 스택처럼 쌓도록 동작하는 구조
        * 컴파일중에 할당
        * 프로그램 종료후에 같이 삭제

##### 👉 미로찾기
* **그래프탐색**
  * DFS는 보통 재귀로 해결하기도 하지만 스택을 이용해서도 DFS를 진행할 수 있다.
  * 코드는 다음과 같다
    **[미로찾기 코드](./스텍미로찾기.cpp)**

* **인풋** 
  * 다음 인풋 결과값이 1이면 잘 작동한것이다..(아마도) 
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
* **작동 애니**
    * <img src="https://media.giphy.com/media/teXhRBVD5HYioTw4Bo/giphy.gif">

### 큐

#### ❗ 큐의 특징

##### 👉  자료구조
<img src="https://media.giphy.com/media/ZQsRnt6X8y9S8wP8rN/giphy.gif" width=400px>

* FIFO (선입 선출)

##### 👉 OS CPU 스케쥴링
다음 프로세스를 선택하는데 있어
1. linked lsit || binary tree
2. FIFO queue
3. Priority Queue

```
1. PCB(프로세스 제어블록) 의 구성요소 [3. 프로세스]
	1. process state
		1. new, ready, running, waiting, teminated
		프로세스 상태 전이도
		
			ready to run : dispatch 
			run to ready : time limit preemption
			wait to ready : 우선순위 preemption
			run to wait : non-preemptive
			run to end : non-preemptive
_-------------------------------------------

2. 프로세스 구성	[3. 프로세스]
	1. text 
		실행코드
	2. data
		전역 변수
	3. heap
		지역, 동적, malloc, new
	4. stack
		지역, 함수, 매개
		
_-------------------------------------------

3. SMP에서의 대기큐를 처리하는 2가지 방법 [5. 스케쥴링]
	CPU스케쥴링의 개요
		멀티 프로그래밍의 기본이라 할 수 있다.
		CPU를 최대한 활용할 수 있도록 
		ready Queue 적절히 실행하는 방법
	
	스케쥴링 단계
		1. long-term
			job스케쥴링 결정
			new to ready state
			load a process into memory
		2. mid-term
			swap out swap in process
		3. short-term	
			인터럽트, 타임아웃, 디스패쳐, CPU스케쥴링
			I/O 블록, 
			select a process to run on CPU
			
	CPU에 고려해야할점은
		ready queue 중에서
		어떤걸 선택해서 실행해야하는가?
		
		case 
			------------------------
			1. preemptive
				강제로 쫒아낼수있음
				
				> 프로세스 상태
				- 2. running -> ready(인터럽트 발생) -> timeout
				- 3. waiting -> ready(인터럽트 발생) -> 높은 우선순위
				
				장점 : 
					1.interactive system
					3.real-time tasks
					2.Good for handling 
				단점 : 
					1. 동기화 문제가 복잡.
					2. Number of context switches increase.
		
			------------------------
			2. none-preemptive
				쫒아낼 수 없음
				switcing이 불가능
				
				> 프로세스 상태
				- 1. running -> waiting
				- 4. teminated
				
				장점 : 
					1. Scheduling overhead is smaller.
					2. Number of context switches decrease.
					3. Synchronization among processes becomes easier.
				단점 :
					interactive system
					bad for handling 
					none real-time tasks
			------------------------
			
	Dispatcher
		context switching이 일어나도록 환경을 만듦
		Dispatch latency 
			= context switching delay
		
		latency가 짧을 수록 시스템의 효율성은 빠르다.
	
	이제 알고리즘...
	
	
	SMP(멀티 프로세스 스케쥴링) 5.11
		대기열을 만드는 방법(read queue) 
		두가지로 나눌수 있다
			1. common ready queue	
				하나의 ready queue를 하나의 CPU서 처리
				장점 : 	1.분배할 필요없이 쭉~ load balance가 X
						2.스케쥴링 오버헤드가 더 작아짐
						3. A process is guarateed to be run on the same CPU.						
						
				단점 :	하나의 ready queue를 쓰다보니 캐시 hit ratio 감소
						병목현상 가능성
				
			2. pre-core run queue (Each processor may have its own private queue of threads.)
				하나의 ready queue를 공유해서 처리
					작업이 새로 생기면(new). 운영체제가
					queue 개별적으로 적절히 분해하는 방식
				
				장점 : 캐시 hit 성능이 좋음
				단점 : load unbalanced가 발생
					즉 ,한쪽이 끝나면 노는 CPU가 생긴다.
					
					해결책 : 작업이 없는사람에게 일부 옮겨줌
						process migration
							PULL내보내 & PUSH갖고가 방법을 동시에 사용

	
_-------------------------------------------

6. 스케쥴링 알고리즘 [5. 스케쥴링]
	알고리즘 선택기준
		1. CPU utilization
			정해진 시간동안 유용한작업을한 효율
		2. Throughput : 
			waiting + service
		3. waiting time : 
			하나의 process가 ready queue에서 기다리는 시간
		4. turnaround time과 waiting time
			반환시간과 준비완료큐 대기 시간은 최소화
		5. Response time : 
			ready queue에 들어가서 반응이 나오기까지 걸린시간.
			
	성능분석을 하는 목적
		1. 선점평가 : selection evaluation
			고객입장
		2. 성능예측 : 
			개발자입장
		3. 성능 모니터링 :
			원하는 성능이 나오는지 계속 감시
			운영자입장
			
	알고리즘 
		1. FCFS (first com first serced)
			들어온 순서대로
			
			장점 	
				1. non-preemptive
			단점 	
				1. non-preemptive
				2. Convey effect
					cpu양보 전까지는 모두 대기
		
		2. SJF
			서비스시간 짧은거부터
			
			장점 	
				1.non-preemptive
				2. It gives an advantage for shorter job
				3. It gives the minimum average waiting time.
			단점	
				1.non-preemptive
				2. 불공평한 스케쥴링
				3. 다음것이 얼마나 걸리는지 알기 힘듬
				It requires execution time estimation of processes.
				4. 긴 서비스는 계속 밀린다.
				
		3. SRTF
			서비스시간 짧은거부터
			
			장점 
				1. preemptive
				2. It gives an advantage for shorter job
				3. It gives the minimum average waiting time.

			단점 
				1. preemptive
				2. It requires execution time estimation of processes.

			
		4. RR
			장점
				1. FCFS
				2. Fair for ALL 
				3. 우선순위 높은순
				4. 인터렉티브한 작업 처리가 좋음
			단점
				1. 오버헤드 큼
				2. 타임퀀텀에 따라 퍼포먼스가 갈린다
				
		5. 우선순위 스케듈링
			우선순위가 높은 순서대로
			동일하다면 FCFS
			
			static, dynamic
			
			단점 
				1. 	새치기 당하기 starvation
					낮은 우선순위는 영원히 밀리게된다.
						해결책 : Aging
							차근차근히 우선순위를 높여준다.

```