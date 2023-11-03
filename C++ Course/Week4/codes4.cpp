
1. ////////// DO NOT EDIT HEADER! //////////
#include <iostream>                    //
#include "CTurtle.hpp"                 //
#include "CImg.h"                      //
using namespace cturtle;               //
using namespace std;                   //
/////////////////////////////////////////

int main(int argc, char** argv) {
  
  TurtleScreen screen(400, 300); //You may edit the dimensions to fit your window
  Turtle tina(screen);
  tina.speed(TS_SLOWEST);
  
  //add code below this line
  for (int i=0;i<=2;i++)
  {
    tina.left(120);
    tina.forward(100);
  }



  //add code above this line
  
  screen.exitonclick();
  return 0;
  
}


2. #include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  string x = argv[1];
  
  //add code below this line
  for (int i = 0; i<=9; i++)
  {
    cout << x << endl;
  }



  //add code above this line
  
  return 0;
  
}

3. #include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  int a = stoi(argv[1]);
  int b = stoi(argv[2]);
  
  if (a > b) {
    int c = b;
    b = a;
    a = c;
  }
  
  //add code below this line
  int sum=0;
  if (a==b)
  {
    sum=a;
    cout << sum;
  }
  else 
  {
    for (int i=a; i<=b; i++)
    {
      sum+=i;
    }
    cout << sum;
  }

 }


4. #include <iostream>
using namespace std;

for (int i = 100; i <= 100; i--) {
  if (i == 0) {
    cout << "Print me!" << endl;
    break;
  }
  else {
    while (true) {
      break;
      i++;
      cout << "Don't print me!" << endl;
    }
  }
}


5. #include <iostream>
using namespace std;

int main() {
  
  //add code below this line
for (int i=1; i<=5; i++)
{
  for (int j=1; j<=5-i; j++)
  {
    cout << ".";
  }
  cout << i << endl;
}


  //add code above this line
  
  return 0;
  
}

