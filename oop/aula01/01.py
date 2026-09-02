class Car:
    def __init__(self, model : str , color : str, state : bool = False, speed : float = 0):
        self.model = model
        self.color = color
        self.state = state
        self.speed = speed

    def changeModel(self, new_model : str):
        self.model = new_model
        print(self.model)

    def mudaCor(self, new_color : str):
        self.color = new_color
        print(self.color)

    def start(self):
        self.state = True
        print(self.state)

    def stop(self):
        self.state = False
        print(self.state)

    def accelerate(self):
        if self.state == False:
            print("Ligue o carro primeiro")
        else:
            self.speed += 1
            print(self.speed)
    def carBreak(self):
        if self.speed > 0:
            self.speed -= 1 
            print(self.speed)
        else:
            print("Carro está parado")

if __name__ == "__main__":
    carro = Car("Onix","Preto")
    carro.accelerate()
    carro.start()
    carro.carBreak()
    print(carro.speed)
    for i in range(5):
        carro.accelerate()
    carro.stop()