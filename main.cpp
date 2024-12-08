#include<bits/stdc++.h>
using namespace std;

void addition();
void substract();
void multiply();
void divide();
void square();
void taketwonumber(int &x,int &y);
void takesinglenumber(int &z);

int main(){
    cout<<"________________________________________________________________\n";
    cout<<endl;
    cout<<"\t\t*****Welcome to the MyCalculator*****";
    cout<<endl; 
    cout<<"_________________________________________________________________\n";


    cout<<"Which operation would you like to perform ???\n";
    cout<<"Press 1 for Addition\n";
    cout<<"Press 2 for Substraction\n";
    cout<<"Press 3 for Multiplication\n";
    cout<<"Press 4 for Division\n";
    cout<<"Press 5 for Squaring the number\n";

    int choice;
    cin>>choice;

    switch (choice)
    {
    case 1:
        addition();
        break;
    case 2:
        substract();
        break;
    case 3:
        multiply();
        break;
    case 4:
        divide();
        break;
    case 5:
        square();
        break;
    default:
        break;
    }
    return 0;
}
void addition(){
    int x,y;
    taketwonumber(x, y);
    int sum = x + y;
    cout<<"Addition of "<<x<<" & "<<y<<" is : "<<sum;
}
void substract(){
    int x,y;
    taketwonumber(x, y);
    if(x>y){
        int substract = x - y;
    }
    else{
        int substract = y - x;
    }
    cout<<"Substraction of "<<x<<" & "<<y<<" is : "<<substract;
}
void multiply(){
    int x,y;
    taketwonumber(x, y);
    int multiply = x * y;
    cout<<"Multiplication of "<<x<<" & "<<y<<" is : "<<multiply;
}
void divide(){
    int x,y;
    taketwonumber(x, y);
    if(y != 0){
        int divide = x/y;
    }
    else{
        cout<<"Division is not possible.";
    }
    cout<<"Division of"<<x<<" & "<<y<<" is :"<<divide;   
}
void square(){
    int z;
    takesinglenumber(z);
    int square = z * z;

    cout<<"Square of "<<z<<" is :"<<square;
}
//for two number calculations
void taketwonumber(int &x, int &y){
    cout<<"Enter two numbers for the operation: ";
    cin>>x>>y;
}
//for 1 number calculations
void takesinglenumber(int &z){
    cout<<"Enter a number: ";
    cin>>z;
}