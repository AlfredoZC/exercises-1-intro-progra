
#include <cmath>
#include <iostream>
#include  <string>
#include <iomanip>

using namespace std;


void exercise_1(string s1, string s2, string s3) {

   string result; 

  if (s2 > s1 && s1 < s3){
    result = s1;
  } else if (s1 > s2 && s2 < s3){
    result = s2;
  } else {
    result = s3;
  } 
   
  cout<<result; 
 
}

void exercise_2(double A, double B, double C) {

  double F_result =  B*B - 4 * A * C; 

  if (F_result  > 0 &&  A != 0 ){
  
  double result_sqrt = sqrt(F_result);
  double x1 = (-B + result_sqrt) / (2*A);
  double x2 = (-B - result_sqrt) / (2*A);
  cout << x1 << " "<<x2<<endl;

  } else if (F_result ==0 &&  B != 0){
    double result_sqrt = sqrt (F_result);
    double x1 = (-B + result_sqrt) / (2 *A );
    
    cout<<x1<<endl;
  } else if (A==0 && B!=0 ){
    cout << (-1 * (C)) /B <<endl;

  } else if (A != 0 &&  B ==0 ){
    cout << sqrt (C/A)<< endl;
  } else {
    cout <<"";
  }
  }
  


int exercise_3(int a, int b) {

  int result = 0; 
  
  if (b != 0) {
    result = a / b; 
    cout <<result<<endl;

  } else if (b == 0 ){

    cout <<"Impossible"<<endl;
  }

return result;

}

void exercise_4(double n, double a, double b, double x, double y) {
  double porcentaje;
  double descuento;

  if (n > a && n < b){
    porcentaje = x/100 * n;
    descuento = n - porcentaje;
  }
  else if (n > b){
    porcentaje = y/100 * n;
    descuento = n - porcentaje;
  }
  else {
    descuento = n;
  }
  cout << descuento <<endl;
}

int exercise_5(char character) {

  int ASCII = (int) character;

  if (65 <= ASCII && ASCII <96 ){
    cout <<"upper-case alphabet"<<endl;

  } else if (97 <= ASCII && ASCII <= 122){
    cout<<"lower-case alphabet"<<endl;

  } else if (32 <=ASCII && ASCII <=64 ){
    cout <<"not an alphabet"<<endl;
    
  }

return ASCII;

}

void exercise_6(int number) {

  if (0 < number && number <=7 ) {

    switch (number) {

      case 1:
        cout<<"Monday"<<endl; 
        break;
      case 2:
        cout<<"Tuesday"<<endl; 
        break;
      case 3:
        cout<<"Wednesday"<<endl; 
        break;
      case 4:
        cout<<"Thursday"<<endl; 
        break;
      case 5:
        cout<<"Friday"<<endl; 
        break;
      case 6:
        cout<<"Saturday"<<endl; 
        break;
      case 7:
        cout<<"Sunday"<<endl; 
        break;   
    }
  } else {
    cout<<"Invalid input"<<endl;
  }

}

double exercise_7(double r) {

double result; 
float pi = 3.14;
int direction = 4;

if (r >= 0 ){ 

  result = direction*pi*r*r; 

  cout << result <<endl; 
} else {
  cout <<"Error: Radius cannot be negative."<<endl; 
}
return result;
}

void exercise_8(long int seconds) {
      if (seconds == 0 || seconds > 0)  {
    long int horas = seconds /3600;
    long int minutos = (seconds %  3600 ) / 60; 
    long int segundos = (seconds % 3600) % 60;
    
    cout<<setw(2)<<setfill('0') << horas <<":"<<setw(2)<<setfill('0') << minutos <<":"<<setw(2)<<setfill('0')<<segundos<<endl;
} else {
    cout<<"Error: Input seconds cannot be negative." <<endl;
}
}

string exercise_9(string s1, string s2, string s3, string s4, string s5) {
  
  char c1  = s1 [0];
  char c2  = s2 [0];
  char c3  = s3 [0];
  char c4  = s4 [0];
  char c5  = s5 [0];


  cout<<c1<<c2<<c3<<c4<<c5<<"\n";

  if (c1 == c5){
   return "Hemos encontrado algo!";

  } else {
   return "Aun sin suerte";
  }

}

