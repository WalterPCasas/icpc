from decimal import Decimal

notes = [100,50,20,10,5,2]
coins = [1,0.5,0.25,0.1,0.05, 0.01]

valor = Decimal(input())

print("NOTAS:")
for note in notes:
    cant = int(valor//note)
    valor = valor-(cant*note)
    print("{} nota(s) de R$ {:.2f}".format(cant, note))
    
valor *= 100

print("MOEDAS:")
for coin in coins:
    coin *= 100
    cant = int(valor//Decimal(coin))
    valor = Decimal(valor)-Decimal(cant*Decimal(coin))
    print("{} moeda(s) de R$ {:.2f}".format(cant, coin/100))
