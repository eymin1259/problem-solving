# Hash, 해시
- 정의 : 해시코드를 배열의 인덱스로 환산해서 데이터에 접근하는 자료구조
- 해시함수 : 임의의 길이의 데이터(입력받은 키값)를 고정된 길이의 데이터(해시코드)로 대응시키는 함수
- 시간복잡도
  - insert : O(1)
  - erase : O(1)
  - find : O(1)
- 충돌
  - 서로 다른 키가 동일한 해시코드를 만드는 경우
  - 서로 다른 해시코드가 같은 인덱스로 환산되는 경우
- 충돌회피
  - Chaining : 각 인덱스마다 링크드리스트를 가지고 있어 같은 인덱스라도 링크드리스트에 추가하는 방식
  - Open addressing : 충돌 발생 시 탐사를 통해 빈 공간을 찾아나서는 방식
  

