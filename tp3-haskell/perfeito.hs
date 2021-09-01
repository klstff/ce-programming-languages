module Perfeito where
    perfeito :: Integer -> Bool
    perfeito x = if x == (somaDiv x (x - 1)) then True else False

    somaDiv :: Integer -> Integer -> Integer
    somaDiv x y
        | y == 1 = 1
        | x `mod` y == 0 = y + somaDiv x (y - 1)
        | otherwise = somaDiv x (y - 1)
