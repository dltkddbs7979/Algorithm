# 🔢 Time Complexity Analysis (2)

## 📝 Description  
아래 코드의 출력 결과를 출력하십시오.

```cpp
#include <bits/stdc++.h>
using namespace std;

typedef long long long_t;

long_t fun(long_t n, long_t m, long_t p) {
    long_t i, j, k, cnt = 0;
    for (i=1; i<=2*n; i+=4)
        for (j=1; j<=2*m; j*=2)
            for (k=4*p; k>=1; k/=2)
                cnt++;
    return cnt;
}

int main() {
    long_t n, m, p;
    scanf("%lld %lld %lld", &n, &m, &p);
    printf("%lld", fun(n, m, p));
}
```

---

## 📥 Input  
- 첫 줄에 정수 `n`, `m`, `p`가 주어진다.  

📌 **입력 예시**  
```txt
1 2 4
```

---

## 📤 Output  
- 첫 줄에 `fun(n, m, p)`의 리턴 값을 출력한다.  

📌 **출력 예시**  
```txt
15
```

---

## 🧐 Algorithm Explanation  

### ✅ **반복문의 동작 방식**
함수 `fun(n, m, p)`의 반복문은 다음과 같이 구성된다:

1. **첫 번째 루프 (`i`)**: `1`부터 `2n`까지 **4씩 증가** → 반복 횟수:  
   \[ O(n) \]
2. **두 번째 루프 (`j`)**: `1`부터 `2m`까지 **2배씩 증가** → 반복 횟수:  
   \[ O(\log m) \]
3. **세 번째 루프 (`k`)**: `4p`부터 `1`까지 **절반씩 감소** → 반복 횟수:  
   \[ O(\log p) \]

### ⏳ **시간 복잡도 분석**  
전체 반복문 실행 횟수는 다음과 같다:
\[ O(n \cdot \log m \cdot \log p) \]

즉, 최종적인 **시간 복잡도는 O(n log m log p)** 이다.

---

## 📌 **특징**  
✔ `n`의 크기에 선형적으로 비례하여 증가  
✔ `m`과 `p`는 로그 스케일로 증가하므로 상대적으로 영향이 적음  
✔ 이중 로그 연산이 포함되므로 대규모 데이터에서도 비교적 빠름  

---

## 📝 Sample Test Cases  

📌 **입력 & 출력 예시**

```txt
Input 1:
1 2 4

Output 1:
15
```

```txt
Input 2:
1024 2048 4096

Output 2:
99840
```

```txt
Input 3:
32768 32768 32768

Output 3:
5013504
```

