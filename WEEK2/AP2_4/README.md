# 🔢 Time Complexity Analysis (4)

## 📝 Description  
아래 코드의 출력 결과를 출력하십시오.  
함수가 자신을 재귀하는 비효율적 방식이기 때문에, **시간 본산도 함수의 재귀적 관계를 이용하여 프로그래밍을 진행하십시오.**

```cpp
#include <bits/stdc++.h>
using namespace std;

typedef long long long_t;

long_t fun(long_t n) {
    if (n == 0)
        return 1;
    else {
        long_t s = 0;
        for (int i=1; i<=8; i++)
            s += fun(n/4);
        return s;
    }
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
8
```

---

## 🧐 Algorithm Explanation  

### ✅ **재귀적 관계 분석**
함수 `fun(n)`은 다음과 같은 재귀식으로 표현될 수 있다:

\[
T(n) = 8 \times T(n/4)
\]

기저 조건은 `T(0) = 1`이다. 이를 일반항으로 전개하면:

\[
T(n) = 8^k \times T(n / 4^k)
\]

`n / 4^k = 0`이 되는 시점에서 종료되므로, `n = 4^k`라 가정하면:

\[
k = \log_4(n)
\]

따라서,

\[
T(n) = 8^{\log_4(n)} = n^{\log_4 8} = n^{3/2}
\]

즉, `fun(n)`의 **시간 복잡도는 O(n^{3/2})** 이다.

---

## 📌 **특징**  
✔ **비효율적인 중복 연산**을 수행하므로, 개선이 필요함  
✔ **시간 복잡도가 O(n^{3/2})로 급격히 증가**  
✔ **큰 입력값일수록 지수적으로 증가**  

---

## 📝 Sample Test Cases  

📌 **입력 & 출력 예시**

```txt
Input 1:
1

Output 1:
8
```

```txt
Input 2:
1024

Output 2:
262144
```

```txt
Input 3:
32768

Output 3:
16777216
```

