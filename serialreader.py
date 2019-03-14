from serial import Serial

monitor = None
def set_port(port='/dev/ttyACM0'):
	global monitor
	monitor = Serial(port, 9600)

def read():
	return float(monitor.readline()[len('sensor = '):])

