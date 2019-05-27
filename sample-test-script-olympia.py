import time
import pytest
from SpannerTestboard import SpannerTestboard

testboard = SpannerTestboard("OlympiaTestboardEthernet")
INA219 = SpannerTestboard.INA219

BATTERY_RELAY_PIN = "D2"
MAINS_RELAY_PIN = "D2"


def seconds_passed(oldepoch, seconds):
    """ Returns true if seconds time has elapsed """
    return time.time() - oldepoch >= seconds


def test_measure_power_consumption():

    testboard.digitalWrite(MAINS_RELAY_PIN, 'HIGH')
    testboard.digitalWrite(BATTERY_RELAY_PIN, 'HIGH')
    time.sleep(5)

    print("Measuring Voltage & Current with both Power and Battery Connected")

    start_time = time.time()

    # 5 Hours test
    while not seconds_passed(start_time, 1 * 60): #seconds
        # Read voltage value
        voltage = testboard.ina219_getValue(INA219.BUS_VOLTAGE_V)
        #print("Voltage %.3f V" % voltage)

        current_ma = testboard.ina219_getValue(INA219.CURRENT_MA)
        print("Current Voltage %.3f mA %.3f V" % (current_ma, voltage) )

        # Get measurements every x seconds
        #time.sleep(5)
        
#     print("Emergency mode")
    testboard.digitalWrite(MAINS_RELAY_PIN, 'LOW')
#     testboard.digitalWrite(BATTERY_RELAY_PIN, 'HIGH')
        
#     start_time = time.time() # reset time
#     while not seconds_passed(start_time, 1 * 60): #seconds
#         # Read voltage value
#         voltage = testboard.ina219_getValue(INA219.BUS_VOLTAGE_V)
#         #print("Voltage %.3f V" % voltage)

#         current_ma = testboard.ina219_getValue(INA219.CURRENT_MA)
#         print("Current Voltage %.3f mA %.3f V" % (current_ma, voltage) )

#         # Get measurements every 5 seconds
#         time.sleep(5)
