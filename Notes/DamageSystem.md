# Damage System Implementation notes

1. Create an interface "Damagable"

An interface is a blueprint where you define which functions a character, or any other actor
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
