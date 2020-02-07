/*  Kent Bailey
 *  Simple I2C LCD Hello World
 *  2/2/20
 */


#include <Keypad.h>
#include <Wire.h>
#include<LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,2,1,0,4,5,6,7,3,POSITIVE);
const byte ROWS = 4; //four rows
const byte COLS = 4; //four columns
char customkey;
char hexaKeys[ROWS][COLS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

byte rowPins[ROWS] = {8, 7, 6, 5}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {9, 10, 11, 12}; //connect to the column pinouts of the keypad


//initialize an instance of class NewKeypad
Keypad customKeypad = Keypad( makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS);

int GREEN1 = 13;
int RED1 = 14;

int GREEN2 = 15;
int RED2 = 16;

int GREEN3 = 17;
int RED3 = 18;

int GREEN4 = 19;
int RED4 = 20;

//const int currentPin = A0;
int sensitivity = 66;
int adcValue= 0;
int offsetVoltage = 2500;
double adcVoltage = 0;
double currentValue = 0;

void setup (){
   Serial.begin(9600);
    lcd.begin(16,2);       // 16 columns and 2 rows
     lcd.backlight();       // Power the back light
     lcd.print ("HELLLO");  // Dispay "HELLO" until the '1' key is pressed.
     
    lcd.setCursor(0,1);
    lcd.print("PRESS ANY KEY");
    
   
    
}

void loop()
{

customkey = customKeypad.getKey();

char accume4[5] = "empt";
char stopper = '1'; 

for (int i=0; i < 5 && stopper != '#'; i++)
{
  switch(customkey)
  {
    case '1':
    accume4[i] = '1';
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("ENTER CODE");
    lcd.setCursor(0,1);
    lcd.print(accume4);
    break;

     case '2':
    accume4[i] = '2';
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("ENTER CODE");
    lcd.setCursor(0,1);
    lcd.print(accume4);
    break;

     case '3':
    accume4[i] = '3';
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("ENTER CODE");
    lcd.setCursor(0,1);
    lcd.print(accume4);
    break;

     case '4':
     accume4[i] = '4';
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("ENTER CODE");
    lcd.setCursor(0,1);
    lcd.print(accume4);
    break;

     case '5':
    accume4[i] = '5';
     lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("ENTER CODE");
    lcd.setCursor(0,1);
    lcd.print(accume4);
    break;

     case '6':
    accume4[i] = '6';
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("ENTER CODE");
    lcd.setCursor(0,1);
    lcd.print(accume4);
    break;

     case '7':
    accume4[i] = '7';
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("ENTER CODE");
    lcd.setCursor(0,1);
    lcd.print(accume4);
    break;

     case '8':
    accume4[i] = '8';
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("ENTER CODE");
    lcd.setCursor(0,1);
    lcd.print(accume4);
    break;

     case '9':
    accume4[i] = '9';
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("ENTER CODE");
    lcd.setCursor(0,1);
    lcd.print(accume4);
    break;

     case '0':
    accume4[i] = '0';
     lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("ENTER CODE");
    lcd.setCursor(0,1);
    lcd.print(accume4);
    break;

     case '*':
    lcd.clear();
    lcd.setCursor(9,0);
    lcd.print("WELCOME");
    lcd.setCursor(0,1);
    lcd.print("You pressed *");
    break;

/*
     case '#':
    lcd.clear();
    lcd.setCursor(9,0);
    lcd.print("WELCOME");
    lcd.setCursor(0,1);
    lcd.print("You pressed #");
    break;
*/
     case 'A':
    lcd.clear();
    lcd.setCursor(9,0);
    lcd.print("WELCOME");
    lcd.setCursor(0,1);
    lcd.print("You pressed A");
    break;

     case 'B':
    lcd.clear();
    lcd.setCursor(9,0);
    lcd.print("WELCOME");
    lcd.setCursor(0,1);
    lcd.print("You pressed B");
    break;

     case 'C':
    lcd.clear();
    lcd.setCursor(9,0);
    lcd.print("WELCOME");
    lcd.setCursor(0,1);
    lcd.print("You pressed C");
    break;

     case 'D':
    lcd.clear();
    lcd.setCursor(9,0);
    lcd.print("WELCOME");
    lcd.setCursor(0,1);
    lcd.print("You pressed D");
    break;
    
  }
  
}

//if (accume = anycode...
    /*
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("WELCOME");
   // lcd.setCursor(0,1);
   // lcd.print("SELECT AN OUTLET");
    delay(200);
/*
//build a function for checking the current sensors
//while the current sensors are off add representing number plus some space to the second row.
 /*   lcd.setCursor(0,0);
    lcd.print("SELECT AN OUTLET");

    while 
   */ 

    
}
