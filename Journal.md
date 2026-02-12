### **12.02**
I wanted to expand on my idea about having a conveyor belt with a bunch of tickets attached, to imitate some functionalities of the Papa Games, where at the top of the screen, the ticket slides from left to right.

When I began working on my idea,I realised that I didn’t have the circular, mental component that is attached to the motor, so I spent a lot of time attempting to figure out a way I could attach my string to the spinning motor without the plate (i ended up using double sided tape)

One mistake I had made was not completing my circuit properly, so my final GND wasn’t present, which actually led to a lot of short-circuiting.


<img width="657" height="862" alt="arduino setup" src="https://github.com/user-attachments/assets/d6e96a15-be67-4e8c-9dd3-68c3eabf89ae" />

### **05.02**

For my project idea, Papa's Pizzeria, I am thinkng of recreating the final part of the game mechanism, which is the rating and eating. 

This is all purely hypothetical, as I am not sure which part of my sketch & mechanism(s) are doable, but so far I am thinking of adding a rotating ticket system from the top, suspended by string or whatever tool is appropiate. It will go around from left to right in a cycle, and the mechanism I am thinking of using for this is [this particular one](https://507movements.com/mm_001.html) . Belpw, the cashier, stood behid the till, will raise his arm, which will be connected to a string that will lead the pizza box to open. Once it is opened, the customer will 'tip', which will be indicated by a green LED lighting up, and perhaps even triggering a cash noise sound. In addition, there will be a five-star rating system, which will light up according to the number of stars the customer wants to rate the pizza. The process of tipping and rating could be randomised, so that each time the button is pressed and the sceene is played again, if the star rating is below three stars, then there is no tip and a sad sound is triggered, if it is above then the tip jar goes green. This scene ends when the pizza box will close by the cashier's arm moving down.

Aplohies for my sketch, I'm not an artist haha

### *![IMG_7966](https://github.com/user-attachments/assets/e4ab80e4-0e3f-49b5-af3e-5642d2c1afe9)
*03.02**

I wasn’t able to inspect the project over the weekend because it was no longer present in the hallway - I’m not too sure if it got taken down and taken elsewhere.
GAME IDEAS
I’m not a gamer, so I don’t have specific ideas in general,nhowever, as a child, I was particularly fond of Papa’s cooking games: Papa’s Domuteria, Pizzeria, Freezeria etc… perhaps that could be fun to recreate. Perhaps one of the popular portions of the game, such as putting toppings on a sausage, or slicing the pizzas. It’s a purely digital game, so it would be intresting to see how we can turn it analogue
My mood-board is very simple as this game is digital, so I didn’t know what to specifically place inside: https://pin.it/2nxnfyyUC
I added images of typical scenes from a Papa’s cooking game, however they can differ. The setup for the Papa’s Game can be the background and the iconic character of the waiter, with the fonts and logo being directly from the game itself. I added an image of a grill – I was thinking this project can focus on the grilling aspect: A servo controlled ‘rotation’ griller, and when the sausage/steak/food is done grilling, then it rotates and it’s put on a plate, and that plate is controlled by a motor and brought over to the iconic customer rating desk.
<img width="657" height="862" alt="Screenshot 2026-02-02 185016" src="https://github.com/user-attachments/assets/67ca268e-94d6-4ae2-b446-907df93fd5d5" />




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
