module Primo where
    primo :: Integer -> Bool
    primo x = if x /= 1 then verificaNumero x (x - 1) else if x == 1 then True else False

    verificaNumero :: Integer -> Integer -> Bool
    verificaNumero x y
      | y == 1 = True
      | x `mod` y == 0 = False
      | otherwise = verificaNumero x (y - 1)