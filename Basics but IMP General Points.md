# 📘 DSA Notes – Shraddha Mam

---

## 📌 Introduction

### ✅ Run a C++ File in Linux Terminal

```bash
g++ filename.cpp -o filename && ./filename
```
> 💡 Select and then Press `Ctrl + /` to comment multiple lines at once (in supported editors).

---

### 📍 Semicolon `;`

Acts like a **full stop (.)** in a sentence. It **terminates a statement**.

---

### 🔢 Binary Basics

- `0` or `1` → Binary number
- 1 binary digit = **1 bit**
- **8 bits = 1 byte**

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
