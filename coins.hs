
toInt :: Float -> Int
toInt x = round $ x*100

change :: Int -> Int -> Int
change x y = x `div` y


initList :: [Int]
initList = []

changer :: Int -> [Int] -> Int -> Int
changer x list y = change (foldl (-) x list) y

toCents :: Float -> Int
toCents x = round $ x * 100

main = do 
    input <- getLine
    let amount = (read input :: Float)
    let cents = toInt amount
    let list = initList

    let change100r = changer cents list (toCents 100)

    let temp = list ++ [((change100r)*10000)]
    let list = temp

    let change50r = changer cents list (toCents 50)

    let temp = list ++ [(change50r * 5000)]
    let list = temp

    let change20r = changer cents list (toCents 20)

    let temp = list ++ [(change20r * 2000)]
    let list = temp

    let change10r = changer cents list (toCents 10)

    let temp = list ++ [(change10r * 1000)]
    let list = temp

    let change5r = changer cents list (toCents 5)

    let temp = list ++ [(change5r * 500)]
    let list = temp

    let change2r = changer cents list (toCents 2)

    let temp = list ++ [(change2r * 200)]
    let list = temp

    let change1r = changer cents list (toCents 1)

    let temp = list ++ [(change1r * 100)]
    let list = temp

    let change50c = changer cents list (toCents 0.5)

    let temp = list ++ [(change50c * 50)]
    let list = temp

    let change25c = changer cents list (toCents 0.25)

    let temp = list ++ [(change25c * 25)]
    let list = temp

    let change10c = changer cents list (toCents 0.1)

    let temp = list ++ [(change10c * 10)]
    let list = temp

    let change5c = changer cents list (toCents 0.05)

    let temp = list ++ [(change5c * 5)]
    let list = temp

    let change1c = changer cents list (toCents 0.01)

    putStr.id $ "O numero de notas de 100 é: "
    print(change100r)

    putStr.id $ "O numero de notas de 50 é: "
    print(change50r)

    putStr.id $ "O numero de notas de 20 é: "
    print(change20r)

    putStr.id $ "O numero de notas de 10 é: "
    print(change10r)

    putStr.id $ "O numero de notas de 5 é: "
    print(change5r)

    putStr.id $ "O numero de notas de 2 é: "
    print(change2r)

    putStr.id $ "O numero de moedas de 1 é: "
    print(change1r)

    putStr.id $ "O numero de moedas de 50c é: "
    print(change50c)

    putStr.id $ "O numero de moedas de 25c é: "
    print(change25c)

    putStr.id $ "O numero de moedas de 10c é: "
    print(change10c)

    putStr.id $ "O numero de moedas de 5c é: "
    print(change5c)

    putStr.id $ "O numero de moedas de 1c é: "
    print(change1c)


    



   