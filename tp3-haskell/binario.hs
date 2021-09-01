module Binario where
    binario :: Int -> [Int]
    binario 1 = [1]
    binario 0 = [0]
    binario numero = if numero `mod` 2 == 0 then (binario (numero `div` 2)) ++ [0] else (binario (numero `div` 2)) ++ [1]