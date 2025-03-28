# 🔢 Collatz Sequence (2)

## 📝 Description  
양의 정수 `n, m`이 주어진다면 (`n \leq m`),
- `n`보다 크거나 같고 `m`보다 작거나 같은 정수중에서
- **콜라츠 수연의 길이가 가장 길은 정수**를 찾어 출력하십시오.
- 다른 정수들이 같은 콜라츠 수연 길을 가지고 있는 경우, **가장 크고 큰 정수**를 출력하십시오.

---

## 📥 Input  
- 첫째 줄에 **양의 정수 `n, m`**이 주어진다. (`1 \leq n \leq m`)

📌 **입력 예시**  
```txt
1 10
```

---

## 📤 Output  
1. 첫 줄에 **콜라츠 수열의 길이가 가장 긴 정수** `x`와 **x의 콜라츠 수열 길이**를 공백으로 구분하여 출력한다.
2. 둘째 줄에 `x`로부터 시작하는 콜라츠 수열을 출력한다.
3. 단, 줄 끝에는 **공백 문자를 출력하지 않도록** 주의한다.

📌 **출력 예시**  
```txt
9 20
9 28 14 7 22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1
```

📌 **입력 & 출력 예시 2**  
```txt
Input:
100 1000

Output:
871 179
871 2614 1307 3922 1961 5884 2942 1471 4414 2207 6622 3311 9934 4967 14902 7451 22354 11177 33532 16766 8383 25150 12575 37726 18863 56590 28295 84886 42443 127330 63665 190996 95498 47749 143248 71624 35812 17906 8953 26860 13430 6715 20146 10073 30220 15110 7555 22666 11333 34000 17000 8500 4250 2125 6376 3188 1594 797 2392 1196 598 299 898 449 1348 674 337 1012 506 253 760 380 190 95 286 143 430 215 646 323 970 485 1456 728 364 182 91 274 137 412 206 103 310 155 466 233 700 350 175 526 263 790 395 1186 593 1780 890 445 1336 668 334 167 502 251 754 377 1132 566 283 850 425 1276 638 319 958 479 1438 719 2158 1079 3238 1619 4858 2429 7288 3644 1822 911 2734 1367 4102 2051 6154 3077 9232 4616 2308 1154 577 1732 866 433 1300 650 325 976 488 244 122 61 184 92 46 23 70 35 106 53 160 80 40 20 10 5 16 8 4 2 1
```

---

## 🧐 Algorithm Explanation  

### ✅ **콜라츠 수열 길이 계산 및 최댓값 찾기**
1. `n`부터 `m`까지의 모든 정수에 대해 콜라츠 수열의 길이를 계산
2. **가장 긴 길이를 가진 정수**를 찾음
3. 같은 길이를 가진 정수가 여러 개일 경우, **가장 큰 정수** 선택
4. 해당 정수의 콜라츠 수열을 출력

---

## ⏳ **시간 복잡도 분석**  
콜라츠 수열 길이는 일반적으로 **O(log N)** 정도의 복잡도를 가지므로, 범위 `[n, m]`에 대해 탐색하는 경우 **O((m-n) log m)** 의 복잡도를 예상할 수 있습니다.

✔ 최악의 경우: 약 `O(m log m)` 단계에서 `m`까지 탐색 후 종료  
✔ 특정 `N`에 대해서는 예외적으로 긴 수열을 가질 수 있음 (예: `N = 871`)

---

## 📌 **특징**  
✔ `N = 1`부터 시작할 경우 항상 `1`에 도달하는 것이 알려져 있음  
✔ 일부 정수의 경우 예외적으로 긴 콜라츠 수열을 생성할 수 있음  
✔ 수학적으로 아직 완전히 증명되지 않은 흥미로운 문제  

---

