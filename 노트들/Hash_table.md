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

## 해시 테이블
### 개요
* 접근 삭제 시간 복잡도 : O(1) 개빠르다
* Collision : 동일한 key 값에 복수 개의 데이터가 
하나의 테이블에 존재할 수 있게 되는 것

### 해시 함수
* 인덱스 값을 설정해주는 함수
  * 보통 나머지연산은 큰 소수로 이뤄지면 좋다.
* 단 등가교환이 있다 과유불급
  * 좋은 해시 함수는 최대한 Collsion이 적어야한다.
  * Collsion이 많아지면 O(1)에서 O(n)으로 가까워진다.
    * 그런데 너무 심각하게 Collsion이 있다면 메모리를 너무 차지하게 된다.

### Collsion의 해결
1. 개방 주소법
   * linear 하게 버킷을 탐색한다
   * Double hashing probing 하나의 해쉬 함수에서 충돌이 발생하면 2 차 해쉬 함수를 이용해 새로운 주소를 할당한다.

2. 분리 연결법
   1. 동일버킷 :  연결 리스트를 사용하는 방식(Linked List) 
   2. 동일버킷 : Tree 를 사용하는 방식 (Red-Black Tree) 