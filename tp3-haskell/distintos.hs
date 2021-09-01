module Distintos where
    distintos :: [Integer] -> Bool
    distintos [] = True
    distintos (x:y) = if iguais x y then False else distintos y

    iguais :: Integer -> [Integer] -> Bool
    iguais x [] = False
    iguais x (y:z) = if x/=y then iguais x z else True