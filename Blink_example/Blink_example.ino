
/*

______ _     _____ _   _  _   __
| ___ \ |   |_   _| \ | || | / /
| |_/ / |     | | |  \| || |/ / 
| ___ \ |     | | | . ` ||    \ 
| |_/ / |_____| |_| |\  || |\  \
\____/\_____/\___/\_| \_/\_| \_/
                                
                                ⠀⠀⠀⠀⠀⠀⠀
*/                              
//Jacob Turola for Markham Campus Library Makerspace                               
//This code shows how to setup a blinking light


int lightpin = 10;//creates an integer variable that sets pin 10 to be named "lightpin"

void setup() { //this code runs once! also make sure to fit all of your setup code in between these curly brackets

  pinMode(lightpin,OUTPUT);// sets our output pin to output electricity
}

void loop() { //this will loop infinitely

  digitalWrite(lightpin,HIGH);//turns on LED
  delay(1000); // wait 1 sec
  digitalWrite(lightpin,LOW); //turns off led
  delay(1000);//wait 1 sec
  //now it will loop again
}
