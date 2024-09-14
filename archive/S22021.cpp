// #include '../comp.h

#include <iostream>
#include <vector>

using namespace std;

#if 1

struct Stroke{
    char type;
    int index;
};

char paint(char col){
    char newcol;
    if(col == 'B'){
        newcol = 'G';
    } else{
        newcol = 'B';
    }
    return newcol;
}   

int question(){

    int row, col, nstrokes;

    cin >> row >> col >> nstrokes;

    vector<vector<char>> canvas;

    canvas.resize(row);

    vector<Stroke> strokes; 
    strokes.resize(nstrokes);   

    for(int i =0; i<nstrokes; i++){
        char itype;
        int iindex;
        cin >> itype >> iindex;
        Stroke stroke = {itype, iindex-1};
        strokes[i] = stroke;
    }

    for(int i=0; i<row; i++){
        canvas[i].resize(col);
        for(int ii=0; ii<col; ii++){
            canvas[i][ii] = 'B';
        }
    }
    
    for(const auto& stroke : strokes){
        if(stroke.type == 'R'){ // If it's a row stroke
            for(int j = 0; j < col; j++){
                canvas[stroke.index][j] = paint(canvas[stroke.index][j]);
            }
        }
        else if(stroke.type == 'C'){ // If it's a column stroke
            for(int j = 0; j < row; j++){
                canvas[j][stroke.index] = paint(canvas[j][stroke.index]);
            }
        }
    }

    int golds = 0;

    for(int i=0; i<row; i++){
        for(int ii=0; ii<col; ii++){
            if(canvas[i][ii] == 'G'){
                golds++;
            }
        }
    }
    cout << golds << endl;

    return 0;
}


int main1(){
    question();
    return 0;
}
#endif