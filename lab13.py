import http.client as httplib
import urllib.parse as urllib
import time

key = "API_KEY"

def thermometer():
    temp = int(open('/sys/class/thermal/thermal_zone0/temp').read())
    params = urllib.urlencode({'field1': temp, 'key': key})
    headers = {
        "Content-type": 'application/x-www-form-urlencoded',
        "Accept": 'text/plain'
    }

    conn = httplib.HTTPConnection("api.thingspeak.com:80")
    try:
        conn.request("POST", "/update", params, headers)
        response = conn.getresponse()
        print(temp)
        print(response.status, response.reason)
        conn.close()
    except:
        print('Connection failed.')

if __name__ == "__main__":
    while True:
        thermometer()
        time.sleep(15)