# How to implement Interactables?

A case study on Stack-o-Bot




## Interact component

All interactable items have an interaction component.

The interaction component does several things:
- Enables Interactivity
- Disables Interactivity

It sets an `Interactable` flag and dispatches an event to Toggle the interactability.

- Starts Interaction
- Stops Interaction

When we start the interaction we check if the `Interactable` flag is true. If so, 
toggle the activated flag and dispatch an On Interact Event.

To stop the interaction dispatch an OnInteract event and set the `Activated` flag to false.

- Checks for the orientation of the character.

It gets the player forward vector and the actors forward vector, calculates their dot product,
and if the dot product is less than or equal to -0.5, the character is looking in the general direction of the interactable.
This either enables or disables interactivity.


## Button

A button blueprint is added the Interact Component.

On begin play the button binds to the OnInteract event, so that when this event is dispatched, the button executes its own event called `PressButton`. It is the same thing for the on toggle interactability event.

When the button is pressed. An animation is played for the player. And then a timeline is updating for 0.5 seconds. The value returned is a button movement which is multiplied by -10.0 and set as the new relative location of the button mesh. The button movement value is multiplied by 5 and set to the scalar parameter value of a dynamic material instance is with name `Emissive` 

In the construction script a dynamic material instance is created with the button mesh as a target, of a material `MI_Glow` this material is saved to a variable and the Scalar Parameter value is set to zero. 

The button also has an interaction area which is a custom collision that only checks for pawns. If the player interact with it, the start orientation check of the intaraction component is called. Then we cast to the bot and save it to a variable as the interacting character so that we can call an animation on him.

When we leave the interaction area we stop the orientation check and clear the intaracting character variable.




## Elevator and a Button


