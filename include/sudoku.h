/**
 * @file sudoku.h
 * @brief Core Sudoku solving and board generation functions.
 *
 * This header file declares functions essential for solving Sudoku puzzles
 * and validating board states. It includes:
 * - A backtracking Sudoku solver.
 * - A cell validation function to ensure valid number placement.
 * - A board generation stub for creating Sudoku puzzles.
 *
 * All functions operate on dynamically allocated 9x9 Sudoku boards
 * represented as `int**`, where empty cells are denoted by 0.
 *
 * @author
 * Keshav Bhandari
 *
 * @date
 * February 7, 2025
 */

#ifndef SUDOKUPROJECT_SUDOKU_H
#define SUDOKUPROJECT_SUDOKU_H

#include <iostream>

/**
  * @brief Determines if a number is valid in a cell.
  *
  * Takes BOARD, row r, column c, and number k (1-9) as input.
  * Checks if k (a number 1 - 9) exists in the same row or column, returns false if exists.
  * Checks if k exists in the 3x3 subgrid's starting index, returns false if exists.
  * Loops through 3x3 subgrid and Checks if k exists, returns false if exists.
  * 
  * @param BOARD A 9x9 Sudoku board.
  * @param r Row in Sudoku board.
  * @param c column in Sudoku board.
  * @param k number (1-9) in Sudoku board.
  * @return Default true, false if a match on a number (1-9) exists.
  *
  */
bool isValid(int** BOARD, const int& r, const int& c, const int& k);

/**
  * @brief Solves a Sudoku board.
  *
  * If reaches beyond the last row, BOARD is solved, returns true.
  * If reaches end of current row, moves to the next row.
  * Skips over filled cells and move to next column.
  * Using IsValid() function, tries placing numbers 1-9 on current empty cell.
  * Uses recursion to solve rest of BOARD.
  * If number is not valid, it uses backtracking(removing number).
  * If no valid solutions is found, returns false, triggers further backtracking.
  *
  * @param BOARD A 9x9 Sudoku board.
  * @param r row in Sudoku board.
  * @param c colums in Sudoku board.
  * @return default false(triggers backtracking), true if BOARD solved.
  *
  */
bool solveBoard(int** BOARD, const int& r=0, const int& c=0);

// ========================= Efficient Solutions ==========================


 /**
  * @brief Finds the next empty cell using the Minimum Remaining Value (MRV) heuristic.
  *
  * The MRV heuristic selects the empty cell with the fewest valid number options left,
  * which helps in optimizing the backtracking process by reducing the branching factor.
  *
  * Iterates over the Sudoku board.
  * For each empty cell (value == 0), counts the number of valid options (1-9) using `isValid()`.
  * Tracks the cell with the fewest valid options.
  * Returns the position (row, col) and number of options for that cell.
  *
  * Early Exit:
  * If a cell with only one valid option is found, return it immediately for efficiency.
  *
  * @param BOARD A 9x9 Sudoku board.
  * @return std::tuple<int, int, int> A tuple containing:
  *         - Row index of the selected cell.
  *         - Column index of the selected cell.
  *         - Number of valid options for that cell.
  */
std::tuple<int, int, int> findNextCell(int** BOARD);


/**
  * @brief Efficiently solves the Sudoku board using backtracking and the MRV heuristic.
  *    
  * This function uses a recursive backtracking approach combined with the Minimum Remaining Value (MRV)
  * heuristic to optimize the solving process by always selecting the cell with the fewest valid options.
  *
  * Takes BOARD as input.
  * Implements the backtracking.
  * Uses `findNextCell(BOARD)` to select the next cell with the fewest valid options.
  * If no empty cells are left, the board is solved.
  * Trys to Place numbers 1 to 9 in the selected cell using `isValid()`.
  * Recursively calls `solveBoardEfficient()` after placing a valid number.
  * If the recursive call fails, it backtracks by resetting the cell to 0.
  * If no valid number fits, returns false to trigger further backtracking.
  *
  * @param BOARD A 9x9 Sudoku board to be solved.
  * @return true if the board is successfully solved, false otherwise.
  */
bool solveBoardEfficient(int** BOARD);

/**
  * @brief Flags whether the solve method is efficient or not.
  *
  * If efficient == true, returns solveBoardEfficient(board).
  * Else, returns solveBoard(board, 0, 0).
  *
  * @param board A 9x9 soduku Board.
  * @param efficient, default false if not efficient.
  * @return true if the board is efficient, false if not efficient.
  */
bool solve(int** board, const bool& efficient = false);

#endif //SUDOKUPROJECT_SUDOKU_H
