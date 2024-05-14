# class
class Student:
    name = ''
    roll = 0

    def __init__(self, name, roll) -> None:
        self.name = name
        self.roll = roll

    # method
    def appreciate(self):
        print(self.name)
        if self.roll < 5:
            print("is a good student")
        else:
            print("need to improve")

# object
yeasin = Student('yeasin', 10)


yeasin.appreciate()