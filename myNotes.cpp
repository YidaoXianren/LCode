//demo for vector usage
#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main()
{
    /*
    vector<int> v(32);
    for(vector<int>::iterator i = v.begin();i!= v.end();++i)
    {
        cout << *i << " ";
    }
    cout << endl;
    */

    vector< vector<int> > grid(2, vector<int>(2));
    int b[2][2]={{1,2},{3,4}};
    for(int i=0; i<2;i++){
    	for(int j=0;j<2;j++){
    		grid[i][j] = b[i][j];
    	}
    }
 
    int a = grid.size();
    int len = grid[0].size();
    int tmpmax = 0;
    /*
    for (int i=0; i<len; i++){
        tmpmax = grid[i][0];
        for(int j=1;j<len;j++){
            if(grid[i][j]>tmpmax){
                tmpmax = grid[i][j];
            }
        }
        a += tmpmax;
    }

    for (int j=0; j<len;j++){
        int tmpmax = grid[0][j];
        for(int i=1; i<len;i++){
            if(grid[i][j]>tmpmax){
                tmpmax = grid[i][j];
            }
        }
        a += tmpmax;
    }
	*/
    cout << "The value a is : " << a << endl;

    return 0 ;
 }
