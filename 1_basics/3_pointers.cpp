# include <bits/stdc++.h>
using namespace std;

int main(){
    int x = 4; 
    // pointers store the value of the fist byte of a data
    int *p_x; // read * as value at
    p_x =&x;

    cout<<"x="<<x<<endl; 
    cout<<"p_x= "<<p_x<<endl;
    cout<<"*p_x =" << *p_x<< " \nvalue at p_x ="<<x<<endl;

    cout<<p_x+1<<endl;
    cout<<"Here on adding one to p_x it adds 4 bytes \n     For Ex:_ if p_x stored 1st loaction then p_x will be equal to the 5 th location"<<endl;

//Double Pointers - used to store memory location of the pointer variables
    int **p_p_x = &p_x;

    cout<<"p_p_x = "<<p_p_x << " the value of location of p_x"<<endl;
    cout<<"*p_p_x = "<<*p_p_x<<" the value of p_x which is &x"<<endl;
    cout<<"**p_p_x = "<<**p_p_x << " the value of x"<<endl;
    

// Arrays are themselves pointers
    int p[10];
    //Here p is a pointer which store the first byte of the array
    //Therefore printing p is same as printing &p[0]
    // printing *p is eqvivalent to printing p[0]
    // printing *(p+1) is eqvivalent to printing p[1]

//Arrays are stored in memory in a continuous sequence
}