Here is a **Sample Report** for the Sudoku Solver Assignment that follows the structure outlined in the submission guidelines:

---

# GroupNameSudokuProject - Spring2025

## Overview

In the **Overview** section, briefly summarize the project’s **objective**, core **functionalities**, and key **outcomes**. Highlight the **main goal** (e.g., developing a Sudoku solver), major **challenges** faced, and the strategies or algorithms used to overcome them. Mention any notable **technical achievements**, such as optimizations or different modes (**DEBUG**/**non-DEBUG**).

In the next paragraph, reflect on the **skills** and **knowledge** gained, like improvements in **problem-solving**, **code optimization**, or **collaboration**. If applicable, mention how the team worked together and how the project contributed to your overall learning experience.

## Part 1: Complete the Code
**GitHub Repository Link:** [LinkToYourProject](https://github.com/RubenLuna01/Lotus_Vison)

**Collaborators Added:**
- Instructor: `keshavsbhandari`
- TA: `tousifulhaque`
- Team Members: Seth Tunon, Ruben Luna, Bhavyashre Karyala

---

## Part 2: Program Flow Visualization

**Flowchart for Sudoku Solver Execution (Non-DEBUG Mode):**

```text
main()
├── initDataFolder()
│   ├── createFolder("data/")
│   ├── createFolder("data/puzzles/")
│   └── createFolder("data/solutions/")
├── createAndSaveNPuzzles(NUM_PUZZLE_TO_GENERATE, COMPLEXITY_EMPTY_BOXES, PATH_TO_PUZZLES, PUZZLE_PREFIX)
│   ├── generateBoard(complexity_empty_boxes)
│   │   ├── getEmptyBoard()
│   │   ├── fillBoardWithIndependentBox(BOARD)
│   │   │    ├── getShuffledVector()
│   │   │    └── getShuffledVector()
│   │   ├── solve(BOARD, false)
│   │   └── deleteRandomItems(BOARD, empty_boxes)
│   ├── getFileName(i, destination, prefix)
│   ├── writeSudokuToFile(BOARD, filename)
│   │   └── boardToString(BOARD, content)
│   └── deallocateBoard(BOARD)
├── solveAndSaveNPuzzles(NUM_PUZZLE_TO_GENERATE, PATH_TO_PUZZLES, PATH_TO_SOLUTIONS, SOLUTION_PREFIX)
│   ├── getAllSudokuInFolder(source)
│   ├── readSudokuFromFile(path_to_sudokus[i])
│   │   ├── replaceCharacter(sudoku, '-', '0')
│   │   ├── extractNumbers(sudoku, numbers)
│   │   └── fillBoard(numbers, BOARD)
│   ├── checkIfSolutionIsValid(sudoku)
│   │   └── isValid(BOARD, r, c, k)
│   ├── getFileName(i, destination, prefix)
│   └── writeSudokuToFile(sudoku, filename)
│       └── boardToString(BOARD, content)
└── compareSudokuSolvers(10, 64)
    ├── generateBoard(empty_boxes)
    │   ├── getEmptyBoard()
    │   ├── fillBoardWithIndependentBox(BOARD)
    │   │    ├── getShuffledVector()
    │   │    └── getShuffledVector()
    │   ├── solve(BOARD, false)
    │   └── deleteRandomItems(BOARD, empty_boxes)
    ├── deepCopyBoard(board1)
    ├── checkIfSolutionIsValid(board1)
    └── displayProgressBar(i, experiment_size)
```

This flow illustrates the general steps the program takes in non-DEBUG mode, from initializing the puzzle to saving the solved result.

---

## Part 3: Reflective Questions

1. **Group Photo:**
 

![Image](https://github.com/user-attachments/assets/28470663-30d4-4fd5-acee-fd0e127207fe)


2. **What contributions did your friends make? List them.**

    - Seth Tunon: Generator.cpp, Sudoku.cpp
    - Ruben Luna: Sudoku.cpp, Utils.cpp, GitHub Repository
    - Bhavyashre Karyala: Flow Chart, Sodoku.io

3. **Why do you think `efficientSolver` took more time than the regular solver? What strategies would you implement to make `efficientSolver` actually efficient?**  
   
   Efficient solver checked the entire board each time it was called to find the cell with the least amount of options while regular solver just picked the next empty cell to check. We could make it more efficient by changing the findnextcell function to return a cell if it is under a certain number of options while being greater than zero. Three or four could work, and this would decrease the amount of time the program takes to check the board while still keeping some efficiency.

4. **Can you make this a generalized solution, meaning board that can solve any NxN grid where N is a square number? Can you briefly share your ideas?**

   I believe so, you would have to modify the check for grid in isValid to be able to adjust to the NxN grid chosen. The user would be prompted to input an integer which would be used as the size of the square grid. Along with it, the formula for the staring grid cell in isValid would be updated to the number that the user inputted.

5. **Did this project challenge and motivate you? We would appreciate your feedback on your experience. Feel free to share what you learned, what aspects of the project you found most engaging or challenging, and any suggestions you have for improving future projects. Your insights are valuable in helping us enhance future learning experiences.**  
 
   Whilst the project was challenging and required critical thinking, ultimately, we found it to be simply overwhelming. We never had time to gain experience in creating a project, or managing a repository. It felt like we were thrown to a problem semi completed with no briefing over how the foundations were set up. In the end, it feels like we haven't truly learned how to manage a project.

---

## Closing Thoughts

The project overall was very lucrative in teaching us a variety of concepts, such as how to traverse through github and work with repositries. we were also taught a deeper understanding on the workflow needed for a coding project. The ability to read and understand code became more fluent after finishing the code, and coding skills did get refined somewhat. However, I feel like we did not get to fully grasp the and understand the whole project. I feel like having to build a project from the bottom would have taught us a lot more than, just coding the functions. In the the sudoku project was enjoyable to some extent.

---