int exercise_10(int n1, int n2) {

  if (n1 < 0 ||  n2 < 0 ){
    int nom_variable = 0;
    return nom_variable; 

  } else {

    int sum = n1 + n2;
    string str_num= to_string(sum);
    int amount_of_chars = str_num.size();
    int result = amount_of_chars * sum; 

    return result; 

  }
}


string exercise_11(int number) {

  if(number == 11235813){
    
    return "Se encontro a Fibonacci";
  } else {

   return "Esto no es de Fibonacci";
   }

}

void exercise_12(string color1, int numb1,
                 string color2, int numb2,
                 string color3, int numb3,
                 string color_persona, int num_persona) {
if (num_persona == -1 ){
  if (color_persona == color1 && color_persona == color2){
    cout << numb2 <<endl;
    cout << numb1 <<endl;
  } else if (color_persona == color1 && color_persona == color3){
    cout << numb3 <<endl;
    cout << numb1 <<endl;
  }else if (color_persona == color2 && color_persona == color3){
    cout<< numb3 <<endl;
    cout<< numb2 <<endl;
  }
  
}else if (num_persona == numb1 && num_persona == numb2 && num_persona == numb3 && color_persona == color1
&& num_persona == numb1 && color_persona == color2 && num_persona == numb2 && color_persona == color3 &&
num_persona == numb3){
  cout<< "1\n" << "2\n" << "3\n";

} else if (num_persona == numb1 || num_persona == numb2 || num_persona == numb3 ) { 
  if (color_persona == color1 && num_persona == numb1){
  cout<< numb1 <<endl;

}else if (color_persona == color2 && num_persona == numb2){
  cout<< numb2 <<endl;
}else if (color_persona ==color3 && num_persona == numb3){
  cout << numb3 <<endl;
}

}
  
}

string exercise_13(int age, int years_of_experience) {
  if (age >= 18 ) {
        if (years_of_experience < 3 ) {
            return "Project coordinator";
        } else if (3 <= years_of_experience && years_of_experience < 5){
            return "Project manager";
        } else {
            return "Senior project manager";
        }
    } else {
        return "Not eligible";
    }
}

string exercise_14(int number_of_docs) {

string screen = to_string(number_of_docs);

if (number_of_docs > 0){

  if (number_of_docs == 1){
  return "Se encontro un documento";

  } else if (number_of_docs > 1 ){
    return screen + " documentos encontrados";
  }

} else {

  return "No se encontraron documentos";
}

}

void exercise_15(int a, int b, int c) {

  cout << "Los valores son:"<<" a = "<< a <<" b = "<<b<<" y "<<"c = "<<c <<endl;
    
  cout << "Permutamos: a => b, b => c, c => a"<<endl;
    
    int var = a;
    int var2 = b;
    a = c;
    b = var;
    c = var2;
    
  cout<<"Los valores despues de la permutacion son: "<<"a = "<<a<<" b = "<<b<<" c = "<<c<<endl;

}

void exercise_16(int debut, int fin) {

  if (debut < 0 || debut > 24 || fin < 0 || fin > 24) {
    cout << "Las horas deben estar entre 0 y 24!" << endl;
  } else if (fin > debut) {
    int result = 0;
    int contador1 = 0;
    int contador2 = 0;
    int i = debut;
    while (i < fin) {
      if (i >= 7 && i < 17) {
        result = result + 2;
        contador2 = contador2 + 1;
      } else if (i < 7 || i >= 17) {
        result = result + 1;
        contador1 = contador1 + 1;
      }
      ++i;
    }

    cout << "Haz alquilado una bicicleta por" << endl;
    if (contador2 == 0) {
      cout << contador1 << " hora(s) con el tarifario de 1 boliviano(s)" << endl;
    } else if (contador1 == 0) {
      cout << contador2 << " hora(s) con el tarifario de 2 boliviano(s)" << endl;
    } else {
      cout << contador1 << " hora(s) con el tarifario de 1 boliviano(s)" << endl;
      cout << contador2 << " hora(s) con el tarifario de 2 boliviano(s)" << endl;
    }
    cout << "El monto total a pagar es de " << result << " boliviano(s)." << endl;

  } else if (fin == debut) {
    cout << "Que extraño, no has alquilado tu bicicleta por mucho tiempo!" << endl;
  } else if (fin < debut) {
    cout << "Que extraño, el inicio del alquiler es después del final..." << endl;
  }
  //being honest i didn't do this exercise I needed help from a classmate...
}