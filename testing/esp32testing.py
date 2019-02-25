import time
import Spanner
from Testboard import Testboard

testboard = Testboard("testboard_name")

# Our device's 1st Output Pin will be connected to the Testboard's D7, making it
# our Input Pin 1
INPUT_PIN_1 = "D7"
# Our device's 2nd Output Pin will be connected to the Testboard's D5, making it
# our Input Pin 2
INPUT_PIN_2 = "D5"

def validate_digital_input_high():
    # check PIN state
    value = testboard.digitalRead(INPUT_PIN_1)

    Spanner.assertTrue(value);

def validate_digital_input_low():
    # check PIN state
    value = testboard.digitalRead(INPUT_PIN_2)

    Spanner.assertFalse(value);

if __name__ == "__main__":

    validate_digital_input_high()

    time.sleep(2)

    validate_digital_input_low()
