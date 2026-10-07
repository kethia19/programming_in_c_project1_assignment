# C Programming Project 1

This repository contains my solutions for the **C Programming Project 1 Assignment**.

The project covers basic C programming concepts including:

* Variables and data types
* Functions
* Conditional statements
* Loops
* Input validation
* Arrays
* Recursion
* Arduino programming
* Sensor data processing

## Project Questions

### Question 1 — Sensor Monitoring System

A C program that receives temperature and turbidity readings, calculates a water-quality index, and classifies the water as:

* **Good**
* **Warning**
* **Critical**

**File:** `q1.c`

### Question 2 — Transaction Processing and Control Flow

A mobile money transaction system that allows a user to:

1. Deposit money
2. Withdraw money
3. Check the balance
4. View a transaction summary
5. Exit the system

**File:** `q2.c`

### Question 3 — Functions & Recursive Problem Solving

A delivery distance analysis program that calculates:

* Total distance
* Average distance
* Longest route
* Number of routes above a given limit
* Total distance using recursion

**File:** `q3.c`

### Question 4 — Arduino-Based Smart Parking System

An Arduino simulation that uses an **HC-SR04 ultrasonic sensor** to detect whether a parking space is occupied.

* Green LED → Parking space available
* Red LED + buzzer → Parking space occupied
* Detection threshold → **30 cm**

**File:** `q4.ino`

The circuit was designed and tested using **Tinkercad**.

## Repository Structure

```text
programming_in_c_project1_assignment/
│
├── README.md
├── q1.c
├── q2.c
├── q3.c
└── q4.ino
```

## How to Run the C Programs

Make sure a C compiler such as GCC is installed.

### Question 1

```bash
gcc q1.c -o q1
./q1
```

### Question 2

```bash
gcc q2.c -o q2
./q2
```

### Question 3

```bash
gcc q3.c -o q3
./q3
```

On Windows, the compiled programs can also be run using:

```bash
q1.exe
q2.exe
q3.exe
```

## Arduino Simulation

Question 4 was created using Arduino Uno and simulated in Tinkercad.

The system uses:

* Arduino Uno R3
* HC-SR04 ultrasonic sensor
* Green LED
* Red LED
* 220 Ω resistors
* Piezo buzzer
* Breadboard

The ultrasonic sensor measures the distance to a vehicle. If the vehicle is **30 cm or closer**, the system marks the parking space as occupied.

## Links

**GitHub Repository:**
https://github.com/kethia19/programming_in_c_project1_assignment.git

**Tinkercad Circuit:**
https://www.tinkercad.com/things/kGPV3WEGwbP-arduino-based-smart-parking-system

## Author

**Kethia Kayigire Ngabire**