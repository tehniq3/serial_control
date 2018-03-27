import serial # import the serial library
import time # import the time library
from Tkinter import * #import Tkinter GUI library 


def n1():
	arduino.write('xn1')
def n2():
	arduino.write('xn2')	
def n3():
	arduino.write('xn3')	
def n4():
	arduino.write('xn4')
def n5():
	arduino.write('xn5')
def t1():
	arduino.write('xt1')	
def t2():
	arduino.write('xt2')
def t3():
	arduino.write('xt3')
def t4():
	arduino.write('xt4')
def t5():
	arduino.write('xt5')
def p1():
	arduino.write('xp1')	
def p2():
	arduino.write('xp2')
def p3():
	arduino.write('xp3')
def p4():
	arduino.write('xp4')
def p5():
	arduino.write('xp5')


	

print 'Connecting...'
arduino = serial.Serial('COM3', 9600)
time.sleep(3)
print 'Connection established successfully'

appWindow = Tk() # creates the application window (you can use any name)
appWindow.wm_title("niq_ro's Python Control") # displays title at the top left
appWindow.config(bg ="#037481")

mainFrame = Frame(appWindow, bg="#037481") #define the main frame of the GUI
mainFrame.grid() #grid the frame into the App Window

btnFrame = Frame(mainFrame, bg="#037481") #define the frame within the main frame that holds buttons
btnFrame.grid() #grid the frame into the main frame

about = "GUI CONTROL by niq_ro"
name = Label(btnFrame, width=20, height=1, text=about, font="bold", justify=CENTER, bg="#037481")
name.grid(row=0, column=0)


LEDBtn = Button(btnFrame, text="n=1", command=n1, bg="red") #create a button inside the btnFrame with the given features
LEDBtn.grid(row=1, column=1) #grid the button in a specific row and column within the btnFrame

LEDBtn = Button(btnFrame, text="n=2", command=n2, bg="red") #create a button inside the btnFrame with the given features
LEDBtn.grid(row=1, column=2) #grid the button in a specific row and column within the btnFrame

LEDBtn = Button(btnFrame, text="n=3", command=n3, bg="red") #create a button inside the btnFrame with the given features
LEDBtn.grid(row=1, column=3) #grid the button in a specific row and column within the btnFrame

LEDBtn = Button(btnFrame, text="n=4", command=n4, bg="red") #create a button inside the btnFrame with the given features
LEDBtn.grid(row=1, column=4) #grid the button in a specific row and column within the btnFrame

LEDBtn = Button(btnFrame, text="n=5", command=n5, bg="red") #create a button inside the btnFrame with the given features
LEDBtn.grid(row=1, column=5) #grid the button in a specific row and column within the btnFrame

LEDBtn = Button(btnFrame, text="50ms", command=t1, bg="yellow") #create a button inside the btnFrame with the given features
LEDBtn.grid(row=2, column=1) #grid the button in a specific row and column within the btnFrame

LEDBtn = Button(btnFrame, text="100ms", command=t2, bg="yellow") #create a button inside the btnFrame with the given features
LEDBtn.grid(row=2, column=2) #grid the button in a specific row and column within the btnFrame

LEDBtn = Button(btnFrame, text="150ms", command=t3, bg="yellow") #create a button inside the btnFrame with the given features
LEDBtn.grid(row=2, column=3) #grid the button in a specific row and column within the btnFrame

LEDBtn = Button(btnFrame, text="200ms", command=t4, bg="yellow") #create a button inside the btnFrame with the given features
LEDBtn.grid(row=2, column=4) #grid the button in a specific row and column within the btnFrame

LEDBtn = Button(btnFrame, text="250ms", command=t5, bg="yellow") #create a button inside the btnFrame with the given features
LEDBtn.grid(row=2, column=5) #grid the button in a specific row and column within the btnFrame

LEDBtn = Button(btnFrame, text="1s", command=p1, bg="green") #create a button inside the btnFrame with the given features
LEDBtn.grid(row=3, column=1) #grid the button in a specific row and column within the btnFrame

LEDBtn = Button(btnFrame, text="2s", command=p2, bg="green") #create a button inside the btnFrame with the given features
LEDBtn.grid(row=3, column=2) #grid the button in a specific row and column within the btnFrame

LEDBtn = Button(btnFrame, text="3s", command=p3, bg="green") #create a button inside the btnFrame with the given features
LEDBtn.grid(row=3, column=3) #grid the button in a specific row and column within the btnFrame

LEDBtn = Button(btnFrame, text="4s", command=p4, bg="green") #create a button inside the btnFrame with the given features
LEDBtn.grid(row=3, column=4) #grid the button in a specific row and column within the btnFrame

LEDBtn = Button(btnFrame, text="55", command=p5, bg="green") #create a button inside the btnFrame with the given features
LEDBtn.grid(row=3, column=5) #grid the button in a specific row and column within the btnFrame


appWindow.mainloop()# begins main loop
