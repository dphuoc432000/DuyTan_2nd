#pragma once
#include <iostream> 
#include <Bits.h>
#define UNASSIGNED 0
#define N 9
using namespace std;
class Sudoku
{
public:
	bool SolveSudoku(int grid[N][N]) {
		int row, col;
		if (!FindUnassignedLocation(grid, row, col)) return true;
		for (int num = 1; num <= 9; num++)
			if (isSafe(grid, row, col, num)) {
				grid[row][col] = num;
				if (SolveSudoku(grid)) return true;
				grid[row][col] = UNASSIGNED;
			}
		return false;
	}
	bool FindUnassignedLocation(int grid[N][N],
		int& row, int& col)
	{
		for (row = 0; row < N; row++)
			for (col = 0; col < N; col++)
				if (grid[row][col] == UNASSIGNED)
					return true;
		return false;
	}
	bool isSafe(int grid[N][N], int row, int col, int num)
	{
		return !UsedInRow(grid, row, num) && !UsedInCol(grid, col, num) && !UsedInBox(grid, row - row % 3, col - col % 3,
			num) && grid[row][col] == UNASSIGNED;
	}
	bool UsedInBox(int grid[N][N], int SR, int SC, int num) {
		for (int row = 0; row < 3; row++)
			for (int col = 0; col < 3; col++)
				if (grid[row + SR][col + SC] == num) return true;
		return false;
	}
	bool UsedInRow(int grid[N][N], int row, int num) {
		for (int col = 0; col < N; col++)
			if (grid[row][col] == num) return true;
		return false;
	}
	bool UsedInCol(int grid[N][N], int col, int num) {
		for (int row = 0; row < N; row++)
			if (grid[row][col] == num) return true;
		return false;
	}
	void printGird(int gird[N][N]) {
		for (int row = 0; row < N; row++) {
			for (int col = 0; col < N; col++) {
				cout << gird[row][col] << " ";
			}
			cout << endl;
		}
	}
};

