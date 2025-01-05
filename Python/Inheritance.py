
class TataMoters:
    def __init__(self, make, model, year):
        self.mMake = make
        self.mModel = model
        self.mYear = year
    
    def mStart(self):
        print("Starting the Car!")
    
    def mStop(self):
        print("Stopping the Car!")
    
    def mDisplay(self):
        print("Make :", self.mMake)
        print("Model :", self.mModel)
        print("Year :", self.mYear)

class ThreeSeries(TataMoters):
    def __init__(self, make, model, year, CruiseControlEnabled):
        super().__init__(make, model, year)
        self.mCruiseControlEnabled = CruiseControlEnabled
    
    def mDisplay(self):
        super().mDisplay()
        print("Cruise Control Enabled:", self.mCruiseControlEnabled)

    def mStart(self):
        print("Button Start")
        return super().mStart()
    
    def mStop(self):
        print("Button Stop")
        return super().mStop()
    
class FourSeries(TataMoters):
    def __init__(self, make, model, year, ParkingAssist):
        super().__init__(make, model, year)
        self.mParkingAssistEnabled = ParkingAssist
    
    def mDisplay(self):
        super().mDisplay()
        print("Parking Assist Enabled:", self.mParkingAssistEnabled)

    def mStart(self):
        print("Button Start")
        return super().mStart()
    
    def mStop(self):
        print("Button Stop")
        return super().mStop()
    
myCar = ThreeSeries("TATA", "Nexon", 2023, True)
myCar.mDisplay()
myCar.mStart()
