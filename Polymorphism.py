class Student:
    def Status(self, name):
        print(name)
        print("Hello student")

class Yeasin(Student):
    def Status(self):
        return super().Status("yeasin")
    
obj = Yeasin()
obj.Status()