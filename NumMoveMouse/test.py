from tkinter import *
from tkinter.font import *

root = Tk()
root.title("NumMoveMouse")
root.geometry("640x400")

frame = Frame(root)
frame.pack()

custom_font = Font(family="Arial", size=20)

nametitle = Label(root, text="NumMoveMouse", fg="black", font=custom_font, pady=12).pack()

userinfo = int

move_left = Entry(userinfo)
move_right = Entry(userinfo)
move_up = Entry(userinfo)
move_down = Entry(userinfo)

move_left.grid(row=2, column=1).pack()
move_right.grid(row=2, column=3).pack()
move_up.grid(row=1, column=0).pack()
move_down.grid(row=2, column=2).pack()

root.mainloop()
