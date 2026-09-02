class Chair:
    def __init__(self, name : str, material : str, color : str, height : float, width : float, state : bool = True):
        self.name = name
        self.material = material
        self.color = color
        self.height = height
        self.width = width
        self.state = state

    def available(self):
        if self.state == True:
            print("Disponível para venda")
        else:
            print("Indisponível para venda")

if __name__ == "__main__":
    teste = Chair("Família","Wood","Brown",1.5,0.6)
    teste.available()
    teste.state = False
    teste.available()