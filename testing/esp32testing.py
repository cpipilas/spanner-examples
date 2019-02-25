import time
import Spanner
from Testboard import Testboard

testboard = Testboard("testboard_name")

# Our device's 1st Output Pin will be connected to the Testboard's D3, making it
# our Input Pin 1
INPUT_PIN_1 = "D3"

def validate_digital_input_high():
    # check PIN state
    value = testboard.digitalRead(INPUT_PIN_1)

    Spanner.assertTrue(value);

if __name__ == "__main__":

    validate_digital_input_high()
