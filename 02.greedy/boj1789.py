# 문제
# 서로 다른 N개의 자연수의 합이 S라고 한다. S를 알 때, 자연수 N의 최댓값은 얼마일까?

# 입력
# 첫째 줄에 자연수 S(1 ≤ S ≤ 4,294,967,295)가 주어진다.

# 출력
# 첫째 줄에 자연수 N의 최댓값을 출력한다


target = int(input())
sum = 0
num = 1
cnt = 0
while sum < target:
    sum += num
    cnt += 1
    if sum == target:
      break  
    elif (sum+num+1) > target:
        sum -= num  
        cnt -= 1
    num += 1
print(cnt)
