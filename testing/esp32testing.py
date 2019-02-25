import time
from Spanner import Spanner
from Testboard import Testboard

testboard = Testboard("testboard_name")

# Our Product's Input will be connected the Testboard's Pin D3, making it our 
# Output Pin
OUTPUT_PIN = "D3"

def toggle_digital_output():
    # set PIN state
    value=testboard.digitalWrite(OUTPUT_PIN, 'HIGH')
    spanner.assertTrue(value)
    
    time.sleep(2)

    value=testboard.digitalWrite(OUTPUT_PIN, 'LOW')
    spanner.assertFalse(value)

if __name__ == "__main__":
    toggle_digital_output()
