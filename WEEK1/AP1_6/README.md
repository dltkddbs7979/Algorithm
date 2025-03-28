# 🔎 Recursive Fibonacci

## 📌 Description

교재/강의자료를 참고하여 **재귀 함수(Recursion)를 이용한 피보나치 수 계산 프로그램**을 구현하시오.

---

## 📥 Input

- 한 줄에 정수 `n`이 주어진다. (`n`번째 피보나치 수를 구함)

---

## 📤 Output

- `n`번째 피보나치 수  
- 재귀 호출 횟수  

---

## 📝 Sample Input 1

5  

## 📌 Sample Output 1

5  
15  

---

## 🧐 Algorithm Explanation

### ✅ 재귀 피보나치 (Recursive Fibonacci)란?

재귀를 이용하여 피보나치 수를 구하는 방법입니다.

### 🔹 동작 원리

1. `fib(n)`을 호출하면, `fib(n-1) + fib(n-2)`의 값을 반환합니다.  
2. **기저 사례(Base Case)**: `fib(0) = 0`, `fib(1) = 1`입니다.  
3. 중복된 계산이 많아 비효율적입니다.  

### ⏳ 시간 복잡도

- **O(2ⁿ)**: 매우 비효율적인 방식이며, 중복된 호출이 많습니다.

### 📌 특징

- **단순하지만 성능이 낮음**
- **큰 `n`에 대해 비효율적**
- **재귀 호출 횟수가 1,000,000을 초과하면 결과를 `1000000`으로 나눈 값을 출력**
