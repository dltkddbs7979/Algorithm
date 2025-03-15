# 🔢 Time Complexity Analysis (3)

## 📝 Description  
아래 코드의 출력 결과를 출력하십시오.  
다른 방식이 아니라, 중복 방문 문제를 재계산하는 비효율적 방식이기 때문에, **시간 본산도 함수의 재귀적 관계를 이용하여 프로그래밍을 진행하십시오.**

```cpp
#include <bits/stdc++.h>
using namespace std;

typedef long long long_t;

long_t fun(long_t n) {
    if (n == 0)
        return 1;
    else
        return fun(n/2) + fun(n/2) + fun(n/2) + fun(n/2);
}

int main() {
    long_t n;
    scanf("%lld", &n);
    printf("%lld", fun(n));
}
```

---

## 📥 Input  
- 첫 줄에 정수 `n`이 주어진다.  

📌 **입력 예시**  
```txt
1
```

---

## 📤 Output  
- 첫 줄에 `fun(n)`의 리턴 값을 출력한다.  

📌 **출력 예시**  
```txt
4
```

---

## 🧐 Algorithm Explanation  

### ✅ **재귀적 관계 분석**
함수 `fun(n)`은 다음과 같은 재귀식으로 표현될 수 있다:

\[
T(n) = 4 \times T(n/2)
\]

기저 조건은 `T(0) = 1`이다. 이를 일반항으로 전개하면:

\[
T(n) = 4^k \times T(n / 2^k)
\]

`n / 2^k = 0`이 되는 시점에서 종료되므로, `n = 2^k`라 가정하면:

\[
k = \log_2(n)
\]

따라서,

\[
T(n) = 4^{\log_2(n)} = n^{\log_2 4} = n^2
\]

즉, `fun(n)`의 **시간 복잡도는 O(n^2)** 이다.

---

## 📌 **특징**  
✔ **비효율적인 중복 연산**을 수행하므로, 개선이 필요함  
✔ **시간 복잡도가 O(n^2)으로 매우 느림**  
✔ **큰 입력값일수록 기하급수적으로 증가**  

---

## 📝 Sample Test Cases  

📌 **입력 & 출력 예시**

```txt
Input 1:
1

Output 1:
4
```

```txt
Input 2:
1024

Output 2:
4194304
```

```txt
Input 3:
32768

Output 3:
4294967296
```

