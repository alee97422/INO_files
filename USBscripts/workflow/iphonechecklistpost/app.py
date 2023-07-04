import tkinter as tk
from tkinter import filedialog


def browse_file():
    file_path = filedialog.askopenfilename(filetypes=[("Arduino Files", "*.ino")])
    if file_path:
        file_entry.delete(0, tk.END)
        file_entry.insert(tk.END, file_path)


def run_program():
    file_path = file_entry.get()
    try:
        with open(file_path, "r") as file:
            program_code = file.read()
            # Code to simulate running the Arduino program
            exec(program_code)
    except FileNotFoundError:
        print("File not found.")
    except Exception as e:
        print("An error occurred while running the program:", str(e))


root = tk.Tk()
root.title("Arduino Simulator")

# Create and place the file entry and browse button
file_entry = tk.Entry(root, width=50)
file_entry.pack(pady=10)

browse_button = tk.Button(root, text="Browse", command=browse_file)
browse_button.pack(pady=5)

# Create and place the Run button
run_button = tk.Button(root, text="Run", command=run_program)
run_button.pack(pady=10)

root.mainloop()
