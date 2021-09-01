module Trocar where
    nota :: Int -> Int
    nota valor = if valor >= 100 then 100 else if valor >= 50 then 50 else if valor >= 10 then 10 else if valor >= 5 then 5 else 1

    trocar :: Int -> [Int]
    trocar 0 = []
    trocar valor = trocar (valor - nota valor) ++ [nota valor]