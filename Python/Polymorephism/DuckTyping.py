
class Duck:
    def talk(self):
        print("Quack Quack")

class Human:
    def talk(self):
        print("Hello")


def CallTalk(obj):
    obj.talk()

dobj = Duck()
CallTalk(dobj)

hobj = Human()
CallTalk(hobj)
