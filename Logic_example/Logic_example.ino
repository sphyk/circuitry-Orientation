
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
//This code shows a simple logic expression


int input = 10;//creates an integer variable that sets pin 10 to be named "inputPin" this can be attached to a sensor or button
int receiver = 11; //creates an integer variable that sets pin 11 to be named "receiverPin" <- Case Sensitive!

void setup() { //this code runs once! also make sure to fit all of your setup code in between these curly brackets

  pinMode(input,OUTPUT);// sets our output pin to output electricity
  pinMode(receiver,INPUT_PULLUP);//sets the receiver to become an input, PULLUP adds a resistor to the pin to help prevent false positives
  Serial.begin(9600); //initialises the serial monitor with a baud rate of 9600
}

void loop() { //this will loop infinitely
  //Here i will make it so that the code checks if an input is received. If it does, a positive message is sent, if not a negative message is sent
  int status = digitalRead(receiver); //reads the receiver pin
  if (status == HIGH){ //checks if anything received
    Serial.println("Input Received"); //prints a receiving message
  } 
  else{ //if the above "if" condition is not met, do this instead
    Serial.println("No Input"); //prints a message stating lack of input
  }
  delay(100); //short delay so its easier to handle
  
} //make sure every curly bracket has its pair!!!!
