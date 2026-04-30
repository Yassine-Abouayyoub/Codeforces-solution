# Problem: A. Array Coloring

# Platform: Codeforces

# Language: C

# Topic: Implementation, Sorting, Parity

# Rating: 800

---

## 📌 Problem Description

You are given an array of **distinct integers**.  
You need to color each element either **red** or **blue** such that:

1. Adjacent elements in the original array have different colors.
2. After sorting the array in increasing order, adjacent elements must also have different colors.

Your task is to determine whether such a coloring is possible.

---

## 💡 Key Idea

Instead of explicitly coloring and sorting:

- Assign colors based on **position parity**:
  - Odd index → one color
  - Even index → another color

- Track positions of each value:
  - `pos[x] = position of value x in original array`

- After sorting, consecutive numbers `x` and `x+1` must have **different colors**  
  → meaning their original positions must have **different parity**

---

## ✅ Algorithm

1. Read input.
2. Store the position of each value.
3. For every pair `(x, x+1)`:
   - If both positions have the same parity → ❌ invalid
4. Otherwise → ✅ valid

---

## 🧠 Complexity

- Time Complexity: **O(n)**
- Space Complexity: **O(n)**

---

## 💻 Code

```c
#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int a[105];
        int pos[105];

        for (int i = 1; i <= n; i++) {
            scanf("%d", &a[i]);
            pos[a[i]] = i;
        }

        int ok = 1;

        for (int x = 1; x < n; x++) {
            if (pos[x] % 2 == pos[x + 1] % 2) {
                ok = 0;
                break;
            }
        }

        if (ok)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}