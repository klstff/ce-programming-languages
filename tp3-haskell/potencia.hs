module Potencia where
    potencia :: Int -> Int -> Int
    potencia a 0 = 1
    potencia a b = potencia a (b - 1) * a