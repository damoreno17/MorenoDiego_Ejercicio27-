  
#include <iostream>
#include <fstream>
using namespace std;

void integral ();
/*decaro funcion*/
float func(float w, float y) 
{ 
    return (-w*y); 
}

/* declaro euler*/

void euler(float x, float y, float h, float x_0) 
{ 
    float t= 0; 
  
    while (x_0 < x) { 
        t = y; 
        y = y + h * func(x_0, y); 
        x_0 = x_0 + h; 
    } 
  
    cout << y << endl; 
}

int main(){
    
    float res_a ;
    float res_b ;
    float delta_x = 0.1;
    float w = 0.1;
    float y_0 = 1;
    float k = 4/w;
    
    for (int i = 0; i < k, i++;){
        res_a = (y_0) + (delta_x * w * y_0);
        res_b = (y_0) / (1 + delta_x * w);
    }
    
    
    
    return 0;
}

void integral (){
    
}