# Conway's Game of Life

A simple implementation of **Conway's Game of Life** built with **C++** and **Raylib**. This project was created as a learning project to explore cellular automata, game loops, and 2D graphics programming.

## Preview

![Game of Life Preview](preview.jpg)

## Features

- Conway's Game of Life simulation
- Randomly generated initial grid
- Real-time cell evolution
- Built with C++ and Raylib
- 2D grid rendering using rectangles
- Implements Conway's original Game of Life rules

## Conway's Game of Life Rules

Each cell on the grid is either **Alive** or **Dead**. Every generation follows these rules:

- Any live cell with fewer than **2** live neighbors dies (underpopulation).
- Any live cell with **2 or 3** live neighbors survives.
- Any live cell with more than **3** live neighbors dies (overpopulation).
- Any dead cell with exactly **3** live neighbors becomes alive (reproduction).

## Technologies Used

- C++
- Raylib
- Standard Template Library (STL)

## Requirements

- C++ compiler
- Raylib
- Windows

## Project Structure

```text
Game-of-Life/
│── .vscode/
│── lib/
│── src/
│   └── main.cpp
│── .gitattributes
│── .gitignore
│── Makefile
│── README.md
│── main.code-workspace
└── preview.jpg
```

## How to Run

1. Clone the repository.

```bash
https://github.com/Kazi-Sadman/conways-game-of-life
```

2. Open the project in your preferred C++ IDE or editor.

3. Make sure the Raylib library is properly installed and linked.

4. Build and run the project.

## Learning Outcomes

This project helped me learn about:

- Cellular automata
- Game loops
- Grid-based algorithms
- 2D rendering with Raylib
- Matrix manipulation using `std::vector`
- Applying simulation rules efficiently

## Future Improvements

- Interactive mouse editing of cells
- Pause and resume the simulation
- Adjustable simulation speed
- Clear and regenerate the grid
- Load predefined patterns (Glider, Gosper Gun, etc.)
- Graphical user interface using Raygui

## Author

**Kazi Sadman Zahin**

-https://github.com/Kazi-Sadman

---

This project was developed as a personal learning project to practice C++ programming and graphics development using Raylib.
