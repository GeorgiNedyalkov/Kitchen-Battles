# Implementing Gameplay Mechanics

- [X] Wall Jump

Channels in Unreal Engine? Collision channels. Why to add them?

How to implement a Wall Jump?

- Every frame check if our character is jumping.
- Draw a Line trace from the character location to 1 meter forward to see if we can wall jump.
- If we can wall jump 
    - Set a flag to can wall jump
    - Get the characters velocity. 
        - Interep from the characters velocity to zero using delta time and an interep speed. 
        - Set the character velocity to as the return value of the interep.
        - If the character is in the middle of a wall slide.
            - Rotate the character to the opposite direction.
            - Launch the character in the opposite direction.

Add animations 
Maybe add effects
Figure out camera setup similar to it takes two.

Version 0.5 done