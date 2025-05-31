
#I rejected this file

from tkinter import *
from tkinter.font import *

root = Tk()
root.title("NumMoveMouse")
root.geometry("640x400")

custom_font = Font(family="Arial", size=20)

nametitle = Label(root, text="NumMoveMouse", fg="black", font=custom_font, pady=12).pack()

root.mainloop()
