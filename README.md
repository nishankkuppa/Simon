# Simon

Write an Arduino program that reenacts a game similar to Simon but follows the following rules:
Start by letting the board randomly light the red, blue, or green LEDs.
If the user presses the correct button that corresponds to the instantaneous LED color, the board should randomly light the correctly selected LED and one of the remaining two colors. (If not, do nothing).
The player now has to press the correct buttons corresponding to these colors; if 16 consecutive successes are achieved, then the board should light all three LEDs. If not, the red LED should light until the player presses the Start Game button.
