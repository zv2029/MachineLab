### **03.02**

I wasn’t able to inspect the project over the weekend because it was no longer present in the hallway - I’m not too sure if it got taken down and taken elsewhere.
GAME IDEAS
I’m not a gamer, so I don’t have specific ideas in general,nhowever, as a child, I was particularly fond of Papa’s cooking games: Papa’s Domuteria, Pizzeria, Freezeria etc… perhaps that could be fun to recreate. Perhaps one of the popular portions of the game, such as putting toppings on a sausage, or slicing the pizzas. It’s a purely digital game, so it would be intresting to see how we can turn it analogue
My mood-board is very simple as this game is digital, so I didn’t know what to specifically place inside: https://pin.it/2nxnfyyUC
I added images of typical scenes from a Papa’s cooking game, however they can differ. The setup for the Papa’s Game can be the background and the iconic character of the waiter, with the fonts and logo being directly from the game itself. I added an image of a grill – I was thinking this project can focus on the grilling aspect: A servo controlled ‘rotation’ griller, and when the sausage/steak/food is done grilling, then it rotates and it’s put on a plate, and that plate is controlled by a motor and brought over to the iconic customer rating desk.




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
