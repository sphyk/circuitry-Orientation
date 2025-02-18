
/* _                 _      
| |               (_)     
| |     ___   __ _ _  ___ 
| |    / _ \ / _` | |/ __|
| |___| (_) | (_| | | (__ 
\_____/\___/ \__, |_|\___|
              __/ |       
             |___/        ⠀⠀⠀
*/                              
//Jacob Turola for Markham Campus Library Makerspace                               
//This code shows how to setup the serial monitor


int input = 10;//creates an integer variable that sets pin 10 to be named "inputPin" this can be attached to a sensor or button
int receiver = 11; //creates an integer variable that sets pin 11 to be named "receiverPin" <- Case Sensitive!

void setup() { //this code runs once! also make sure to fit all of your setup code in between these curly brackets

  pinMode(input,OUTPUT);// sets our output pin to output electricity
  pinMode(receiver,INPUT_PULLUP);//sets the receiver to become an input, PULLUP adds a resistor to the pin to help prevent false positives
  Serial.begin(9600); //initialises the serial monitor with a baud rate of 9600
}

void loop() { //this will loop infinitely

  int data = digitalRead(receiver);//creates a variable that is the value of whatever enters pin 11
  Serial.println(data); //prints the data in the serial monitor and makes a new line
  delay(10); //short delay so its easier to handle
  

}
