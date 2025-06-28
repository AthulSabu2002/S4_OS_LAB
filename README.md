# Operating Systems Lab 🖥️

Operating Systems Lab programs implemented in C and Shell scripting for S4 CSE B.Tech curriculum. This repository contains comprehensive implementations of various OS algorithms and concepts.

## 📋 Programs Included

### 🔄 CPU Scheduling Algorithms
- **FCFS (First Come First Serve)** - `fcfs.c`
- **SJF (Shortest Job First)** - `sjf.c`
- **Priority Scheduling** - `priorityScheduling.c`
- **Round Robin** - `roundRobin.c`

### 💾 Memory Management
- **Memory Allocation** - `memoryAllocation.c`
- **FIFO Page Replacement** - `fifoPageReplacement.c`
- **LRU (Least Recently Used)** - `leastRecentlyUsed.c`
- **LFU (Least Frequently Used)** - `lfu.c`

### 💿 Disk Scheduling Algorithms
- **FCFS Disk Scheduling** - `fcfsDisk.c`
- **SCAN Algorithm** - `scan.c`
- **C-SCAN Algorithm** - `cScan.c`

### 🔐 Process Synchronization
- **Banker's Algorithm** - `bankersAlgorithm.c`
- **Semaphore Implementation** - `semaphore.c`

### 🐚 Shell Scripts
- **Calculator** - `calculator.sh`
- **Factorial** - `factorial.sh`
- **Fibonacci Series** - `fibonacci.sh`
- **Greater Number** - `greaterNumber.sh`

## 🎯 Course Information

- **Course**: Operating Systems Lab
- **Semester**: 4th Semester
- **Program**: B.Tech Computer Science Engineering
- **Languages**: C Programming & Shell Scripting

## 🚀 Getting Started

### Prerequisites
- GCC Compiler
- Linux/Unix Environment
- Basic knowledge of C programming and shell scripting

### Installation & Usage

1. **Clone the repository**:
   ```bash
   git clone https://github.com/AthulSabu2002/S4_OS_LAB.git
   cd os-lab
   ```

2. **For C Programs**:
   ```bash
   # Compile
   gcc filename.c -o output
   
   # Run
   ./output
   ```

3. **For Shell Scripts**:
   ```bash
   # Make executable
   chmod +x script.sh
   
   # Run
   ./script.sh
   ```

## 💡 Example Usage

```bash
# CPU Scheduling - FCFS
gcc fcfs.c -o fcfs
./fcfs

# Memory Management - LRU
gcc leastRecentlyUsed.c -o lru
./lru

# Disk Scheduling - SCAN
gcc scan.c -o scan
./scan

# Shell Script - Calculator
chmod +x calculator.sh
./calculator.sh
```

## 📚 Algorithms Overview

### CPU Scheduling
- **FCFS**: Processes executed in arrival order
- **SJF**: Shortest job executed first (with arrival time consideration)
- **Priority**: Higher priority processes execute first
- **Round Robin**: Time quantum-based scheduling

### Memory Management
- **FIFO**: First-in-first-out page replacement
- **LRU**: Least recently used page replacement
- **LFU**: Least frequently used page replacement

### Disk Scheduling
- **FCFS**: Requests serviced in arrival order
- **SCAN**: Elevator algorithm - head moves in one direction
- **C-SCAN**: Circular SCAN algorithm

### Process Synchronization
- **Banker's Algorithm**: Deadlock avoidance algorithm
- **Semaphore**: Mutex implementation for process synchronization

## 🛠️ Technologies Used

- **C Programming Language**
- **Shell Scripting (Bash)**
- **GCC Compiler**
- **Linux/Unix System Calls**

## 📖 Learning Outcomes

- Understanding of CPU scheduling algorithms
- Memory management techniques
- Disk scheduling optimization
- Process synchronization mechanisms
- Deadlock prevention and avoidance
- Shell scripting fundamentals
- System programming concepts

## 🎓 Academic Context

This repository contains lab work from the Operating Systems course, designed to provide hands-on experience with:
- Operating system algorithms implementation
- System programming in C
- Shell scripting automation
- Process and resource management concepts

## 🤝 Contributing

This repository contains academic coursework. For improvements or corrections:

1. Fork the repository
2. Create a feature branch
3. Make your changes
4. Submit a pull request

## 📝 Note

These programs are implemented for educational purposes as part of the OS Lab curriculum. Each program includes proper input validation and demonstrates the core concepts of the respective algorithms.

## 📧 Contact

For questions about implementations or clarifications on any algorithm, feel free to reach out!

---
*S4 CSE B.Tech - Operating Systems Laboratory*
