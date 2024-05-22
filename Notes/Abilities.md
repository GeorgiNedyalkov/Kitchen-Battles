# Special Abilities

## Horizontal Slash

The player swings the katana horizontally and spawns a projectile.

#### 1. Goal

Implement a horizontal slash ability

#### 2. Requirements

-   The player should be able to get the ability at a certain level.
-   The ability should cost "mana" points.
-   The ability should have cooldown.
-   The weapon should spawn a projectile like effect that damages all enemies.

#### 3. Tools

#### 4. Problem Breakdown

-   Horizontal Slash
    -   Pre attack
        -   Player presses the right mouse button
        -   Sheating Weapon animation is played and stopped at the end
    -   Start attack
        -   When the right mouse button is released
        -   An horizontal slash animation is played
        -   The weapon deals damage melee damage to targets in the line trace
        -   The weapon spawns a slash projectile that deals damage to enemies in range
        -   A sound effect is played
        -   Player loses mana points
    -   Post attack
        -   Mana starts regenerating

## Carrots Summon

The player stomps the sword in the ground in a given radius, little carrots spawn from the ground.
The carrots can follow the character around and then attack enemy like homing missiles.

#### 1. Goal

Create an ability that spawns baby carrots from ground that attack the enemies.

#### 2. Requirements

-   The ability should be executing for a set period of time
-   The character should be crouched during the execution of the ability
-   The ability should deal damage to multiple opponents
-   The player should not be able to move during the ability but can look around
-   The ability should have a slow cooldown timer **or** cost a lot of manna
-   The projectiles should not move if the player moves?

Powerup Ideas:

-   Increase range
-   Increase duration
-   Increase items spawned

#### 3. Tools

-   Niagara effects
-   Sound effects
-   Icons for effects
-   Cooldown timers

#### 4. Problem breakdown

-   Pre-Attack:
    -   Play animation that slams the sword in the ground
    -   Stop player input
    -   Play a sound
-   Attack:
    -   Spawn 10 baby carrots from the ground in a random place from a radius.
    -   The carrots are projectiles with an updard movement
    -   On hit the projectile explode with an effect and deal damage
