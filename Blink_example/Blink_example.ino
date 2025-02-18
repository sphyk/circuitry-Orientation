
/*
 _____           _       _ 
/  ___|         (_)     | |
\ `--.  ___ _ __ _  __ _| |
 `--. \/ _ \ '__| |/ _` | |
/\__/ /  __/ |  | | (_| | |
\____/ \___|_|  |_|\__,_|_|
                           
Not cereal

      o8Oo./
   ._o8o8o8Oo_.
    \========/
     `------'  ⠀⠀⠀⠀⠀⠀⠀
*/                              
//Jacob Turola for Markham Campus Library Makerspace                               
//This code shows how to setup the serial monitor


int input = 10;//creates an integer variable that sets pin 10 to be named "inputPin" this can be attached to a sensor or button
int receiver = 11; //creates an integer variable that sets pin 11 to be named "receiverPin" <- Case Sensitive!

void setup() { //this code runs once! also make sure to fit all of your setup code in between these curly brackets

  pinMode(input,OUTPUT);// sets our output pin to output electricity
  pinMode(receiver,INPUT);//sets the receiver to become an input
  Serial.begin(9600); //initialises the serial monitor with a baud rate of 9600
}

void loop() { //this will loop infinitely

  int data = digitalRead(receiver);//creates a variable that is the value of whatever enters pin 11
  Serial.println(data); //prints the data in the serial monitor and makes a new line
  delay(10); //short delay so its easier to handle
  

}
