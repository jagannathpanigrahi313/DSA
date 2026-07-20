# 📘 DSA Notes – Shraddha Mam

---

## 📌 Introduction

### ✅ Run a C++ File in Linux Terminal

```bash
g++ filename.cpp -o filename && ./filename
```

---
### ✅ Run a C++ File in windows Terminal
```bash
g++ filename.cpp -o filename.exe; .\filename.exe
```
### ✅ Run a C File in windows Terminal
```bash
gcc filename.c -o filename.exe; .\filename.exe
```
```bash
______ --version
```
---
> 💡 Select and then Press `Ctrl + /` to comment multiple lines at once (in supported editor write hos).

> 💡 /*__________*/ in between this you can write 2 OR more lines it will be commited .
> 💡 //________ this is also will be committed 

### 📍 Semicolon `;`

Acts like a **full stop (.)** in a sentence. It **terminates a statement**.

---

### 🔢 Binary Basics

- `0` or `1` → Binary number
- 1 binary digit = **1 bit**
- **8 bits = 1 byte**

---
### do you know why the code becomes a colourfull?
 Every word in code passes token pass rule therfore it becomes colourfull due to token passing colour customization .
 ---
### 📦 Variables

Variables are **containers** to store data.

- Can be a **letter** or **word**
- ❌ Must not start with a digit

---

## 🔍 Difference Between `float` and `double`

| You Write            | ✅ Works? | 👍 Good Practice? | 💬 Why?                                                                          |
|----------------------|----------|-------------------|----------------------------------------------------------------------------------|
| `float a = 3.14;`    | ✅        | ❌                 | `3.14` is a `double`, not an exact match                                         |
| `float a = 3.14f;`   | ✅        | ✅                 | `f` makes it a float exactly                                                     |
| `double b = 3.14;`   | ✅        | ✅                 | `3.14` is already a `double`                                                    |
| `double b = 3.14f;`  | ✅        | ❌                 | Giving a `float` to a `double` (less precise → more precise, not ideal)         |

---

## 🔄 Difference Between `\n` and `endl`

### 💡 Code Example

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "hello world\n";
    cout << "jaga" << endl;
    return 0;
}
```

### 🧠 Output

```
hello world
jaga
```

> 🔸 If you don’t use `\n`, output = `helloworldjaga`  
> 🔸 `\n` is used **inside quotes (" ")**  
> 🔸 `endl` is used to insert newline and **flush output buffer**

---

## ⚙️ Syntax

"**Syntax**" means the **rules** of C++ — how code must be written to be valid.

---

## 🧠 Operands & Operators

An **operand** is a value/variable on which an operator works.

🧾 Example: `a + b` → `a` and `b` are operands, `+` is the operator

---

## 🔤 Quotes in C++

### 1️⃣ Single Quotes `' '`

- Used for: **Single characters**
- Data type: `char`
- Size: 1 byte
- Examples: `'A'`, `'z'`, `'1'`, `'#'`

📌 Use `' '` when:
- You need a **single character** → `char ch = 'A';`
- ASCII calculations or comparisons → `if (ch >= 'A' && ch <= 'Z')`

---

### 2️⃣ Double Quotes `" "`

- Used for: **Strings**
- Data type: `const char*` or `string`
- Size: More than 1 byte (ends with `\0`)
- Examples: `"A"`, `"apple"`, `"123"`, `" "`

📌 Use `" "` when:
- You need a **word/sentence** → `string name = "Alice";`
- Outputting text → `cout << "Hello";`
- Comparing strings → `if (name == "Admin")`

---

## ➕ Modulo and Division Example

Extract digits of a number:

```
345 % 10 = 5   → last digit  
345 / 10 = 34  
34 % 10 = 4    → next digit  
34 / 10 = 3  
3 % 10 = 3     → next digit
```

---

## ⏱️ Time Complexity

| Method                | Time Complexity |
|-----------------------|-----------------|
| Normal multiplication | O(n)            |
| Binary Exponentiation | O(log n)        |

---

🔢 Digits 0–9 (subscripts):
Use these Unicode codes with Ctrl + Shift + U: 

| Digit | Unicode | Result |
| ----- | ------- | ------ |
| 0     | 2080    | ₀      |
| 1     | 2081    | ₁      |
| 2     | 2082    | ₂      |
| 3     | 2083    | ₃      |
| 4     | 2084    | ₄      |
| 5     | 2085    | ₅      |
| 6     | 2086    | ₆      |
| 7     | 2087    | ₇      |
| 8     | 2088    | ₈      |
| 9     | 2089    | ₉      |

Example:
To write t₁₀:
Type: t → Ctrl + Shift + U, 2081, Enter → ₁
Then again: Ctrl + Shift + U, 2080, Enter → ₀
→ t₁₀

🔤 Letters (like ₙ):
Only a few subscript letters exist:

| Letter | Unicode | Result |
| ------ | ------- | ------ |
| a      | 2090    | ₐ      |
| e      | 2091    | ₑ      |
| h      | 2095    | ₕ      |
| i      | 1D62    | ᵢ      |
| j      | 2C7C    | ⱼ      |
| k      | 2096    | ₖ      |
| l      | 2097    | ₗ      |
| m      | 2098    | ₘ      |
| n      | 2099    | ₙ      |
| o      | 2092    | ₒ      |
| p      | 209A    | ₚ      |
| r      | 1D63    | ᵣ      |
| s      | 209B    | ₛ      |
| t      | 209C    | ₜ      |
| x      | 2093    | ₓ      |

## simple loop
```cpp
for (datatype variable : container) {
    // use variable
}
```
Ex:
```cpp
vector<int> v = {10,20,30,40};

for(int i = 0; i < v.size(); i++)
{
    cout << v[i] << " ";
}
```
```cpp
for(int val : v)
{
    cout << val << " ";
}
```

Note: in DSA there are two 2 Deque Vs dequeue Both are different 
      Deque: Double Ended Queue
      Dequeue: POP in queue





































| Statement         | Purpose                                        |
| ----------------- | ---------------------------------------------- |
| `if`              | Execute code only if a condition is true       |
| `if-else`         | Choose between two options                     |
| `if-else if-else` | Choose among multiple options                  |
| `for`             | Repeat code a known number of times            |
| `while`           | Repeat while a condition is true               |
| `do...while`      | Repeat at least once, then check the condition |

A switch is used when you want to choose one option out of many based on a single value.
Instead of writing many if-else if statements, switch can make the code cleaner.
```cpp
switch (expression)
{
    case value1:
        // code
        break;

    case value2:
        // code
        break;

    default:
        // code
}
```

Class = Blueprint/template that defines what data and functions something has.
Object = A real instance created from that class.
Classes help organize related data and behavior together.
They make programs easier to write, maintain, and scale.

In one sentence:
A class defines what something is and what it can do; an object is the actual thing created from that definition
