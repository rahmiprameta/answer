#include<iostream>

using namespace std;

int main() {
const int row = 12 ;
const int col = 32 ;
const int mid = 16 ;

for ( int i = 0 ; i < row; i++) {
    for ( int j = col; j > 0 ; j--) {
        char a = '*' ;
        if (j >= mid - 9 && j <= mid + 10 ) a = ' ' ;
        if (j >= mid - 4 && j <= mid + 5 ) a = '*' ;
        if (i == 0 || i == 1 || i == 2 || i == 3 || i == 10 || i == 11) a='*';
        if (i == 1 && j >= mid - 2 && j <= mid + 2 ) a = ' ';
        if (i == 2 && j >= mid - 5 && j <= mid + 5 ) a = ' ';
        if (i == 3 && j >= mid - 8 && j <= mid + 9 ) a = ' ';
        if (i == 3 && j >= mid - 2 && j <= mid + 3 ) a = '*';
        if (i == 10 && j >= mid - 8 && j <= mid + 9 ) a = ' ';
        if (i == 10 && j >= mid - 5 && j <= mid + 6 ) a = '*';

        std::cout << a;
        }
    std::cout << std::endl;
    }
}


