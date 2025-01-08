class Flight:
    def __init__(self, engine):
        self.engine = engine

    def StartEngine(self):
        self.engine.Start()


class AirBusEngine:
    def Start(self):
        print("Starting Airbus Engine")


class BoingEngine:
    def Start(self):
        print("Staring Boing Engine")


ae = AirBusEngine()
fe = Flight(ae)
fe.StartEngine()

be = BoingEngine()
bf = Flight(be)
bf.StartEngine()
