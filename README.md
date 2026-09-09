# ⚡ Think Fast Quiz

A terminal-based MCQ quiz game written in **C** that tests your knowledge across multiple subjects and difficulty levels. Choose a topic, pick your difficulty, answer 15 questions, and get instant scoring with correct answers revealed at the end.

---

## 📋 Features

- **3 Subjects** — Programming Fundamentals, Physics, and General Knowledge
- **3 Difficulty Levels** — Elementary, Medium, and Advanced
- **135 Total Questions** — 15 questions per quiz across 9 unique combinations
- **Instant Scoring** — See your score and the correct answers immediately after each quiz
- **Quiz Retake** — Option to retake the quiz with a different subject or difficulty without restarting
- **Student Profile** — Records your name, NU-ID, and age before the quiz begins

---

## 🗂️ Project Structure

```
think-fast-quiz/
├── sourceCode.c        # Main source code
├── PFElQues.txt        # Programming Fundamentals — Elementary questions
├── PFMedQues.txt       # Programming Fundamentals — Medium questions
├── PFAdvQues.txt       # Programming Fundamentals — Advanced questions
├── PhyElQues.txt       # Physics — Elementary questions
├── PhyMedQues.txt      # Physics — Medium questions
├── PhyAdvQues.txt      # Physics — Advanced questions
├── GKElQues.txt        # General Knowledge — Elementary questions
├── GKMedQues.txt       # General Knowledge — Medium questions
├── GKAdvQues.txt       # General Knowledge — Advanced questions
├── .gitignore
└── README.md
```

---

## 🛠️ Build & Run

### Prerequisites

- A C compiler (GCC, MinGW, Clang, or MSVC)

### Compile

```bash
gcc sourceCode.c -o thinkfast
```

### Run

```bash
./thinkfast
```

> **Note:** Make sure all the question files (`*.txt`) are in the same directory as the executable.

---

## 🎮 How to Play

1. Enter your **name**, **NU-ID**, and **age**.
2. Choose a **subject**:
   - `1` — Programming Fundamentals
   - `2` — Physics
   - `3` — General Knowledge
3. Choose a **difficulty level**:
   - `1` — Elementary
   - `2` — Medium
   - `3` — Advanced
4. Answer each of the **15 MCQs** by typing `a`, `b`, `c`, or `d`.
5. After the quiz, review your **score** and the **correct answers**.
6. Choose to **retake** the quiz or **exit**.

---

## 🧩 Tech Stack

| Component | Detail |
|-----------|--------|
| Language | C |
| I/O | `stdio.h` — terminal-based input/output |
| Data | Questions loaded from `.txt` files at runtime via file I/O |
| Structures | `struct student` for user profile |

---

## 👥 Authors

- **23K-0583**

---

## 📄 License

This project was developed as a university course project for **Programming Fundamentals**. Feel free to use it for learning purposes.
