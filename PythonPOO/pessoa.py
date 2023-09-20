class Pessoa:

    def __init__(self, nome, idade, comendo=False, falando=False):
        self.nome = nome
        self.idade = idade
        self.comendo = comendo
        self.falando = falando
    
    def falar(self, assunto):
        if(self.comendo == True):
            print(f'Nao pode falar enquanto come')
            return
        if (self.falando == True):
            print(f'{self.nome} já está falando')
            return 
        
        print(f'{self.nome} está falando de {str(assunto)}')
        self.falando = True

    def comer(self, alimento):
        if(self.falando == True):
            print(f"{self.nome} não pode comer falando")
            self.falando = False
            return 
        
        if(self.comendo == True):
            print(f'{self.nome} já está comendo.')
            return 

        print(f'{self.nome} esta comendo {str(alimento)}')
        self.comendo = True

    def parar_comer(self):
        if not self.comendo:
            print(f'{self.nome} não está comendo')
            return
        
        print(f'{self.nome} parou de comer')
        self.comendo = False