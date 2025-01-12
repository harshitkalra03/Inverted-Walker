# Inverted-Walker
The inverted walker uses a **crankshaft mechanism** powered by two single-shaft BO motors, supported by circuit design, programming, 3D mechanical design and documentation.

![image alt](https://github.com/harshitkalra03/Inverted-Walker/blob/f6aedaf32aba262bfa774577ba54799a4aca6c15/Prototype_Image.png)
---
## Timeline - 
1. **Day 1:**
- Given the short time of two days, we needed to complete the making of the CAD model of our inverted walker and get it laser cut from cast acrylic within 24 hours.
- We quickly got to making the models going through a few iterations till we settled on a stepper type configuration given its simplicity, feasibility, speed. We then went about a few ways to implement a similar model in solidworks.
- We worked through the iterations until we settled upon the final design.

2. **Day 2:**
- The next day, we got it laser cut and moved in the assembly stage. This is the stage where we found the most problems which we had to deal with on the spot. The first of which was the anchoring each piece with another. We went with the intention of drilling and screwing each 90 degrees.
- We then realised that the acrylic sheets would be too brittle to facilitate this method. This lead us to use some less than ideal adhesives that were available at the time for the fixing of the pieces together.
- Another problem was the absence of appropriate bolts in our area (for the fixing of the moving joints) which lead to some major setbacks in our timeline while we searched for appropriate solutions.
- Eventually, we were able to find just enough screws and also figured out a way to use less screws. But that's not all, we still encountered other problems like the immobility of some of the joints which lead us to create some makeshift elongated washers using heat sinks. We also tried different configurations of the mechanical system including one using an arduino to control the motors individually.

![image alt](https://github.com/harshitkalra03/Inverted-Walker/blob/f27dff1513900a4bfc01c48158f7fdf746902a9a/Laser_Cut_Parts.jpeg)

3. **Day 3:**
- Night turned to day where we continued to work on the inverted walker. Now we worked mainly on the weight reduction of the bot by the removal of redundant material using a heated blade which a long but necessary.
- We also worked on the weight balancing of the bot and the alignment of the arms. We found the optimal position of the motors and fixed them onto the battery cover. We also worked on the circuitry of the system which considering our other challenges was rather easy. 



---



## Components -
1. <ins>Fabrication Components</ins>
  - Acrylic Sheets (30☓30☓4.5 mm)
  - Duct tape
  - Heat shrink sleeves
  - Rubber Pads for an increased grip to the wire
  - Cyanoacrylate or an alternative adhesive
  - Sand Paper
    
2. <ins>Electrical Components</ins>
  - BO Single axel motor
  - Micro-Breadboard
  - Li-Po Battery (1300 mah)
  - Nuts and bolts (3mm)
  - Male to male wires
  - Connectors
  - Two way switch

3. <ins>Softwares Used</ins>
  - SolidWorks
  - Cirkit Designer

## Machinery - 
  - CO2 laser cutter
  - Drills along with appropriate drill bits

![image alt](https://github.com/harshitkalra03/Inverted-Walker/blob/d4b2853abd775858e7de00568654a2862bdbb249/Laser_Cutting_Machine.jpg)

## Possible Applications -
  - The actual implementation of an abrasive blaster as well as a spray paint system for the application of the anti-corrosive layer.
  - An induction charger is used to change the electric fields of the high-tension wires to power the walker.

## We had a discussion into the possible impacts of our technology in certain areas -
The decrease in cost and increase in efficiency of the power lines will lead to a decrease in consumer rates, more significant investments in other infrastructure, and an increase in the profits of the power supply company. This also increases the safety of the workers who might have to interact with these high-voltage wires for maintenance. It can also reduce the waste produced by the corroded wires, making it more environmentally sustainable. Similar designs can also be used for the easy and safe inspection of steel cables in bridges with the help of ultrasonic modules, vibration measurements, etc. Another niche application of this technology is the maintenance of zipline cables through cleaning, applying anti-corrosive layers, and safely removing dust, snow, and other debris.


## Errors and Faults Experienced -
Throughout the process, we noticed a few points that we could learn from.
1. <ins>Construction & Designing Faults</ins>
- During designing use of **simulation tools** so as to visualise the movement of robot and analysis of its stability was not taken into account due to which we failed to have a smooth execution.
- The weight of the robot is an important factor, which was slightly ignored by us while designing the body of the robot. We could cut out the ***empty spaces*** from the acrylic sheets to reduce weight.

  
2. <ins>Execution Faults</ins>
- Due to limited time constraint, we were not able to conduct proper test runs to deeply analyse the performance, speed and stability of robot during runtime.
- The most crucial issue we faced is with the synchronisation of the BO Motors so as avoid collision between the two hands. This majorly appeared due to a slight change of design during fabrication.

---

## Points to Improve upon - 
- The use of a ***slotting type*** mating system for the strong sticking of the acrylic pieces to each other. Since, we cannot make use of screws (or it is tricky to do so) due to less thickness of the acrylic sheets used (4.5mm), we can use slots in each piece that fit into a corresponding hole in the corresponding piece which ensures a rigid joint. This could eliminate our use of duct tape making the overall design cleaner.
- Currently the entire mechanism of movement of the robot is based on the structure and design of the robot, which could be improved by defining a **electronics based control system** so as to create a sync between the mechanics and electronics. This would be deeply help in the ***self synchronisation*** of the motors especially in case where one fails to set the initial phase difference between the motors manually or it disrupts due to unexpected runtime faults.

![image alt](https://github.com/harshitkalra03/Inverted-Walker/blob/580f37b012421c8fcf8fd30668e0292d926a1ff4/Circuit%20Design%20of%20the%20inverted%20Walker.jpg)

- Due to constrained rules and guidlines of the competition for which we prepared the robot we were forbidden to add a ***roller based mechanism*** for enhancing speed and stability. This could be enhanced by using high RPM BO motors. Also, the current backward supporting mechanism is ***slider based mechanism*** which could be replaced by placing **rollers**.
- For enhancing speed we could use gears and for increasing torque we could use extension shaft for motors. This would deeply help applications with heavy payloads.
