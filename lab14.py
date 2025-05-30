import Adafruit_DHT
import time

while True:
    humidity, temperature = Adafruit_DHT.read_retry(11,4)
    print(f"Humidity: {humidity:.1f}%\nTemperature: {temperature:.1f} C")
    time.sleep(1)