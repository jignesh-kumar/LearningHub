### 1st Example of Class in Python
class Store:
    def __init__(self):
        self.mProductName = "iPhone"
        self.mProductDescription = "This cellphone is aswome"
        self.mProductPrice = 5999
    def __del__(self):
        print("Invoking Destrucctor of Class Store!")

Obj1 = Store()

print(Obj1.mProductName)
print(Obj1.mProductDescription)
print(Obj1.mProductPrice)
Obj1 = None

### 2nd Example of Class in Python
class Device:
    def __init__(self, devicename, deviceDesc, devicePrice):
        self.mDeviceName = devicename
        self.mDeviceDescription = deviceDesc
        self.mDevicePrice = devicePrice
    def __del__(self):
        print("Invoking Destuctore class of Device!")

Obj2 = Device("HeadPhone", "This aswome for Audio!", 3499)
print(Obj2.mDeviceName)
print(Obj2.mDeviceDescription)
print(Obj2.mDevicePrice)
Obj2 = None

### 3rd Example of Class in Python
class Movie:
    def __init__(self, movieName, movierating):
        self.mMovieName = movieName
        self.mMovieRating = movierating
    
    def __del__(self):
        print("Invoking Destrctore of Class Movie!")

    def MovieRatings(self):
        MovideRatingAvg = sum(self.mMovieRating)/len(self.mMovieRating)
        print(f"Movie {self.mMovieName} Ratings is {MovideRatingAvg}")

movie1 = Movie("Dev-D", [1,3,4,2,1])
movie1.MovieRatings()

movie1 = Movie("Krish", [4,3,4,5,5])
movie1.MovieRatings()

movie1 = Movie("Dhamaal", [1,3,3,2,2])
movie1.MovieRatings()
movie1 = None


### 3rd Example of Class in Python, with Set and Get methods
class Programmer:
    def __del__(self):
        print("Invoking desctore of class Programmer!")
    def SetProgrammerName(self, name):
        self.mProgrammerName = name
    def GetProgrammerName(self):
        return self.mProgrammerName
    def SetProgrammerSalary(self, sal):
        self.mProgrammerSalary = sal
    def GetProgrammerSalary(self):
        return self.mProgrammerSalary
    def SetProgrammerTechnoligies(self, techs):
        self.mProgrammerTechnoligies = techs
    def GetProgrammmerTecgnoligies(self):
        return self.mProgrammerTechnoligies

progmer1 = Programmer()
progmer1.SetProgrammerName("jonty")
progmer1.SetProgrammerSalary("3000000")
progmer1.SetProgrammerTechnoligies(["C++", "Python", "Java"])

print(progmer1.GetProgrammerName())
print(progmer1.GetProgrammerSalary())
print(progmer1.GetProgrammmerTecgnoligies())
progmer1 = None
