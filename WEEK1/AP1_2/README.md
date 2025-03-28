# 🔎 Sum of Array Elements

## 📌 Description

교재/강의자료를 참고하여 **배열의 처음 n개 요소의 합을 계산하는 프로그램**을 구현하시오.

---

## 📥 Input

- 첫째 줄에 **정수의 개수 N**이 주어진다. (배열의 크기)
- 둘째 줄에 **N개의 정수**가 주어진다.

---

## 📤 Output

- 입력된 **N개의 정수의 합**을 출력한다.

---

## 📝 Sample Input 1

5  
1 2 3 4 5  

## 📌 Sample Output 1

15  

---

## 🧐 Algorithm Explanation

### ✅ 배열 요소의 합이란?

배열 요소의 합을 구하는 것은 **배열 내 모든 값을 더하는 기본적인 연산**입니다.

### 🔹 동작 원리

1. `N`개의 정수를 입력받아 배열에 저장합니다.  
2. 배열의 처음부터 끝까지 순회하며 모든 요소를 더합니다.  
3. 최종 합을 출력합니다.  

### ⏳ 시간 복잡도

- **O(N)**: 배열의 모든 요소를 한 번씩 방문하므로 선형 시간 복잡도를 가집니다.

### 📌 특징

- **단순한 반복문을 이용하여 구현 가능**
- **데이터 크기가 커질수록 시간이 증가하지만, 매우 효율적**
