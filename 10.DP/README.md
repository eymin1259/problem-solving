dynamic programming - 동적계획법

- 큰 문제를 작게 나누고, 같은 문제들은 캐싱해놓은 해결을 이용하여 한번씩만 푸는 기법
- 분할정복과 비교 : 작게 나누는것은 비슷하지만, 한번 해결했던 문제를 다시 해결할 필요가 없는것이 차이
- dp 사용 조건
  - 큰 문제를 작은 문제로 나눌수 있다
  - 작은 문제에서 구한 정답은 작은 문제를 포함하는 큰문제에서도 동일하다
- dp테이블 : 문제의 해결들을 저장하는 리스트
- dp 풀이
  - dp 테이블에 어떤값이 저장되는지 정의
  - 점화식 세우기
  - 초기값 설정