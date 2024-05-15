class Parent:
    def __init__(self,name):
        self.name = name

    def Relation():
        pass

class Yeasin(Parent):
    def Relation(self):
        print(f"Yeasin parent is {self.name}")


class Rohim(Parent):
    def Relation(self):
        print(f"Rohims parent is {self.name}")

yeasin = Yeasin("Jalal")
yeasin.Relation()

rohim = Rohim('Rakib')
rohim.Relation()