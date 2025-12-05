Here is a clean, complete, well-formatted **README.md** for your repository **CPU Scheduling Algorithm**.
You can copy–paste this directly into GitHub.

---

# ⏱️ CPU Scheduling Algorithms – C++ Implementations

This repository contains simple, clean, and easy-to-understand implementations of major **CPU Scheduling Algorithms** used in Operating Systems.
Each algorithm follows the same coding pattern, making it beginner-friendly and perfect for OS lab work, assignments, or personal learning.

---

## 📌 **Algorithms Included**

* **FCFS (First Come First Serve)**

  * With Arrival Time
  * Without Arrival Time
* **SJF (Shortest Job First)**

  * With Arrival Time (Non-preemptive)
  * Without Arrival Time
* **Priority Scheduling**

  * With Arrival Time
  * Without Arrival Time
* (*Optional if included*) **Round Robin Scheduling**

---

## 🧠 **What This Project Covers**

* Process structure & input handling
* Burst time, arrival time, and priority usage
* Calculation of:

  * Waiting Time (WT)
  * Turnaround Time (TAT)
* Sorted scheduling order using **built-in C++ functions (sort, lambda, vectors)**
* Job sequence output in format:

  ```
  Job Sequence: P1 -> P2 -> P3
  ```

---

## 📂 **Project Structure**

```
/FCFS/
   fcfs_with_arrival.cpp
   fcfs_without_arrival.cpp

/SJF/
   sjf_with_arrival.cpp
   sjf_without_arrival.cpp

/Priority/
   priority_with_arrival.cpp
   priority_without_arrival.cpp
```

(*Adjust folder names if different*)

---

## ▶️ **How to Compile & Run**

Use the g++ compiler:

```bash
g++ filename.cpp -o output
./output
```

Example:

```bash
g++ fcfs_with_arrival.cpp -o fcfs
./fcfs
```

---

## 📝 **Sample Output**

```
Process   BT   AT   WT   TAT
P1        5    0    0    5
P2        3    1    4    7
P3        8    2    7    15

Job Sequence: P1 -> P2 -> P3
```

---

## 🎯 **Why This Repository Is Useful**

* Clean & consistent code structure
* Easy to understand for beginners
* Uses modern C++ features (`vector`, `sort`, lambda)
* Perfect for:

  * OS Lab exams
  * Assignments
  * Understanding scheduling concepts
  * Demonstration projects

---

## 📘 **References**

* Abraham Silberschatz – Operating System Concepts
* Galvin – Operating Systems Principles
* C++ Reference Documentation


