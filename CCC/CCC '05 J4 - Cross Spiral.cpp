#include <iostream>
using namespace std;

int main() 
{
  int   width, height, cutw, cuth, steps;

  cin >> width;  // columns
  cin >> height; // rows
  cin >> cutw;
  cin >> cuth;
  cin >> steps;

  int  grid[height][width];
  for(int i=0; i<height; i++)
    for(int j=0; j<width; j++)
      grid[i][j] = 0;
  
  for(int i=0; i<cuth; i++)
    for(int j=0; j<cutw; j++){
      grid[i][j] = 1;
      grid[i][width-1-j] = 1;
      grid[height-1-i][j]  = 1;
      grid[height-1-i][width-1-j] = 1;
    }

  int  currcol = cutw;
  int  currrow = 0;
  grid[currrow][currcol] = 1;
  int  prevtype = 1;
  //cout << currrow << "\t" << currcol << "\t" << steps << endl; 

  while(steps > 0){
    if( prevtype == 1){
      if( currrow - 1 >= 0  &&  grid[currrow-1][currcol] != 1 ){
        currrow--;
        prevtype = 4;
      }
      else if( currcol + 1 < width  &&  grid[currrow][currcol+1] != 1 ){
        currcol++;
        prevtype = 1;
      }
      else if( currrow + 1 < height  &&  grid[currrow+1][currcol] != 1 ){
        currrow++;
        prevtype = 2;
      }
      else if( currcol - 1 >= 0  &&  grid[currrow][currcol-1] != 1 ){
        currcol--;
        prevtype = 3;
      }
      else 
        break;
    }
    else if( prevtype == 2){
      if( currcol + 1 < width  &&  grid[currrow][currcol+1] != 1 ){
        currcol++; 
        prevtype = 1;
      }
      else if( currrow + 1 < height  &&  grid[currrow+1][currcol] != 1 ){
        currrow++; 
        prevtype = 2;
      }
      else if( currcol - 1 >= 0  &&  grid[currrow][currcol-1] != 1 ){
        currcol--; 
        prevtype = 3;
      }
      else if( currrow - 1 >= 0  &&  grid[currrow-1][currcol] != 1 ){
        currrow--; 
        prevtype = 4;
      }
      else 
        break;
    }
    else if( prevtype == 3){
      if( currrow + 1 < height  &&  grid[currrow+1][currcol] != 1 ){
        currrow++;             
        prevtype = 2;
      }
      else if( currcol - 1 >= 0  &&  grid[currrow][currcol-1] != 1 ){
        currcol--; 
        prevtype = 3;
      }
      else if( currrow - 1 >= 0  &&  grid[currrow-1][currcol] != 1 ){
        currrow--; 
        prevtype = 4;
      }
      else if( currcol + 1 < width  &&  grid[currrow][currcol+1] != 1 ){
        currcol++; 
        prevtype = 1;
      }
      else 
        break;
    }
    else if( prevtype == 4){
      if( currcol - 1 >= 0  &&  grid[currrow][currcol-1] != 1 ){
        currcol--; 
        prevtype = 3;
      }
      else if( currrow - 1 >= 0  &&  grid[currrow-1][currcol] != 1 ){
        currrow--; 
        prevtype = 4;
      }
      else if( currcol + 1 < width  &&  grid[currrow][currcol+1] != 1 ){
        currcol++; 
        prevtype = 1;
      }
      else if( currrow + 1 < height  &&  grid[currrow+1][currcol] != 1 ){
        currrow++;
        prevtype = 2;
      }
      else 
        break;
    }
    
    grid[currrow][currcol] = 1;
    steps--;
  }
 
  cout << currcol + 1 << endl;
  cout << currrow + 1 << endl;  
}
