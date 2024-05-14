# class
class Student:
    name = ''
    roll = 0

    def __init__(self, name, roll) -> None:
        self.name = name
        self.roll = roll

# object
yeasin = Student('yeasin', 10)

print(yeasin.name)
print(yeasin.roll)