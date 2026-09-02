class Client:
    def __init__(self, name : str, points : int = 0):
        self.name = name
        self.points = points

    def onPurchase(self):
        self.points += 1

    def showPoints(self):
        print(self.points)


if __name__ == "__main__":
    teste = Client("Yan")
    teste.showPoints()
    teste.onPurchase()
    teste.showPoints()