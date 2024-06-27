# AI

Creating enemies

- Create an **AI controller**:
    - `BeginPlay`

In the Enemy Character on `BeginPlay` we run the behavior tree.
The Enemy Character has a pointer to a behavior tree `UBehaviorTree*`

In the `AIController` on begin play we create an enemy character by getting the pawn
that and casting it to the `EnemyCharacter` class.

If this is successful we run the behavior tree.

- Create a Behavior Tree
- Create a Blackboard