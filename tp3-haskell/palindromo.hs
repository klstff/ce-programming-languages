module Palindromo where
    inversa :: [Int] -> [Int]
    inversa [] = []
    inversa (x:lista) = inversa lista ++ [x]

    palindromo :: [Int] -> Bool
    palindromo lista = if inversa lista == lista then True else False