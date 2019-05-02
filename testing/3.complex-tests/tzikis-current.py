import time
import pytest
from SpannerTestboard import SpannerTestboard

testboard = SpannerTestboard("testboard_name")
#testboard = SpannerTestboard("photon-testboard")

BATTERY_RELAY_PIN = "D2"
MAINS_RELAY_PIN = "D6"


def test_measure_power_consumption():
    print("")
    testboard.digitalWrite(MAINS_RELAY_PIN, 'HIGH')
    testboard.digitalWrite(BATTERY_RELAY_PIN, 'HIGH')
    time.sleep(5)

    INA219 = SpannerTestboard.INA219
    time.sleep(1)

    print("Measuring Voltage & Current with both Power and Battery Connected")
    # print("Bus Voltage:")
    # voltage = testboard.ina219_getValue(INA219.BUS_VOLTAGE_V)
    # print(voltage)
    # time.sleep(1)


    for x in range(0, 40):
        #print("Current consumption (mA):")
        current = testboard.ina219_getValue(INA219.CURRENT_MA)
        print(current)
        assert (current < 30.5 and current > 22.5)
        time.sleep(1)


    # assert voltage < 4.6
    # assert current > -400


    # print("Disconnecting Power")
    # testboard.digitalWrite(MAINS_RELAY_PIN, 'LOW')
    # time.sleep(2)
    #
    # print("Measuring Voltage & Current with Power Disconnected")
    # print("Bus Voltage:")
    # voltage = testboard.ina219_getValue(INA219.BUS_VOLTAGE_V)
    # print(voltage)
    # time.sleep(1)
    #
    # print("Current consumption (mA):")
    # current = testboard.ina219_getValue(INA219.CURRENT_MA)
    # print(current)
    #
    # # assert current > 100
    # # assert current < 400
    #
    # testboard.digitalWrite(MAINS_RELAY_PIN, 'HIGH')
    # time.sleep(1)
