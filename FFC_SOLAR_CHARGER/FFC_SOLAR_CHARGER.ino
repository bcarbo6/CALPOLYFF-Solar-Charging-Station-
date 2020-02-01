
/*  Solar Charger Control
 *  Cal Poly Future Fuels Club
 *  Kent Bailey, Blake Carbonneau, Eunice Bernardo
 *  
 *  The purpose of this program is to take in a passcode and generate an open outlet to be used 
 *  on a timer. Users will be welcomed with an LED and pushbutton pad interface. RED and GREEN LEDs
 *  will also indicate outlet power.
 *  
 */



#include <Keypad.h>
#include <Wire.h>
#include <inttypes.h>
#include <Print.h>


int GREEN = 13;
int RED = 12;

const byte rows = 4; //four rows
const byte cols = 4; //four columns


char keys[rows][cols] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'.','0','#','D'}
};

byte rowPins[rows] = {9, 8, 7, 6}; //connect to the row pinouts of the keypad
byte colPins[cols] = {5, 4, 3, 2}; //connect to the column pinouts of the keypad
Keypad Kpd = Keypad(makeKeymap(keys), rowPins, colPins, rows, cols);

/*
 * We need to build a file to act as a database with codes in the meantime.
 * This should not be to hard. I do have a couple of microsd card readers 
 * that we can use for storage.
 * I will ask for help probably on this but I will look it up for sure tomorrow.
 * HOW to use microsd reader with arduino.
 * HOW to use database with arduino.
 * HOW to sort data from database with arduino.
 */

void setup(){
  //pinMode(GREEN, OUTPUT);
  //pinMode(RED, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  int endline = 8; //number of digits that can be used by user for typing in their code.
  
  char key = Kpd.getKey(); //getKey function from library so that program can get user input to key
  char PASSWORD[endline]; //PASSWORD with endline to give it a null terminator.

/*
 * Here we will print a message on 
 * LCD1 "Hope you are having a great day!"
 * LCD2 "Press any key to start"
 * I have yet to look into how to work with the LCD screens.
 * I am sure it is not too difficult.
 */



/*
 * This is where we take in user data.
 * Passcode
 * 
 * MAYBE:
 * what is charging. to determine time to charge.
 */

int i = 0;
key = NO_KEY;
key = Kpd.getKey();


 while(key != '#' || i < endline ){                // test to see if the # key is pressed, if not add more characters                   
         
            
       
        if(key)
        {
if(key != 'D' && key != 'A' && key != 'B' && key != 'C' && key != '#' && key != '*')   // check that only a number key has been pressed
        {   
        textNumber[i] = (char)key;      // concatinate new character onto textNumber string
        Serial.println(key); //For now print to serial monitor but not if I add lcd
        Serial.println(PASSWORD);
        i += 1;
        key = NO_KEY; // return to no key to start over process
        key = Kpd.getKey(); // get new key press
        }
        
if(key == '#')
{ 
  //Then print to LCD "Sorry that is not a valid entry"
  //Then start loop over.
  //clear the PASSWORD
}
        }

// compare the number to the numbers in the database. 
  // Include sorting function.



  
/*
 * if (passcode == anumber in database)
 * possibly prompt for time needed to charge.
 * 
 * we can either let system do the math or we can have a straight forward question
 * like "HOW LONG DO YOU NEED"
 * 
 * turn on power to outlet using HIGH.
 * turn on corresponding green light.
 * turn off red light.
 * turn on timer
 * 
 * when charge is complete turn off outlet turn off green light.
 * turn on red light.
 * 
 * 
 * 
 */

/* reset program keeping in mind what is on and what is off.
 *  so that the next user can get a new charge. I have not yet thought about how to do this. 
 *  run through loop. assign first open charge port.
 *  Maybe build an option so that if too much space is being taken by a charger 
 *  then the user can request another outlet
 *  none of this should be too hard. 
 *  
 *  
 *  BIG QUESTIONS:
 *  
 *  HOW will we store the database?
 *  HOW will we compare input with database?
 *  I havent used a sorting function in a long time. I need a refresher.
 *  HOW will we build a database?
 *  ARE we getting excited yet?
 *  
 *  
 */

}
