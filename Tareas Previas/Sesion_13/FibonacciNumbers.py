# Generador de los numeros de fibonacci
def fibonacci_numbers(nums):
    x, y = 0, 1
    for _ in range(nums):
        x, y = y, x+y 
        yield x

# Generador para obtener el cuadrado de los valores recibidos
def square(nums):
    for num in nums:
        yield num**2

# Se imprime la suma de los cuadrador de una lista de 10 numeros de la secuencia de Fibonacci
print(sum(square(fibonacci_numbers(10))))