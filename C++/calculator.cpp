#include <iostream>
#include <cmath>
using namespace std;

#define PI 3.141592654

double radian(double D){
  double R = (D * PI) / 180;
  return R;
}
double sum(double m, double n){
  double addition = m + n;
  return addition;
}
double mul(double m, double n){
  double multiplication = m * n;
  return multiplication;
}
double div(double m, double n){
  double division = m / n;
  return division;
}
double sub(double m, double n){
  double subtraction = m - n;
  return subtraction;
}
int mod(int m, int n){
  double modulo = m % n;
  return modulo;
}
int main(){
  cout << "Enter operation: " << endl;
  cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulo\n6. Trigonometric Value\n";
  int m; cin >> m;
  if(m == 1){
    double a, b; 
    cout << "Enter two numbers: " << endl;
    cin >> a >> b;
    double summation = sum(a, b);
    cout << summation;
  }
  else if(m == 2){
    double a, b; 
    cout << "Enter two numbers: " << endl;
    cin >> a >> b;
    double subtraction = sub(a, b);
    cout << subtraction;
  }
  else if(m == 3){
    double a, b; 
    cout << "Enter two numbers: " << endl;
    cin >> a >> b;
    double multiplication = mul(a, b);
    cout << multiplication;
  }
  else if(m == 4){
    double a, b; 
    cout << "Enter two numbers: " << endl;
    cin >> a >> b;
    double division = div(a, b);
    cout << division;
  }
  else if(m == 5){
    int a, b; 
    cout << "Enter two numbers: " << endl;
    cin >> a >> b;
    int modulo = mod(a, b);
    cout << modulo;
  }
  else if(m == 6){
    cout << "Enter angel (degree): " << endl;
    double D; cin >> D;
    double Radian = radian(D);
    cout << "Enter operation: " << endl;
    cout << "1. sin\n2. cos\n3. tan" << endl;
    int n; cin >> n;
    if(n == 1){
      double sine = sin(Radian);
      cout << sine;
    }
    else if(n == 2){
      double cosine = cos(Radian);
      cout << cosine;
    }
    else if(n == 3){
      double tangent = tan(Radian);
      cout << tangent;
    }
    else{
      cout << "Enter valid number";
    }
  }
  else{
      cout << "Enter valid number";
    }
  return 0;
}
