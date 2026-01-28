### **29/01**

My full code is [here:](https://github.com/zv2029/MachineLab/tree/74168becaaa903e1d93331c3f7fbe53df39ae24c/sketch_jan29a
)

For this assignment, I tackled the following parts:

1. Build a circuit with one servo motor, one potentiometer, and one momentary switch (often called a pushbutton).

Firstly I began by setting up my servo motor, however, when I was testing I noticed that although I had configured my wires properly, the motor still would not work. I laboured over 10 minutes trying to understand what I was doing wrong, until I found a backup servo and realised that I was using a faulty one. One challenge I faced was with the potentiometer. When adding my wires to the GND and 5V and the I/O (in this case, A0), the values of the potentiometer would still be very off, and the servo would move in a very jagged way, even if I manually changed the values myself. As a matter of fact, the cable itself would disconnect from my computer, so I was not even able to work with the potionmeter controlling the servo properly. However, I then decided to simply switch around the wires between the ones that were connected to GND and A0, and then my potentiometer began to work smoothly.

3. Modify the code to read the switch, and make the servo motor stop sweeping when the button is not pressed.

After experimenting with the Sweeper code, I changed my code to add the function of the push button. I edited the loop to add the following:

   if(digitalRead(buttonPin) == LOW)
  {
     sweeper1.Update();
     
  }
  As well as adding a varaible to store the value of the button pin: 

const int buttonPin = 2;


I realised that many of my mistakes just came from narrowly missing the correct spot to add jumper wires (because I wasn't wearing my glasses) and understanding how important it is to ensure that everything is plugged correctly, especially with a potentiometer, as it might take in incorrect values.

![Image](https://github.com/user-attachments/assets/e7a91f6a-d813-4e89-a0c2-9685d4ed2503)
