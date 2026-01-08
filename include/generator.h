/**
* @file generator.h
 * @brief Function prototypes for generating random solvable Sudoku boards.
 *
 * This header defines functions to:
 * - Create empty Sudoku boards.
 * - Fill independent diagonal boxes.
 * - Solve and generate a complete Sudoku board.
 * - Randomly delete cells to create a solvable puzzle.
 * - Generate a complete Sudoku puzzle with a specific number of empty cells.
 *
 * Detailed function descriptions and parameters are provided below.
 *
 * @author
 * Keshav Bhandari
 *
 * @date
 * February 7, 2025
 */

#ifndef GENERATOR_H
#define GENERATOR_H

#include <vector>

/**
 * @brief Creates an empty Sudoku board.
 *
 * An empty 9x9 board is created.
 * Creates a pointer to a dynamically allocated 2D array.
 * A loop initializes each column.
 * Each cell is initialized to 0.
 *
 * @return A pointer to a dynamically allocated 2D array
 */
int** getEmptyBoard();

/**
 * @brief Creates and Shuffles vectors.
 *
 * Creates a vector with numbers 1 to 9.
 * Vector is shuffled using a shuffling algorithm.
 * Uses iter_swap and rand() to shuffle.
 * 
 *
 * @return std::vector<int> Shuffled numbers from 1 to 9.
 */
std::vector<int> getShuffledVector();

/**
 * @brief Fills a board's diagonal boxes with unique numbers.
 *
 * Takes BOARD as input.
 * Iterates through the diagonal 3x3 boxes in the 9x9 to fill them with numbers 1 to 9 randomly.
 * Uses the getShufflesVector() function to randomize the order of numbers placed in each 3x3.
 * 
 * @param BOARD a pointer to the 2D sudoku board (int**).
 */
void fillBoardWithIndependentBox(int** BOARD);

/**
 * @brief Randomly deletes cells to create a solvable puzzle.
 *
 * Takes BOARD as input.
 * Validates inputs (e.g., non-null board, valid 'n' between 1 and 81).
 * Randomly selects 'n' unique cells from the board.
 * Replaces selected cells with 0.
 * Ensures cells aren't deleted more than once.
 * 
 * @param BOARD a 9x9 sudoku board.
 * @param n The number of cells to delete (should be between 1 and 81).
 */
void deleteRandomItems(int** BOARD, const int& n);

/**
  * @brief Generates a solvable Sudoku board with a specified number of empty cells.
  *
  * Uses various helper functions to complete generateBoard().
  * Uses getEmptyBoard() to initialize an empty board.
  * Uses fillBoardWithIndependentBox() to fill the diagonal 3x3 boxes.
  * uses Solve() to solve the board and complete it.
  * Uses deleteRandomItems() to randomly delete cells and create a playable puzzle.
  *
  * @param empty_boxes The number of cells to be emptied in the generated puzzle.
  * @return int** A dynamically allocated 9x9 Sudoku board with 'empty_boxes' empty cells.
  */
int** generateBoard(const int& empty_boxes);

#endif // GENERATOR_H
