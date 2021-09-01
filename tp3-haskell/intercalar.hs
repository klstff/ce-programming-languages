module Intercalar where
    intercalar :: [Int] -> [Int] -> [Int]
    intercalar [] lista = lista
    intercalar lista [] = lista
    intercalar (x:lista_1) (y:lista_2) = if (x < y) then [x, y] ++ intercalar lista_1 lista_2 else [y, x] ++ intercalar lista_1 lista_2