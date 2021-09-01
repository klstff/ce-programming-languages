module SomaParciais where
    somaParciais :: [Int] -> [Int]
    somaParciais [] = []
    somaParciais (x:lista) = [(x + y) | y <- (0:(somaParciais lista))]