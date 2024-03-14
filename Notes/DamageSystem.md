# Damage System Implementation notes

1. Create an interface "Damagable"

An interface is a blueprint where you define which functions an actor
should implement and how they are implemented.

Functions:

-   Get current health returns a float
-   Get max health returns a float
-   Heal input: amount a float and returns new health
-   Take damage:

Input: Damage Info

We need the amount of damage, who it came from, what kind of hit reactions to do.
Instead of adding all of this information to the interface, we can create a structure.

Output: Boolean wasDamaged

2. Create a structure "DamageInfo"

-   Damage Amount
-   Damage Type (Enum)

    2.1 Create an Enum DamageType:

    -   None
    -   Melee
    -   Projectile Damage
    -   Explosion
    -   Environment Damage

-   Damage Response (Enum)

    2.2 Create an Enum DamageResponse:

    -   None
    -   HitReaction
    -   Stagger
    -   Stun
    -   Knockback

If we have blocking and dodging we can add them as well.

-   Should damage invincible (invicibility frames)
-   Can be blocked
-   Can be parried
-   Should force interupt

3. Apply the Interface to our Actors

4. Create a Blueprint Component that we can attach to our Actor

Add all the variables that will be added to our character: Health, maxhealth, isDead, etc.

5. We attach the component to our Player Character and start implementing the functionality
   from the interface using our damage component.

-   Implement the heal function
