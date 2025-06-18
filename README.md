# 🏈 Dynamic Team Chemistry System

A feature prototype designed for **EA Sports College Football** that introduces dynamic, evolving chemistry mechanics between players. Developed as a solo project to demonstrate gameplay system design, object-oriented modelling, and memory-safe C++ coding practices.

---

## 🔥 Feature Overview
Simulates how real-life player synergy, morale, and leadership affect football performance. This system adds:
- Chemistry-based gameplay buffs and penalties
- Training sessions and events that influence team cohesion
- A full object-oriented model with extensible C++ class structures

---

## 💡 Core Concepts
| Component | Purpose |
|----------|---------|
| `Team` | Manages roster and overall team chemistry |
| `Player` | Has morale, chemistry, and performance stats |
| `Coach` | Influences practice and player development |
| `Chemistry` | Tracks relationships between players |
| `PracticeSession` | Improves cohesion through training |
| `Game` | Affects chemistry based on performance |
| `Event` | External triggers like injuries or transfers |

---

## 📐 UML Class Diagram
This system was fully modelled using UML before implementation. Classes are structured for:
- Clear ownership (`Team` owns `Player`)
- Modular extensions (e.g. `Event` could evolve into its subsystem)
- Future serialization for save/load support

> [View full diagram](https://miro.com/app/board/uXjVIKRv7u4=/)

---

## ⚙️ Tech Stack
- **Language**: C++
- **Tools**: Miro, Visual Studio, g++
- **Practices**: Header/source separation, encapsulation, memory management

---

## ✨ Features Implemented
- [x] Item removal with memory cleanup
- [x] Total money tracking
- [x] Dynamic chemistry evaluation
- [x] Inventory refactoring (suggested switch to `std::vector`)

---

## 🧠 Lessons Learned
- Designing for modularity makes future gameplay features easier to implement.
- Clean data structures like `std::vector` are safer and more expressive than raw arrays.
- Visual planning through UML helps catch bugs early and communicate better with teams.

---

## 🚀 Run the Code
Clone the repo and compile:
```bash
g++ -o teamchem main.cpp
./teamchem
```

---

## 📢 Building in Public
This is part of my initiative to build and share projects in public. 
---

## 🛠️ Contributing
Coming soon: I plan to open-source more features like:
- Chemistry-based play call adaptation
- Teammate conflict resolution
- Save/load state management

Feel free to fork and play around with the code. PRs welcome once base implementation stabilizes!

---

## 📄 License
MIT License

---

## 👋 About the Author
Hi, I'm Sammy Eyongorock — a software engineering student building real-world systems through passion projects. I love modelling real phenomena in code, whether it's football, player dynamics, or team psychology.

Let’s connect — I’d love your feedback!

---

