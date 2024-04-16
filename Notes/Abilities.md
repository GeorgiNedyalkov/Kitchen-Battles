# Special Abilities

## Horizontal Slash 

The player swings the katana horizontally and spawns a projectile.

#### 1. Goal

Implement a horizontal slash ability

#### 2. Requirements

- The player should be able to get the ability at a certain level.
- The ability should cost "mana" points.
- The ability should have cooldown.
- The weapon should spawn a projectile like effect that damages all enemies.

#### 3. Tools
#### 4. Problem Breakdown

- Horizontal Slash
    - Pre attack 
        - Player presses the right mouse button
        - Sheating Weapon animation is played and stopped at the end
    - Start attack
        - When the right mouse button is released
        - An horizontal slash animation is played
        - The weapon deals damage melee damage to targets in the line trace
        - The weapon spawns a slash projectile that deals damage to enemies in range
        - A sound effect is played
        - Player loses mana points
    - Post attack
        - Mana starts regenerating


#### Problems:

