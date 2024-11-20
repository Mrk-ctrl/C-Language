# from functools import reduce

# def sqr(x):
#     return x * x

# li = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
# newli = []

# for i in li:
#     newli.append(sqr(i))

# print(newli)

# li = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
# newli = list(map(lambda x: x * x, li))
# print(newli)


# def even(x):
#     if x % 2 == 0:
#         return x

# li = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
# newli = []

# for i in li:
#     newli.append(even(i))

# print(newli)


# li = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
# newli = list(filter(lambda x: x % 2 == 0, li))

# # 2 4 6 8 10
# value = reduce(lambda x, y: x + y, newli)
# print(value)