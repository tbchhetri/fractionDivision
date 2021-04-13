#include <iostream>
#include <cstdlib>

using namespace std;

const int
    MAX_ROW = 20,
    MAX_COLS = 19;

int main(int argc, char *argv[]) {

    int
        table [MAX_ROW][MAX_COLS],
        nRows, nCols;

    //step 1: get the number of rows and columns
    nRows = atoi(argv[1]);
    nCols = atoi(argv[2]);
    if (nRows <1 || nRows > 20){
        cout << "Number of rows must be between 1 and 20." << endl;
        return 1;
    }

    //step 2: fill in the table
    for (int r=0; r<nRows;r++)
        for (int c=0; c<nCols;c++)
            table [r][c] = (r+1)*(c+1);

    //step 3: output the table
    //step 3a: output  the header and the lines
    cout << "*";
    for (int c=1; )


    //all done!

    return 0;
}