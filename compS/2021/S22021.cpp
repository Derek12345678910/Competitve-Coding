#include <iostream>
#include <vector>

using namespace std;

#if 0

int question() {

    int row, col, nstrokes;

    // Input number of rows, columns, and strokes
    cin >> row >> col >> nstrokes;

    // Arrays to keep track of row and column toggles
    vector<int> rowToggles(row, 0);
    vector<int> colToggles(col, 0);

    // Process the strokes and update the toggle counts
    for (int i = 0; i < nstrokes; i++) {
        char itype;
        int iindex;
        cin >> itype >> iindex;
        iindex--;  // Convert to 0-based index

        if (itype == 'R') {
            rowToggles[iindex]++;  // Toggle the row
        } else if (itype == 'C') {
            colToggles[iindex]++;  // Toggle the column
        }
    }

    // Count the number of rows that were toggled an odd number of times
    int oddRowCount = 0;
    for (int i = 0; i < row; i++) {
        if (rowToggles[i] % 2 != 0) {
            oddRowCount++;
        }
    }

    // Count the number of columns that were toggled an odd number of times
    int oddColCount = 0;
    for (int j = 0; j < col; j++) {
        if (colToggles[j] % 2 != 0) {
            oddColCount++;
        }
    }

    // Calculate the total number of gold cells
    // Gold cells are in rows or columns that were toggled an odd number of times
    int goldCells = oddRowCount * (col - oddColCount) + oddColCount * (row - oddRowCount);

    // Output the result
    cout << goldCells << endl;

    return 0;
}

int main1() {
    question();
    return 0;
}
#endif